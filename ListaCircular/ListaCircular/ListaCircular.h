#pragma once
#include "Nodo.h"

const int maxListaCircular = 50;

template<class T>
class ListaCircular
{
private:
	int _list, _disp;
	Nodo<T> _lista[maxListaCircular];

	int BuscarNodo();
	void LiberarNodo(int);

public:
	ListaCircular() { Reinicializar(); }
	void Reinicializar();

	bool Llena();
	bool Vacia();
	int Primero() { return _lista[_list].Apuntador(); }
	int Ultimo() { return _list; }
	int Anterior(int);
	int FinLista();
	
	bool Insertar(Nodo<T>, int);
	bool Eliminar(Nodo<T>&, int);
	
	int LocalizarElemento(Nodo<T>);
	Nodo<T>  LocalizarElementoAnterior(Nodo<T>);
};

template<class T>
int ListaCircular<T>::BuscarNodo()
{
	int aux = _disp;
	_disp = _lista[_disp].Apuntador();
	return aux;
}

template<class T>
void ListaCircular<T>::LiberarNodo(int pos)
{
	_lista[pos].Apuntador(_disp);
	_disp = pos;
}

template<class T>
void ListaCircular<T>::Reinicializar()
{
	int i;
	for (i = 0; i < maxLista; ++i)
		_lista[i].Apuntador(i + 1);
	_lista[i].Apuntador(-1);
	_disp = 0;
	_list = -1;
}

template<class T>
bool ListaCircular<T>::Llena() { return _disp == -1; }

template<class T>
bool ListaCircular<T>::Vacia() { return _list == -1; }

template<class T>
int ListaCircular<T>::Anterior(int)
{
	int i = -1, q = -1;
	if (!Vacia())
	{
		i = rimero();
		do
		{

		} while (i != Primero() && p != i);
		return q;
	}
}

template<class T>
int ListaCircular<T>::FinLista()
{
	if (Vacia()) return -1;
	int i = Primero();
	do
	{
		i = Proximo(i);
	} while (i != Primero());
	return i;
}

template<class T>
bool ListaCircular<T>::Insertar(Nodo<T> val, int pos)
{
	if (Llena()) return false;
	
	// Se le busca un espacio y se le asiga el valor en el vector.
	int nodoLibre = BuscarNodo();
	_lista[nodoLibre] = val;

	if (p == -1) // Si se inserta al inicio
	{
		if (Vacia()) _list = nodoLibre;
		pos = _list;
	}
	else // Si se inserta en cualquier otro lugar
	{
		if (_list == pos) _list = nodoLibre;
	}

	_lista[nodoLibre].Apuntador(_lista[pos].Apuntador());
	_lista[pos].Apuntador(nodoLibre);
	return true;
}

template<class T>
bool ListaCircular<T>::Eliminar(Nodo<T>& val, int pos)
{
	if (Vacia()) return false;
	
	int aux;
	if (pos == 1 || pos == _list) // Si se desea eliminar el primero se debe mandar -1 ó se debe mandar el ultimo elmento de la lista
	{
		aux = Primero();
		val = _lista[aux];
		if (aux == _list) _list = -1;
		else _lista[_list].Apuntador( _lista[aux].Apuntador() );
	}
	else
	{
		aux = _lista[pos].Apuntador();
		val = _lista[aux];
		if (aux == _list) _list = pos;
		_lista[pos].Apuntador(_lista[aux].Apuntador());
	}
	LiberarNodo(aux);
	return true;
}

template<class T>
int ListaCircular<T>::LocalizarElemento(Nodo<T> val)
{
	if (Vacia()) return -1;
	int i = Primero();
	do
	{
		i = Proximo(i);
	} while (i != Primero() && _lista[i].Elemento() != val.Elemento() );
	if (val.Elemento() == _lista[i].Elemento()) return i;
	else return -1;
}

template<class T>
Nodo<T> ListaCircular<T>::LocalizarElementoAnterior(Nodo<T> val)
{
	 int pos = Anterior( LocalizarElemento(val) );
	 return _lista[pos];
}