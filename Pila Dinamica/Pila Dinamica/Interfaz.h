#pragma once

#include "Memoria.h"
#include "Nodo.h"
#include "stdafx.h"

using namespace System::Windows::Forms;
using namespace std;
using namespace msclr::interop;

template<class T>
class Interfaz : public Memoria<T>
{

public:
	Interfaz() { }

	void guardarDataGrid(DataGridView^ dataGrid)
	{
		int temp;
		this->Tamano(dataGrid->RowCount);
		for (int i = dataGrid->ColumnCount - 1; i >= 0; --i)
		{
			temp = System::Convert::ToInt32(dataGrid->Rows[i]->Cells[0]->Value);
			this->Datos(i, temp);
		}
	}

	void cargarDataGrid(DataGridView^ dataGrid)
	{
		cambiarTamano(dataGrid, this->Tamano());

		for (int i = 0; i < this->Tamano(); ++i)
		{
			dataGrid->Rows[i]->Cells[0]->Value = System::Convert::ToString(this->Datos(i));
		}
	}

	void cambiarTamano(DataGridView^ dataGrid, TextBox^ tbTamano)
	{
		if (tbTamano->Text == "") return;
		int aux = System::Convert::ToInt32(tbTamano->Text);

		cambiarTamano(dataGrid, aux);
	}

	void cambiarTamano(DataGridView^ dataGrid, int num)
	{
		if (num == 0) return;

		dataGrid->ColumnCount = 1;
		dataGrid->RowCount = num;

		dataGrid->Columns[0]->Name = "Pila";
		dataGrid->Columns[0]->Width = 45;
	}

	int TextBoxEntero(TextBox^ tbNodo)
	{
		return System::Convert::ToInt32(tbNodo->Text);
	}
};
