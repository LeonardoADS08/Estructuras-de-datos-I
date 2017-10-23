#pragma once
class Monomio
{
private:
	int _coeficiente, _exponente;

public:
	Monomio() { _coeficiente = 0; _exponente = 0; }

	void Coeficiente(int base) { _coeficiente = base; }
	int Coeficiente() { return _coeficiente; }

	void Exponente(int exp) { _exponente = exp; }
	int Exponente() { return _exponente; }

	void Objeto(Monomio val) { *this = val; }
	Monomio Objeto() { return *this; }

	bool operator == (Monomio val)
	{
		return _coeficiente == val.Coeficiente() && _exponente == val.Exponente();
	}
};

