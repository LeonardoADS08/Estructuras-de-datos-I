#pragma once
#include "Aplicacion.h"
#include "Interfaz.h"

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	Aplicacion<int> APP;
	Interfaz<int> IO;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::TextBox^  TB_Insertar;
	private: System::Windows::Forms::Button^  B_Insertar;
	private: System::Windows::Forms::Button^  B_InsertarOrdenado;
	private: System::Windows::Forms::DataGridView^  DG_Pila;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  B_EliminarDuplicados;
	private: System::Windows::Forms::Button^  B_Ordenar;


	private: System::Windows::Forms::Button^  B_Invertir;


	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->TB_Insertar = (gcnew System::Windows::Forms::TextBox());
			this->B_Insertar = (gcnew System::Windows::Forms::Button());
			this->B_InsertarOrdenado = (gcnew System::Windows::Forms::Button());
			this->DG_Pila = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->B_EliminarDuplicados = (gcnew System::Windows::Forms::Button());
			this->B_Ordenar = (gcnew System::Windows::Forms::Button());
			this->B_Invertir = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DG_Pila))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->TB_Insertar);
			this->groupBox1->Controls->Add(this->B_Insertar);
			this->groupBox1->Controls->Add(this->B_InsertarOrdenado);
			this->groupBox1->Controls->Add(this->DG_Pila);
			this->groupBox1->Location = System::Drawing::Point(7, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(214, 409);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Pila";
			// 
			// TB_Insertar
			// 
			this->TB_Insertar->Location = System::Drawing::Point(6, 31);
			this->TB_Insertar->Name = L"TB_Insertar";
			this->TB_Insertar->Size = System::Drawing::Size(190, 22);
			this->TB_Insertar->TabIndex = 3;
			// 
			// B_Insertar
			// 
			this->B_Insertar->Location = System::Drawing::Point(6, 69);
			this->B_Insertar->Name = L"B_Insertar";
			this->B_Insertar->Size = System::Drawing::Size(190, 24);
			this->B_Insertar->TabIndex = 2;
			this->B_Insertar->Text = L"Insertar";
			this->B_Insertar->UseVisualStyleBackColor = true;
			this->B_Insertar->Click += gcnew System::EventHandler(this, &Form1::B_Insertar_Click);
			// 
			// B_InsertarOrdenado
			// 
			this->B_InsertarOrdenado->Location = System::Drawing::Point(6, 99);
			this->B_InsertarOrdenado->Name = L"B_InsertarOrdenado";
			this->B_InsertarOrdenado->Size = System::Drawing::Size(190, 24);
			this->B_InsertarOrdenado->TabIndex = 1;
			this->B_InsertarOrdenado->Text = L"Insertar ordenadamente";
			this->B_InsertarOrdenado->UseVisualStyleBackColor = true;
			this->B_InsertarOrdenado->Click += gcnew System::EventHandler(this, &Form1::B_InsertarOrdenado_Click);
			// 
			// DG_Pila
			// 
			this->DG_Pila->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DG_Pila->Location = System::Drawing::Point(6, 129);
			this->DG_Pila->Name = L"DG_Pila";
			this->DG_Pila->RowTemplate->Height = 24;
			this->DG_Pila->Size = System::Drawing::Size(190, 267);
			this->DG_Pila->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->B_EliminarDuplicados);
			this->groupBox2->Controls->Add(this->B_Ordenar);
			this->groupBox2->Controls->Add(this->B_Invertir);
			this->groupBox2->Location = System::Drawing::Point(7, 427);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(214, 126);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Operaciones";
			// 
			// B_EliminarDuplicados
			// 
			this->B_EliminarDuplicados->Location = System::Drawing::Point(6, 89);
			this->B_EliminarDuplicados->Name = L"B_EliminarDuplicados";
			this->B_EliminarDuplicados->Size = System::Drawing::Size(190, 24);
			this->B_EliminarDuplicados->TabIndex = 3;
			this->B_EliminarDuplicados->Text = L"Eliminar duplicados";
			this->B_EliminarDuplicados->UseVisualStyleBackColor = true;
			this->B_EliminarDuplicados->Click += gcnew System::EventHandler(this, &Form1::B_EliminarDuplicados_Click);
			// 
			// B_Ordenar
			// 
			this->B_Ordenar->Location = System::Drawing::Point(6, 29);
			this->B_Ordenar->Name = L"B_Ordenar";
			this->B_Ordenar->Size = System::Drawing::Size(190, 24);
			this->B_Ordenar->TabIndex = 2;
			this->B_Ordenar->Text = L"Ordenar";
			this->B_Ordenar->UseVisualStyleBackColor = true;
			this->B_Ordenar->Click += gcnew System::EventHandler(this, &Form1::B_Ordenar_Click);
			// 
			// B_Invertir
			// 
			this->B_Invertir->Location = System::Drawing::Point(6, 59);
			this->B_Invertir->Name = L"B_Invertir";
			this->B_Invertir->Size = System::Drawing::Size(190, 24);
			this->B_Invertir->TabIndex = 1;
			this->B_Invertir->Text = L"Invertir";
			this->B_Invertir->UseVisualStyleBackColor = true;
			this->B_Invertir->Click += gcnew System::EventHandler(this, &Form1::B_Invertir_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(229, 572);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->ShowIcon = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"Pila";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DG_Pila))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void B_Insertar_Click(System::Object^  sender, System::EventArgs^  e) {
		APP.Insertar(IO.TextBoxEntero(TB_Insertar));
		APP.GuardarPilaEnMemoria(IO);
		IO.cargarDataGrid(DG_Pila);
	}

	private: System::Void B_InsertarOrdenado_Click(System::Object^  sender, System::EventArgs^  e) {
		APP.insertarOrdenadamente(IO.TextBoxEntero(TB_Insertar));
		APP.GuardarPilaEnMemoria(IO);
		IO.cargarDataGrid(DG_Pila);
	}

	private: System::Void B_Ordenar_Click(System::Object^  sender, System::EventArgs^  e) {
		APP.ordenarPila();
		APP.GuardarPilaEnMemoria(IO);
		IO.cargarDataGrid(DG_Pila);
	}

	private: System::Void B_Invertir_Click(System::Object^  sender, System::EventArgs^  e) {
		APP.invertirPila();
		APP.GuardarPilaEnMemoria(IO);
		IO.cargarDataGrid(DG_Pila);
	}

	private: System::Void B_EliminarDuplicados_Click(System::Object^  sender, System::EventArgs^  e) {
		APP.eliminarDuplicados();
		APP.GuardarPilaEnMemoria(IO);
		IO.cargarDataGrid(DG_Pila);
	}
};
}
