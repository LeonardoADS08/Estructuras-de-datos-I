#pragma once
#include "Lista.h"
#include "Memoria.h"
#include "Monomio.h"
#include "Nodo.h"
#include <iostream>  

using namespace System::Diagnostics;
using namespace System;
using namespace std;

template<class T>
class Aplicacion : public Lista<T>
{
private:
	Lista<Monomio> _pol;

	void invertirRecursivo(int, int);
	void invertirMonomio(Lista<Monomio> &, int, int);
	void eliminarRepeticiones(int);
	int enesimoCircularElemento(int);
	bool esRepetido(Lista<T>, T, int);
	void InsertarOrdenadamentePolinomio(Lista<Monomio> &, Nodo<Monomio>);

public:
	Aplicacion() { }
	void guardarMemoriaEnLista(Memoria<T>);
	void guardarListaEnMemoria(Memoria<T> &);

	void guardarPolinomioEnLista(Memoria<T>);
	void guardarListaEnPolinomio(Memoria<T> &);

	void invertirLista();
	void eliminarDuplicados();
	void eliminarTriplicados();
	void insertarOrdenadamente(T);
	void ordenarLista();
	void juegoJose(int);
	void devolverRepetidos(Lista<T> &);
	void EliminarSN(Lista<string> &);


	void Polinomio(Lista<Monomio> val) { _pol = val; }
	Lista<Monomio> Polinomio() { return _pol; }

	void SumarPolinomios(Lista<Monomio> b);
	void RestarPolinomios(Lista<Monomio> b);
	void MultiplicarPolinomios(Lista<Monomio> b);
	void DerivarPolinomios();
	void IntegrarPolinomios();

	void Objeto(Aplicacion val) { *this = val; }
	Aplicacion Objeto() { return *this; }
};


template<class T>
void Aplicacion<T>::guardarMemoriaEnLista(Memoria<T> val)
{
	this->Reinicializar();
	Nodo<T> temp;
	for (int i = 0; i < val.Tamano(); ++i)
	{
		temp.Elemento(val.Datos(i));
		this->Insertar(temp, -1);
	}
}

template<class T>
void Aplicacion<T>::guardarListaEnMemoria(Memoria<T> &val)
{
	int i = this->Primero(), j = 0, Fin = this->FinLista();
	while (i != Fin)
	{
		val.Datos(j, this->LocalizarPuntero(i).Elemento());
		++j;
		i = this->Proximo(i);
	}
	val.Tamano(j);
}


template<class T>
void Aplicacion<T>::guardarPolinomioEnLista(Memoria<T> val)
{
	_pol.Reinicializar();

	Nodo<Monomio> temp;
	Monomio aux;
	for (int i = 0; i < val.Tamano(); i += 2)
	{
		aux.Coeficiente(val.Datos(i));
		aux.Exponente(val.Datos(i + 1));
		temp.Elemento(aux);
		_pol.Insertar(temp, -1);
	}
}

template<class T>
void Aplicacion<T>::guardarListaEnPolinomio(Memoria<T> &val)
{
	int i = _pol.Primero(), j = _pol.Tamano() * 2 - 1, Fin = _pol.FinLista();
	Monomio aux;
	val.Tamano(j + 1);
	while (i != Fin)
	{
		aux = _pol.LocalizarPuntero(i).Elemento();
		val.Datos(j, aux.Exponente());
		--j;
		val.Datos(j, aux.Coeficiente());
		--j;

		i = _pol.Proximo(i);
	}

}

template<class T>
void Aplicacion<T>::invertirLista()
{
	invertirRecursivo(this->Primero(), this->Ultimo());
}

