#pragma once
#include "Pila.h"
#include "Nodo.h"
#include "Memoria.h"

template<class T>
class Aplicacion : public Pila<T>
{
private:
	void eliminarRepetidos(int);

public:
	Aplicacion() { }

	void GuardarMemoriaEnPila(Memoria<T>);
	void GuardarPilaEnMemoria(Memoria<T> &);

	void invertirPila();
	void insertar(T);
	void insertarOrdenadamente(T);
	void ordenarPila();
	void eliminarDuplicados() { eliminarRepetidos(2); }
};

template<class T>
void Aplicacion<T>::GuardarMemoriaEnPila(Memoria<T> val)
{
	this->Limpiar();
	Nodo<T> temp;
	for (int i = val.Tamano(); i >= 0; --i)
	{
		temp.Elemento(val.Datos(i));
		this->Insertar(temp);
	}
}

template<class T>
void Aplicacion<T>::GuardarPilaEnMemoria(Memoria<T> &val)
{
	int i = 0;
	Pila<T> aux;
	Nodo<T> temp;
	while (!this->Vacia())
	{
 		this->Eliminar(temp);
		aux.Insertar(temp);
		val.Datos(i, temp.Elemento());
		++i;
	}

	while (!aux.Vacia())
	{
		aux.Eliminar(temp);
		this->Insertar(temp);
	}

	val.Tamano(i);
}

template<class T>
void Aplicacion<T>::eliminarRepetidos(int veces)
{
	Pila<T> aux, res;
	Nodo<T> ver, temp;
	int repeticiones;
	while (!this->Vacia())
	{
		this->Eliminar(ver);
		repeticiones = 0;
		
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

	this->Objeto(res.Objeto());
}

template<class T>
void Aplicacion<T>::invertirPila()
{
	Pila<T> aux;
	Nodo<T> temp;
	while (!this->Vacia())
	{
		this->Eliminar(temp);
		aux.Insertar(temp);
	}

	this->Objeto(aux.Objeto());
}

template<class T>
void Aplicacion<T>::insertar(T num)
{
	Nodo<T> val(num);
	this->Insertar(val);
}

template<class T>
void Aplicacion<T>::insertarOrdenadamente(T num)
{
	Pila<T> aux;
	Nodo<T> temp, val(num);
	if (this->Vacia())
	{
		this->Insertar(val);
		return;
	}

	while (!this->Vacia() && this->Tope().Elemento() < val.Elemento() )
	{
		this->Eliminar(temp);
		aux.Insertar(temp);
	}

	this->Insertar(val);
	while (!aux.Vacia())
	{
		aux.Eliminar(temp);
		this->Insertar(temp);
	}
}

template<class T>
void Aplicacion<T>::ordenarPila()
{
	Pila<T> aux;
	Nodo<T> temp;
	while (!this->Vacia())
	{
		this->Eliminar(temp);
		aux.Insertar(temp);
	}

	while (!aux.Vacia())
	{
		aux.Eliminar(temp);
		this->insertarOrdenadamente(temp.Elemento());
	}
}

