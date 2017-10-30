#pragma once

#include "Memoria.h"
#include "Nodo.h"

using namespace System::Windows::Forms;
using namespace std;

template<class T>
class Interfaz : public Memoria<T>
{

public:
	Interfaz() { }

	void guardarDataGrid(DataGridView^ dataGrid)
	{
		int temp;
		this->Tamano(dataGrid->ColumnCount);
		for (int i = 0; i < dataGrid->ColumnCount; ++i)
		{
			temp = System::Convert::ToInt32(dataGrid->Rows[0]->Cells[i]->Value);
			this->Datos(i, temp);
		}
	}

	void cargarDataGrid(DataGridView^ dataGrid)
	{
		cambiarTamano(dataGrid, this->Tamano());

		for (int i = 0; i < this->Tamano(); ++i)
		{
			dataGrid->Rows[0]->Cells[i]->Value = System::Convert::ToString(this->Datos(i));
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

		dataGrid->ColumnCount = num;
		dataGrid->RowCount = 1;

		for (int i = 0; i < num; ++i)
		{
			dataGrid->Columns[i]->Name = System::Convert::ToString(i + 1);
			dataGrid->Columns[i]->Width = 45;
		}
	}

	int TextBoxEntero(TextBox^ tbNodo)
	{
		return System::Convert::ToInt32(tbNodo->Text);
	}
};
