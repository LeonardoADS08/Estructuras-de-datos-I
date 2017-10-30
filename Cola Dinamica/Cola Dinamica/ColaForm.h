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
	private: System::Windows::Forms::TextBox^  TB_Insertar;
	private: System::Windows::Forms::DataGridView^  DG_Cola;
	protected:


	private: System::Windows::Forms::Button^  B_InsertarOrdenado;

	private: System::Windows::Forms::Button^  B_Insertar;
	private: System::Windows::Forms::GroupBox^  groupBox2;

	private: System::Windows::Forms::Button^  B_EliminarDuplicados;

	private: System::Windows::Forms::Button^  B_Invertir;
	private: System::Windows::Forms::Button^  B_Ordenar;



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
			this->B_InsertarOrdenado = (gcnew System::Windows::Forms::Button());
			this->B_Insertar = (gcnew System::Windows::Forms::Button());
			this->TB_Insertar = (gcnew System::Windows::Forms::TextBox());
			this->DG_Cola = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->B_EliminarDuplicados = (gcnew System::Windows::Forms::Button());
			this->B_Invertir = (gcnew System::Windows::Forms::Button());
			this->B_Ordenar = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DG_Cola))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->B_InsertarOrdenado);
			this->groupBox1->Controls->Add(this->B_Insertar);
			this->groupBox1->Controls->Add(this->TB_Insertar);
			this->groupBox1->Controls->Add(this->DG_Cola);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(829, 157);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Cola";
			// 
			// B_InsertarOrdenado
			// 
			this->B_InsertarOrdenado->Location = System::Drawing::Point(386, 121);
			this->B_InsertarOrdenado->Name = L"B_InsertarOrdenado";
			this->B_InsertarOrdenado->Size = System::Drawing::Size(188, 25);
			this->B_InsertarOrdenado->TabIndex = 3;
			this->B_InsertarOrdenado->Text = L"Insertar Ordenadamente";
			this->B_InsertarOrdenado->UseVisualStyleBackColor = true;
			this->B_InsertarOrdenado->Click += gcnew System::EventHandler(this, &Form1::B_InsertarOrdenado_Click);
			// 
			// B_Insertar
			// 
			this->B_Insertar->Location = System::Drawing::Point(192, 121);
			this->B_Insertar->Name = L"B_Insertar";
			this->B_Insertar->Size = System::Drawing::Size(188, 25);
			this->B_Insertar->TabIndex = 2;
			this->B_Insertar->Text = L"Insertar";
			this->B_Insertar->UseVisualStyleBackColor = true;
			this->B_Insertar->Click += gcnew System::EventHandler(this, &Form1::B_Insertar_Click);
			// 
			// TB_Insertar
			// 
			this->TB_Insertar->Location = System::Drawing::Point(7, 122);
			this->TB_Insertar->Name = L"TB_Insertar";
			this->TB_Insertar->Size = System::Drawing::Size(179, 22);
			this->TB_Insertar->TabIndex = 1;
			// 
			// DG_Cola
			// 
			this->DG_Cola->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DG_Cola->Location = System::Drawing::Point(6, 21);
			this->DG_Cola->Name = L"DG_Cola";
			this->DG_Cola->RowTemplate->Height = 24;
			this->DG_Cola->Size = System::Drawing::Size(817, 94);
			this->DG_Cola->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->B_EliminarDuplicados);
			this->groupBox2->Controls->Add(this->B_Invertir);
			this->groupBox2->Controls->Add(this->B_Ordenar);
			this->groupBox2->Location = System::Drawing::Point(12, 175);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(829, 58);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Cola";
			// 
			// B_EliminarDuplicados
			// 
			this->B_EliminarDuplicados->Location = System::Drawing::Point(395, 21);
			this->B_EliminarDuplicados->Name = L"B_EliminarDuplicados";
			this->B_EliminarDuplicados->Size = System::Drawing::Size(188, 25);
			this->B_EliminarDuplicados->TabIndex = 4;
			this->B_EliminarDuplicados->Text = L"Eliminar duplicados";
			this->B_EliminarDuplicados->UseVisualStyleBackColor = true;
			this->B_EliminarDuplicados->Click += gcnew System::EventHandler(this, &Form1::B_EliminarDuplicados_Click);
			// 
			// B_Invertir
			// 
			this->B_Invertir->Location = System::Drawing::Point(201, 21);
			this->B_Invertir->Name = L"B_Invertir";
			this->B_Invertir->Size = System::Drawing::Size(188, 25);
			this->B_Invertir->TabIndex = 3;
			this->B_Invertir->Text = L"Invertir";
			this->B_Invertir->UseVisualStyleBackColor = true;
			this->B_Invertir->Click += gcnew System::EventHandler(this, &Form1::B_Invertir_Click);
			// 
			// B_Ordenar
			// 
			this->B_Ordenar->Location = System::Drawing::Point(7, 21);
			this->B_Ordenar->Name = L"B_Ordenar";
			this->B_Ordenar->Size = System::Drawing::Size(188, 25);
			this->B_Ordenar->TabIndex = 2;
			this->B_Ordenar->Text = L"Ordenar";
			this->B_Ordenar->UseVisualStyleBackColor = true;
			this->B_Ordenar->Click += gcnew System::EventHandler(this, &Form1::B_Ordenar_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(853, 245);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Colas";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DG_Cola))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void B_Insertar_Click(System::Object^  sender, System::EventArgs^  e) {
		APP.InsertarElemento(IO.TextBoxEntero(TB_Insertar));
		APP.GuardarColaEnMemoria(IO);
		IO.cargarDataGrid(DG_Cola);
	}

	private: System::Void B_InsertarOrdenado_Click(System::Object^  sender, System::EventArgs^  e) {
		APP.InsertarOrdenado(IO.TextBoxEntero(TB_Insertar));
		APP.GuardarColaEnMemoria(IO);
		IO.cargarDataGrid(DG_Cola);
	}

	private: System::Void B_Ordenar_Click(System::Object^  sender, System::EventArgs^  e) {
		APP.Ordenar();
		APP.GuardarColaEnMemoria(IO);
		IO.cargarDataGrid(DG_Cola);
	}

	private: System::Void B_Invertir_Click(System::Object^  sender, System::EventArgs^  e) {
		APP.Invertir();
		APP.GuardarColaEnMemoria(IO);
		IO.cargarDataGrid(DG_Cola);
	}

	private: System::Void B_EliminarDuplicados_Click(System::Object^  sender, System::EventArgs^  e) {
		APP.EliminarDuplicados();
		APP.GuardarColaEnMemoria(IO);
		IO.cargarDataGrid(DG_Cola);
	}
};
}