template<class T>
void Aplicacion<T>::invertirRecursivo(int inicio, int fin)
{
	if (inicio == fin) return; // Caso base #1: Caso que sean cantidad de elementos impares

	int proximoInicio = this->Proximo(inicio), anteriorUltimo = this->LocalizarPunteroAnterior(fin);
	if (proximoInicio == fin && anteriorUltimo == inicio) return; // Caso base #2: Caso que sean cantidad de elementos pares
	invertirRecursivo(proximoInicio, anteriorUltimo);

	Nodo<T> valorInicio = this->LocalizarPuntero(inicio), valorFinal = this->LocalizarPuntero(fin);
	this->EditarNodo(inicio, valorFinal);
	this->EditarNodo(fin, valorInicio);

	return;
}

template<class T>
void Aplicacion<T>::eliminarRepeticiones(int veces)
{
	int i = this->Primero(), j, ant, ult = this->FinLista();
	Nodo<T> aux;
	int rep;
	while (i != ult)
	{
		j = Proximo(i); ant = i;
		rep = 0;
		while (j != ult)
		{
			if (this->LocalizarPuntero(i) == this->LocalizarPuntero(j)) rep++;
			if (rep >= veces - 1)
			{
				this->Eliminar(aux, ant);
				j = ant;
			}
			ant = j;
			j = Proximo(j);
		}

		i = this->Proximo(i);
	}
}

template<class T>
void Aplicacion<T>::eliminarDuplicados()
{
	eliminarRepeticiones(2);
}

template<class T>
void Aplicacion<T>::eliminarTriplicados()
{
	eliminarRepeticiones(3);
}

template<class T>
void Aplicacion<T>::insertarOrdenadamente(T dato)
{
	Nodo<T> val(dato);
	if (this->Vacia()) this->Insertar(val, -1);
	else
	{
		int i = this->Primero(), Fin = FinLista(), Ult = Ultimo();
		Nodo<T> aux;


		while (i != Fin)
		{
			aux = this->LocalizarPuntero(i);

			// Caso sea menor que el elemento
			if (val.Elemento() < aux.Elemento())
			{
				this->Insertar(val, this->LocalizarPunteroAnterior(i));
				return;
			}
			// Caso que se encuentre en el final
			else if (i == Ult) this->Insertar(val, Ult);

			i = Proximo(i);
		}
	}
}

template<class T>
void Aplicacion<T>::ordenarLista()
{
	int i = this->Primero(), j, Fin = this->FinLista();
	Nodo<T> aux;
	while (i != Fin)
	{
		j = this->Proximo(i);
		while (j != Fin)
		{
			if (this->LocalizarPuntero(i).Elemento() > this->LocalizarPuntero(j).Elemento())
			{
				aux = this->LocalizarPuntero(i);
				this->EditarNodo(i, this->LocalizarPuntero(j));
				this->EditarNodo(j, aux);
			}
			j = this->Proximo(j);
		}
		i = this->Proximo(i);
	}
}

template<class T>
void Aplicacion<T>::juegoJose(int paso)
{
	int i = this->Primero(), siguiente, anterior, movimientos = 0, pos = 1;
	Nodo<T> aux;
	while (this->Tamano() != 1)
	{
		// Eliminar si se completo el ciclo
		if (movimientos == paso)
		{
			movimientos = 0;

			// Se elimina el elemento
			anterior = this->LocalizarPunteroAnterior(i);
			this->Eliminar(aux, anterior);

			// Se reposiciona el apuntador de donde empieza a contar
			pos++;
			siguiente = enesimoCircularElemento(pos);
			i = siguiente;

			continue;
		}

		// Recorrer la lista circularmente
		if (Proximo(i) == FinLista()) i = Primero();
		else i = Proximo(i);
		movimientos++;
	}
}

template<class T>
int Aplicacion<T>::enesimoCircularElemento(int n)
{
	int i = this->Primero(), siguiente = Proximo(i), movimientos = 0;
	while (movimientos == n)
	{
		// Recorrer la lista circularmente
		if (Proximo(i) == FinLista()) i = Primero();
		else i = Proximo(i);
		movimientos++;
	}
	return i;
}

