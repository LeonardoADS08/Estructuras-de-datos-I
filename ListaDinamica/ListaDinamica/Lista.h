#pragma once

#include "Nodo.h"

template<class T>
class Lista
{
private:
	Nodo<T> *_list;

	Nodo<T> *BuscarNodo() { return new Nodo<T>; }
	void LiberarNodo(Nodo<T> *val) { delete(val); }

public:
	Lista() { _list = nullptr; }

	Nodo<T> *Primero() { return _list; }
	Nodo<T> *Proximo(Nodo<T> *val) { return val->Apuntador(); }
	bool Vacia() { return _list == nullptr; }

	bool Insertar(Nodo<T> *x, Nodo<T> val)
	{
		Nodo<T> *y;
		y = BuscarNodo();
		y->Apuntador(nullptr);
		y->Elemento(val.Elemento());
		if (x == nullptr)
		{
			y->Apuntador(_list);
			_list = y;
		}
		else
		{
			y->Apuntador(x->Apuntador());
			x->Apuntador(y);
		}
		return true;

	}

	bool Eliminar(Nodo<T> *ptr, Nodo<T> &val)
	{
		Nodo<T> *y;
		if (this->Vacia()) return false;
		else
		{
			if (ptr == nullptr)
			{
				val.Elemento(_list->Elemento());
				val.Apuntador(nullptr);
				y = _list;
				_list = _list->Apuntador();
			}
			else
			{
				if (ptr->Apuntador() != nullptr)
				{
					val.Elemento(ptr->Apuntador()->Elemento());
					val.Apuntador(nullptr);
					y = ptr->Apuntador();
					ptr->Apuntador(y->Apuntador());
				}
				else return false;
			}
			this->LiberarNodo(y);
			return true;
		}
	}

	Nodo<T> *FinLista()
	{
		Nodo<T> *y;
		y = Primero();
		while (y != nullptr)
		{
			y = Proximo(y);
		}
		return y;
	}

	Nodo<T> *Ultimo()
	{
		Nodo<T> *y = Primero(), *Fin = FinLista();
		while (y->Apuntador() != Fin)
		{
			y = this->Proximo(y);
		}
		return y;
	}

	Nodo<T> *LocalizarPunteroAnterior(Nodo<T>  *val)
	{
		Nodo<T> *p = Primero(), *q = Primero();
		while (p != val)
		{
			q = p;
			p = Proximo(p);
		}
		return q;
	}

	Nodo<T> LocalizarPuntero(Nodo<T> *x) { return x->Elemento(); }

	Nodo<T>* LocalizarElemento(Nodo<T> x)
	{
		Nodo<T> *i = Primero(), *j = FinLista();
		while (i != j && (i->Elemento() != x.Elemento()))
		{
			i = Proximo(i);
		}
		if (i->Elemento() == x.Elemento()) return i;
		else return nullptr;
	}

	Nodo<T> LocalizarElementoAnterior(Nodo<T> x)
	{
		Nodo<T>*p, y;
		p = LocalizarElemento(y);
		return LocalizarPunteroAnterior(p);
	}

	void Lista<T>::EditarNodo(Nodo<T> *pos, Nodo<T> val) { pos->Elemento(val.Elemento()); }

	void Lista<T>::Reinicializar() { delete(_list);  _list = nullptr; }

	int Lista<T>::Tamano()
	{
		Nodo<T> *i = Primero(), *Fin = FinLista();
		int res = 0;
		while (i != Fin)
		{
			res++;
			i = Proximo(i);
		}
		return res;
	}

	void Objeto(Lista<T> val) { Reinicializar(); *this = val; }
	Lista<T> Objeto() { return *this; }
};
