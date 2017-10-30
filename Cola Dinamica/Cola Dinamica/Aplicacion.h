#pragma once
#include "Cola.h"
#include "Nodo.h"
#include "Memoria.h"

template<class T>
class Aplicacion : public Cola<T>
{
public:
	Aplicacion() { }
		
	void GuardarMemoriaEnCola(Memoria<T>);
	void GuardarColaEnMemoria(Memoria<T> &);

	void Invertir();
	void InsertarElemento(T);
	void InsertarOrdenado(T);
	void Ordenar();
	void EliminarDuplicados();
};

template<class T>
void Aplicacion<T>::GuardarMemoriaEnCola(Memoria<T> val)
{
	this->Limpiar();
	Nodo<T> aux;
	for (int i = val.Tamano() - 1; i >= 0; --i)
	{
		aux.Elemento(val.Datos(i));
		this->Insertar(aux);
	}
}

template<class T>
void Aplicacion<T>::GuardarColaEnMemoria(Memoria<T> &val)
{
	int i = 0;
	Nodo<T> aux;
	Cola<T> temp;
	
	while (!this->Vacia())
	{
		this->Eliminar(aux);
		temp.Insertar(aux);
		val.Datos(i, aux.Elemento());
		++i;
	}

	this->Objeto(temp.Objeto());
	val.Tamano(i);
	val.Invertir();
}


template<class T>
void Aplicacion<T>::EliminarDuplicados()
{
	Cola<T> aux, res;
	Nodo<T> ver, temp;
	while (!this->Vacia())
	{
		this->Eliminar(ver);

		// Solo se insertan cuando no se repite
		while (!this->Vacia())
		{
			this->Eliminar(temp);
			if (!(temp == ver)) aux.Insertar(temp);
		}

		// Se devuelve todo a la pila original, el elemento verificado se va a una pila de resultado.
		res.Insertar(ver);
		while (!aux.Vacia())
		{
			aux.Eliminar(temp);
			this->Insertar(temp);
		}

	}

	this->Limpiar();
	this->Objeto(res.Objeto());
}

template<class T>
void Aplicacion<T>::Invertir()
{
	if (this->Vacia()) return;

	Nodo<T> temp;
	this->Eliminar(temp);

	Invertir();
	this->Insertar(temp);
	
}

template<class T>
void Aplicacion<T>::InsertarElemento(T val)
{
	Nodo<T> aux(val);
	this->Insertar(aux);
}

template<class T>
void Aplicacion<T>::InsertarOrdenado(T val)
{
	Cola<T> post, pre;
	Nodo<T> aux;
	while (!this->Vacia())
	{
		this->Eliminar(aux);
		if (aux.Elemento() > val) post.Insertar(aux);
		else pre.Insertar(aux);
	}

	while (!post.Vacia())
	{
		post.Eliminar(aux);
		this->Insertar(aux);
	}
	
	aux.Elemento(val);
	this->Insertar(aux);

	while (!pre.Vacia())
	{
		pre.Eliminar(aux);
		this->Insertar(aux);
	}
}

template<class T>
void Aplicacion<T>::Ordenar()
{
	Cola<T> res;
	Nodo<T> aux;
	while (!this->Vacia())
	{
		this->Eliminar(aux);
		res.Insertar(aux);
	}

	while (!res.Vacia())
	{
		res.Eliminar(aux);
		InsertarOrdenado(aux.Elemento());
	}
}
