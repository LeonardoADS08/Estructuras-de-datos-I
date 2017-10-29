#pragma once
#include "Nodo.h"

template<class T>
class Pila
{
private:
	Nodo<T> *_tope;

	Nodo<T> *BuscarNodo() { return new Nodo<T>; }
	void LiberarNodo(Nodo<T> *val) { delete(val); }

public:
	Pila() { _tope = nullptr; }

	bool Vacia() { return _tope == nullptr; }
	bool Insertar(Nodo<T> val);
	bool Eliminar(Nodo<T> &val);
	Nodo<T> Tope() { return *_tope; }

	void Objeto(Pila<T> val) { *this = val; }
	Pila<T> Objeto() { return *this; }

	void Limpiar(Nodo<T> *);

};

template<class T>
bool Pila<T>::Insertar(Nodo<T> val)
{
	Nodo<T> *nuevoElemento = BuscarNodo();;

	nuevoElemento->Apuntador(_tope);
	nuevoElemento->Elemento(val.Elemento());
	_tope = nuevoElemento;

	return true;
}

template<class T>
bool Pila<T>::Eliminar( Nodo<T> &val)
{
	if (this->Vacia()) return false;
	Nodo<T> *y = nullptr;

	val.Elemento(_tope->Elemento());
	val.Apuntador(nullptr);
	y = _tope;
	_tope = _tope->Apuntador();
	LiberarNodo(y);

	return true;
}

template<class T>
void Pila<T>::Limpiar(Nodo<T> *val)
{
	if (val->Apuntador() == nullptr || val->Apuntador == nullptr) return;
	Limpiar(val.Apuntador());
	delete(val);
}
