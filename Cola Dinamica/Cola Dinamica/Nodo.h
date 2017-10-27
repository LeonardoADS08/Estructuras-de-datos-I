#pragma once
template<class T>
class Nodo
{
private:
	T _dato;
	Nodo<T> *_apuntador;

public:
	Nodo() { _apuntador = nullptr; }
	Nodo(T val) { _dato = val; _apuntador = nullptr; }

	void Elemento(T val) { _dato = val; }
	T Elemento() { return _dato; }

	void Apuntador(Nodo<T> *dato) { _apuntador = dato; }
	Nodo<T>* Apuntador() { return _apuntador; }

	bool operator == (Nodo<T> a) { return(_dato == a.Elemento()); }

};

