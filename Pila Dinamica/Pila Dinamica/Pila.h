#pragma once
#include "Nodo.h"

template<class T>
class Pila
{
private:
	Nodo<T> *_dato;

	Nodo<T> *BuscarNodo() { return new Nodo<T>; }
	void LiberarNodo(Nodo<T> *val) { delete(val); }
public:
	Pila();

	bool Vacia() { return _dato == nullptr; }
	bool Insertar(Nodo<T> val);
	bool Tope(Nodo<T> &val);
};

template<class T>
bool Pila<T>::Insertar(Nodo<T> val)
{
	Nodo<T> *y;

	y = BuscarNodo();
	y->Apuntador(nullptr);
	y->Elemento(val.Elemento());
	_dato = y;

	return true;
}


template<class T>
bool Pila<T>::Tope( Nodo<T> &val)
{
	Nodo<T> *y;
	if (this->Vacia()) return false;

	val.Elemento(_dato->Elemento());
	val.Apuntador(nullptr);
	y = _dato;
	_dato = _dato->Apuntador();

	this->LiberarNodo(y);
	return true;
}