#pragma once
#include "Nodo.h"

template<class T>
class Cola
{
private:
	Nodo<T> *_frente;
	Nodo<T> *_final;

	Nodo<T> *BuscarNodo() { return new Nodo<T>; }
	void LiberarNodo(Nodo<T> *val) { delete(val); }

public:
	Cola() { _frente = nullptr; _final = nullptr; }

	bool Vacia() { return _final == nullptr; }

	bool Insertar(Nodo<T> val);
	bool Eliminar(Nodo<T> &val);
	Nodo<T> Frente();
	void Limpiar();

	void Objeto(Cola<T> val) { *this = val; }
	Cola<T> Objeto() { return *this; }
};

template<class T>
bool Cola<T>::Insertar(Nodo<T> val)
{
	Nodo<T> *nuevoElemento = BuscarNodo();
	
	nuevoElemento->Apuntador(nullptr);
	nuevoElemento->Elemento(val.Elemento());
	
	if (Vacia()) _frente = nuevoElemento;
	else _final->Apuntador(nuevoElemento);

	_final = nuevoElemento;
	return true;
}

template<class T>
bool Cola<T>::Eliminar(Nodo<T> &val)
{
	if (Vacia()) return false;
	Nodo<T> *y = nullptr;

	val.Elemento(_frente->Elemento());
	val.Apuntador(nullptr);

	y = _frente;
	_frente = _frente->Apuntador();
	if (_frente == nullptr) _final = nullptr;

	LiberarNodo(y);
	return true;
}

template<class T>
Nodo<T> Cola<T>::Frente() { return *_final; }

template<class T>
void Cola<T>::Limpiar()
{
	Nodo<T> temp;
	while (!Vacia())
		Eliminar(temp);
}