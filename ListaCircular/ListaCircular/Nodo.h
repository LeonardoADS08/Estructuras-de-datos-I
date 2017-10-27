#pragma once

template<class T>
class Nodo
{
private:
	T _elemento;
	int _apuntador;

public:
	Nodo(void) { _apuntador = -1; }
	Nodo(T el, int ap = -1) { _elemento = el; _apuntador = ap; }

	void Elemento(T val) { _elemento = val; }
	T Elemento() { return _elemento; }

	void Apuntador(int val) { _apuntador = val; }
	int Apuntador() { return _apuntador; }

	bool operator == (Nodo<T> a) { return(_elemento == a.Elemento()); }
};

