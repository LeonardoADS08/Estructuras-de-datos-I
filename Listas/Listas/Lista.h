#pragma once
#include "Nodo.h"

const int maxLista = 50;

template <class T>
class Lista
{
private:
	Nodo<T> _lista[maxLista];
	int _disp, _list;

	int buscarNodo();
	void liberarNodo(int);

public:
	Lista(void);
	bool Llena(); // Pregunta si la lista se encuentra llena
	bool Vacia(); // Pregunta si la lista está facia
	bool Insertar(Nodo<T>, int); // Inserta un elemento a la posicion siguiente al segundo parámetro, caso sea -1, la inserta al inicio de la lista
	bool Eliminar(Nodo<T> &, int); // Elimina el elemento siguiente al del segundo parametro, caso se quiera eliminar el primer elemento, se ingresa -1
	bool Equivalente(int, int); // Pregunta si son dos elementos son iguales

	int Primero(); // Devuelve el puntero del primer elemento de la lista
	int Proximo(int);  // Devuelve el puntero siguiente elemento de la lista 
	int Ultimo();  // Devuelve el ultimo puntero de la lista
	int FinLista(); // Devuelve el valor 'bandera' que se tiene como el fin de la lista, en este caso, -1

	Nodo<T> LocalizarPuntero(int); // Devuelve un elemento de la lista
	int LocalizarPunteroAnterior(int); // Devuelve el puntero anterior de un elemento
	int LocalizarElemento(Nodo<T> &); // Busca si existe un elemento con caracteristicas similares
	int LocalizarElementoAnterior(Nodo<T> &); // Busca si existe un elemento con caracteristicas similares y devuleve el anterior
	void EditarNodo(int, Nodo<T>); // Edita el valor de un nodo, manteniendo el apuntador original.

	int Tamano();
	void Reinicializar(); // Limpia la lista

	void Objeto(Lista<T> val) { *this = val; }
	Lista<T> Objeto() { return *this; }


	void Depurar()
	{
		int ini = Primero();
		while (ini != FinLista())
		{
			Trace::Write("(" + LocalizarPuntero(ini).Elemento() + "," + ini + ") ; ");
			ini = Proximo(ini);
		}
		Trace::Write("\n");
	}
};

template<class T>
int Lista<T>::buscarNodo()
{
	int aux = _disp;
	_disp = _lista[_disp].Apuntador();
	return aux;
}

template<class T>
void Lista<T>::liberarNodo(int pos)
{
	_lista[pos].Apuntador(_disp);
	_disp = pos;
}

template<class T>
Lista<T>::Lista(void)
{
	Reinicializar();
}

template<class T>
bool Lista<T>::Llena() { return _disp == -1; }

template<class T>
bool Lista<T>::Vacia() { return _list == -1; }

template<class T>
bool Lista<T>::Insertar(Nodo<T> val, int pos)
{
	int y;
	if (Llena()) return false;

	y = buscarNodo();
	if (pos == -1)
	{
		val.Apuntador(_list);
		_lista[y] = val;
		_list = y;
	}
	else
	{
		val.Apuntador(_lista[pos].Apuntador());
		_lista[y] = val;
		_lista[pos].Apuntador(y);
	}
	return true;
}

template<class T>
bool Lista<T>::Eliminar(Nodo<T> &val, int pos)
{
	int aux;
	if (Vacia()) return false;
	else
	{
		if (pos == -1)
		{
			val = _lista[_list]; // Devuelve el valor.
			val.Apuntador(-1);

			pos = _list;
			_list = _lista[_list].Apuntador();
		}
		else
		{
			if (_lista[pos].Apuntador() == -1) return false; // No hay valor despues del ultimo elemento.

			val = _lista[_lista[pos].Apuntador()]; // Devuelve el valor.
			val.Apuntador(-1);

			aux = _lista[pos].Apuntador(); // Puntero del elemento a eliminar
			_lista[pos].Apuntador(_lista[aux].Apuntador()); // Actualiza el puntero eliminado al que puntero que tenía el eliminado
			pos = aux;
		}
		liberarNodo(pos); // Se libera el nodo eliminado
		return true;
	}
}

template<class T>
int Lista<T>::Primero()
{
	return _list;
}

template<class T>
int Lista<T>::Proximo(int pos)
{
	return _lista[pos].Apuntador();
}

template<class T>
int Lista<T>::Ultimo()
{
	int pos = this->Primero(), aux = -1;
	while (pos != -1)
	{
		aux = pos;
		pos = Proximo(pos);
	}
	return aux;
}

template<class T>
int Lista<T>::FinLista()
{
	int i = Primero();
	while (i != -1)
	{
		i = Proximo(i);
	}
	return i;
}

template<class T>
bool Lista<T>::Equivalente(int pos1, int pos2)
{
	return _lista[pos1] == _lista[pos2];
}

template<class T>
Nodo<T> Lista<T>::LocalizarPuntero(int pos)
{
	return _lista[pos];
}

template<class T>
int Lista<T>::LocalizarPunteroAnterior(int p)
{
	int i = Primero(), q = -1;
	while (i != p)
	{
		q = i;
		i = Proximo(i);
	}
	return q;
}

template<class T>
int Lista<T>::LocalizarElemento(Nodo<T> & val)
{
	int i = Primero();
	int fin = FinLista();
	while (i != fin && _lista[].Elemento() != val.Elemento())
	{
		i = Proximo(i);
	}
	if (lista[i].Elemento() != val.Elemento()) return i;
	else return -1;
}

template<class T>
int Lista<T>::LocalizarElementoAnterior(Nodo<T> &val)
{
	int i = Primero(), fin = FinLista(), p;
	while (i != fin && _lista[i].Elemento() != val.Elemento())
	{
		p = i;
		i = Proximo(i);
	}
	if (_lista[i].Elemento() != val.Elemento()) return p;
	else return -1;
}

template<class T>
void Lista<T>::EditarNodo(int pos, Nodo<T> dato)
{
	dato.Apuntador(_lista[pos].Apuntador());
	_lista[pos] = dato;
}

template<class T>
void Lista<T>::Reinicializar()
{
	int i;
	for (i = 0; i < maxLista; ++i)
		_lista[i].Apuntador(i + 1);
	_lista[i].Apuntador(-1);
	_disp = 0;
	_list = -1;
}

template<class T>
int Lista<T>::Tamano()
{
	int res = 0, i = Primero(), Fin = FinLista();
	while (i != Fin)
	{
		res++;
		i = Proximo(i);
	}
	return res;
}