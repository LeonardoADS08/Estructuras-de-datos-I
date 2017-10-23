#pragma once

const int maxMemoria = 25;

using namespace System::Collections::Generic;

template<class T>
class Memoria
{
private:
	T _datos[maxMemoria];
	int _tam;

public:
	Memoria() { _tam = 0; }

	void Datos(int pos, T dato) { _datos[pos] = dato; }
	T Datos(int pos) { return _datos[pos]; }

	void Tamano(int tam) { _tam = tam; }
	int Tamano() { return _tam; }

	void Objeto(Memoria<T> val) { *this = val; }
	Memoria<T> Objeto() { return *this; }
};