template<class T>
bool Aplicacion<T>::esRepetido(Lista<T> lista, T valor, int veces)
{
	int i = lista.Primero(), ult = lista.FinLista(), rep = 0;
	Nodo<T> aux;
	while (i != ult)
	{
		aux = lista.LocalizarPuntero(i);
		if (aux.Elemento() == valor) rep++;
		if (rep == veces) return true;

		i = lista.Proximo(i);
	}

	return false;
}

template<class T>
void Aplicacion<T>::devolverRepetidos(Lista<T> &res)
{
	int i = this->Primero(), ult = this->FinLista();
	Nodo<T> aux;
	while (i != ult)
	{
		aux = this->LocalizarPuntero(i);
		if (esRepetido(this->Objeto(), aux.Elemento(), 2) && !esRepetido(res, aux.Elemento(), 1))
			res.Insertar(aux, -1);

		i = this->Proximo(i);
	}
}

template<class T>
void Aplicacion<T>::EliminarSN(Lista<string> &res)
{
	int i = res.Primero(), ant = -1, ult = res.FinLista(), tam;
	string aux;
	Nodo<string> temp;
	while (i != ult)
	{
		aux = res.LocalizarPuntero(i).Elemento();
		if (aux == "") return;
		tam = aux.length();
		if (aux[tam - 1] == (int)'n' || aux[tam - 1] == (int)'N' || aux[tam - 1] == (int)'s' || aux[tam - 1] == (int)'S')
		{
			res.Eliminar(temp, ant);
			i = ant;
		}
		ant = i;
		i = res.Proximo(i);
	}
}

template<class T>
void Aplicacion<T>::invertirMonomio(Lista<Monomio> &lista, int inicio, int fin)
{
	if (inicio == fin) return; // Caso base #1: Caso que sean cantidad de elementos impares

	int proximoInicio = lista.Proximo(inicio), anteriorUltimo = lista.LocalizarPunteroAnterior(fin);
	if (proximoInicio == fin && anteriorUltimo == inicio) return; // Caso base #2: Caso que sean cantidad de elementos pares
	invertirMonomio(lista, proximoInicio, anteriorUltimo);

	Nodo<Monomio> valorInicio = lista.LocalizarPuntero(inicio), valorFinal = lista.LocalizarPuntero(fin);
	lista.EditarNodo(inicio, valorFinal);
	lista.EditarNodo(fin, valorInicio);

	return;
}

template<class T>
void Aplicacion<T>::SumarPolinomios(Lista<Monomio> b)
{
	int iA = _pol.Primero(), iB = b.Primero(), FinA = _pol.FinLista(), FinB = b.FinLista(), antA = -1, antB = -1;
	Nodo<Monomio> nodoAux;
	Monomio auxA, auxB;
	while (iA != FinA || iB != FinB)
	{
		auxA = _pol.LocalizarPuntero(iA).Elemento();
		auxB = b.LocalizarPuntero(iB).Elemento();
		if (auxA.Exponente() == auxB.Exponente())
		{
			auxA.Coeficiente(auxA.Coeficiente() + auxB.Coeficiente());
			nodoAux.Elemento(auxA);
			_pol.EditarNodo(iA, nodoAux);

			// Solo aumenta si no esta en el final
			if (iA != FinA)
			{
				antA = iA;
				iA = _pol.Proximo(iA);
			}
			if (iB != FinB)
			{
				antB = iB;
				iB = b.Proximo(iB);
			}

		}
		else if (auxB.Exponente() > auxA.Exponente())
		{
			nodoAux.Elemento(auxB);
			_pol.Insertar(nodoAux, antA);

			if (iB != FinB)
			{
				antB = iB;
				iB = b.Proximo(iB);
			}
		}
		else
		{
			if (iA != FinA)
			{
				antA = iA;
				iA = _pol.Proximo(iA);
			}
		}
	}
}

template<class T>
void Aplicacion<T>::RestarPolinomios(Lista<Monomio> b)
{
	int i = b.Primero(), Fin = b.FinLista();
	Nodo<Monomio> aux;
	Monomio temp;
	while (i != Fin)
	{
		aux = b.LocalizarPuntero(i);
		temp = aux.Elemento();
		temp.Coeficiente(temp.Coeficiente() * -1);
		aux.Elemento(temp);
		b.EditarNodo(i, aux);
		i = b.Proximo(i);
	}
	SumarPolinomios(b);
}

template<class T>
void Aplicacion<T>::InsertarOrdenadamentePolinomio(Lista<Monomio> &lista, Nodo<Monomio> val)
{
	Monomio aux;
	if (lista.Vacia()) lista.Insertar(val, -1);
	else
	{
		int i = lista.Primero(), ant = -1, Fin = lista.FinLista(), Ult = lista.Ultimo();
		Nodo<Monomio> aux;
		Monomio temp;
		while (i != Fin)
		{
			aux = lista.LocalizarPuntero(i);
			// Caso esa igual que el elemento
			if (val.Elemento().Exponente() == aux.Elemento().Exponente())
			{
				temp = aux.Elemento();
				temp.Coeficiente(temp.Coeficiente() + val.Elemento().Coeficiente());
				temp.Exponente(val.Elemento().Exponente());
				aux.Elemento(temp);
				lista.EditarNodo(i, aux);
				return;
			}
			// Caso sea menor que el elemento
			else if (val.Elemento().Exponente() < aux.Elemento().Exponente())
			{
				lista.Insertar(val, ant);
				return;
			}
			// Caso que se encuentre en el final
			else if (i == Ult)
			{
				lista.Insertar(val, Ult);
				return;
			}

			ant = i;
			i = lista.Proximo(i);
		}
	}
}

template<class T>
void Aplicacion<T>::MultiplicarPolinomios(Lista<Monomio> b)
{
	int iA = _pol.Primero(), iB, FinA = _pol.FinLista(), FinB = b.FinLista();
	Monomio monA, monB, res;
	Nodo<Monomio> aux;
	Lista<Monomio> listaRes;
	while (iA != FinA)
	{
		monA = _pol.LocalizarPuntero(iA).Elemento();
		iB = b.Primero();
		while (iB != FinB)
		{
			monB = b.LocalizarPuntero(iB).Elemento();
			res.Coeficiente(monA.Coeficiente() * monB.Coeficiente());
			res.Exponente(monA.Exponente() + monB.Exponente());
			aux.Elemento(res);

			InsertarOrdenadamentePolinomio(listaRes, aux);

			iB = b.Proximo(iB);
		}
		iA = _pol.Proximo(iA);
	}
	_pol.Objeto(listaRes.Objeto());
}

template<class T>
void Aplicacion<T>::DerivarPolinomios()
{
	int i = _pol.Primero(), ant = -1, FinA = _pol.FinLista();
	Nodo<Monomio> aux;
	Monomio a;
	while (i != FinA)
	{
		a = _pol.LocalizarPuntero(i).Elemento();
		if (a.Exponente() == 0)
		{
			i = _pol.Proximo(i);
			_pol.Eliminar(aux, ant);
			continue;
		}

		a.Coeficiente(a.Coeficiente() * a.Exponente());
		a.Exponente(a.Exponente() - 1);
		aux.Elemento(a);
		_pol.EditarNodo(i, aux);

		ant = i;
		i = _pol.Proximo(i);
	}
}

template<class T>
void Aplicacion<T>::IntegrarPolinomios()
{
	int i = _pol.Primero(), ant = -1, FinA = _pol.FinLista();
	Nodo<Monomio> aux;
	Monomio a;
	while (i != FinA)
	{
		a = _pol.LocalizarPuntero(i).Elemento();

		a.Exponente(a.Exponente() + 1);
		a.Coeficiente(a.Coeficiente() / a.Exponente());

		aux.Elemento(a);
		_pol.EditarNodo(i, aux);

		ant = i;
		i = _pol.Proximo(i);
	}
}
