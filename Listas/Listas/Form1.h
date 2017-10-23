#pragma once
#include "Aplicacion.h"
#include "Interfaz.h"
#include "Monomio.h"

#include <string>

using namespace std;

namespace CppCLR_WinformsProjekt {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	Interfaz<int> IO;
	Aplicacion<int> APP, APP_Repetidos;

	Interfaz<string> IO_String;
	Aplicacion<string> APP_String;

	Aplicacion<int> APP_A, APP_B;

	/// <summary>
	/// Resumen de Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
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
	private: System::Windows::Forms::Button^  B_Tamano_PolinomioA;
	private: System::Windows::Forms::Button^  B_Cargar_PolinomioA;
	private: System::Windows::Forms::TextBox^  TB_Tamano_PolinomioA;
	private: System::Windows::Forms::Button^  B_Guardar_PolinomioA;
	private: System::Windows::Forms::DataGridView^  DG_PolinomioA;






	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  B_Tamano_PolinomioB;
	private: System::Windows::Forms::Button^  B_Cargar_PolinomioB;
	private: System::Windows::Forms::TextBox^  TB_Tamano_PolinomioB;
	private: System::Windows::Forms::Button^  B_Guardar_PolinomioB;
	private: System::Windows::Forms::DataGridView^  DG_PolinomioB;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::DataGridView^  DG_Resultado;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Button^  B_Integrar;
	private: System::Windows::Forms::Button^  B_Derivar;

	private: System::Windows::Forms::Button^  B_Multiplicar;
	private: System::Windows::Forms::Button^  B_Restar;
	private: System::Windows::Forms::Button^  B_Sumar;
	private: System::Windows::Forms::GroupBox^  GB_OP;
	private: System::Windows::Forms::Button^  B_EliminarSN;

	private: System::Windows::Forms::Button^  B_Repetidos;
	private: System::Windows::Forms::Button^  B_JuegoJose;


	private: System::Windows::Forms::Button^  B_Ordenar;
	private: System::Windows::Forms::Button^  B_Insertar;


	private: System::Windows::Forms::Button^  B_EliminarTriplicados;
	private: System::Windows::Forms::Button^  B_EliminarDuplicados;
	private: System::Windows::Forms::Button^  B_Invertir;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::DataGridView^  DG_Lista;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::TextBox^  TB_Tamano;
	private: System::Windows::Forms::Button^  B_Tamano;
	private: System::Windows::Forms::Button^  B_Cargar;
	private: System::Windows::Forms::Button^  B_Guardar;
	private: System::Windows::Forms::DataGridView^  DG_Datos;
	private: System::Windows::Forms::TextBox^  TB_Jose;
	private: System::Windows::Forms::TextBox^  TB_Insertar;
	private: System::Windows::Forms::Button^  B_GuardarString;
	private: System::Windows::Forms::Button^  B_CargarString;

	protected:





















	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->B_Tamano_PolinomioA = (gcnew System::Windows::Forms::Button());
			this->B_Cargar_PolinomioA = (gcnew System::Windows::Forms::Button());
			this->TB_Tamano_PolinomioA = (gcnew System::Windows::Forms::TextBox());
			this->B_Guardar_PolinomioA = (gcnew System::Windows::Forms::Button());
			this->DG_PolinomioA = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->B_Tamano_PolinomioB = (gcnew System::Windows::Forms::Button());
			this->B_Cargar_PolinomioB = (gcnew System::Windows::Forms::Button());
			this->TB_Tamano_PolinomioB = (gcnew System::Windows::Forms::TextBox());
			this->B_Guardar_PolinomioB = (gcnew System::Windows::Forms::Button());
			this->DG_PolinomioB = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->DG_Resultado = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->B_Integrar = (gcnew System::Windows::Forms::Button());
			this->B_Derivar = (gcnew System::Windows::Forms::Button());
			this->B_Multiplicar = (gcnew System::Windows::Forms::Button());
			this->B_Restar = (gcnew System::Windows::Forms::Button());
			this->B_Sumar = (gcnew System::Windows::Forms::Button());
			this->GB_OP = (gcnew System::Windows::Forms::GroupBox());
			this->TB_Jose = (gcnew System::Windows::Forms::TextBox());
			this->TB_Insertar = (gcnew System::Windows::Forms::TextBox());
			this->B_EliminarSN = (gcnew System::Windows::Forms::Button());
			this->B_Repetidos = (gcnew System::Windows::Forms::Button());
			this->B_JuegoJose = (gcnew System::Windows::Forms::Button());
			this->B_Ordenar = (gcnew System::Windows::Forms::Button());
			this->B_Insertar = (gcnew System::Windows::Forms::Button());
			this->B_EliminarTriplicados = (gcnew System::Windows::Forms::Button());
			this->B_EliminarDuplicados = (gcnew System::Windows::Forms::Button());
			this->B_Invertir = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->DG_Lista = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->B_CargarString = (gcnew System::Windows::Forms::Button());
			this->B_GuardarString = (gcnew System::Windows::Forms::Button());
			this->TB_Tamano = (gcnew System::Windows::Forms::TextBox());
			this->B_Tamano = (gcnew System::Windows::Forms::Button());
			this->B_Cargar = (gcnew System::Windows::Forms::Button());
			this->B_Guardar = (gcnew System::Windows::Forms::Button());
			this->DG_Datos = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DG_PolinomioA))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DG_PolinomioB))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DG_Resultado))->BeginInit();
			this->groupBox5->SuspendLayout();
			this->GB_OP->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DG_Lista))->BeginInit();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DG_Datos))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->B_Tamano_PolinomioA);
			this->groupBox1->Controls->Add(this->B_Cargar_PolinomioA);
			this->groupBox1->Controls->Add(this->TB_Tamano_PolinomioA);
			this->groupBox1->Controls->Add(this->B_Guardar_PolinomioA);
			this->groupBox1->Controls->Add(this->DG_PolinomioA);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(721, 154);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Polinomio A";
			// 
			// B_Tamano_PolinomioA
			// 
			this->B_Tamano_PolinomioA->Location = System::Drawing::Point(131, 118);
			this->B_Tamano_PolinomioA->Name = L"B_Tamano_PolinomioA";
			this->B_Tamano_PolinomioA->Size = System::Drawing::Size(145, 26);
			this->B_Tamano_PolinomioA->TabIndex = 4;
			this->B_Tamano_PolinomioA->Text = L"Cambiar Tamaño";
			this->B_Tamano_PolinomioA->UseVisualStyleBackColor = true;
			this->B_Tamano_PolinomioA->Click += gcnew System::EventHandler(this, &Form1::B_Tamano_PolinomioA_Click);
			// 
			// B_Cargar_PolinomioA
			// 
			this->B_Cargar_PolinomioA->Location = System::Drawing::Point(580, 116);
			this->B_Cargar_PolinomioA->Name = L"B_Cargar_PolinomioA";
			this->B_Cargar_PolinomioA->Size = System::Drawing::Size(135, 28);
			this->B_Cargar_PolinomioA->TabIndex = 3;
			this->B_Cargar_PolinomioA->Text = L"Cargar";
			this->B_Cargar_PolinomioA->UseVisualStyleBackColor = true;
			this->B_Cargar_PolinomioA->Click += gcnew System::EventHandler(this, &Form1::B_Cargar_PolinomioA_Click);
			// 
			// TB_Tamano_PolinomioA
			// 
			this->TB_Tamano_PolinomioA->Location = System::Drawing::Point(6, 120);
			this->TB_Tamano_PolinomioA->Name = L"TB_Tamano_PolinomioA";
			this->TB_Tamano_PolinomioA->Size = System::Drawing::Size(119, 22);
			this->TB_Tamano_PolinomioA->TabIndex = 2;
			// 
			// B_Guardar_PolinomioA
			// 
			this->B_Guardar_PolinomioA->Location = System::Drawing::Point(439, 116);
			this->B_Guardar_PolinomioA->Name = L"B_Guardar_PolinomioA";
			this->B_Guardar_PolinomioA->Size = System::Drawing::Size(135, 28);
			this->B_Guardar_PolinomioA->TabIndex = 1;
			this->B_Guardar_PolinomioA->Text = L"Guardar";
			this->B_Guardar_PolinomioA->UseVisualStyleBackColor = true;
			this->B_Guardar_PolinomioA->Click += gcnew System::EventHandler(this, &Form1::B_Guardar_PolinomioA_Click);
			// 
			// DG_PolinomioA
			// 
			this->DG_PolinomioA->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DG_PolinomioA->Location = System::Drawing::Point(6, 21);
			this->DG_PolinomioA->Name = L"DG_PolinomioA";
			this->DG_PolinomioA->RowTemplate->Height = 24;
			this->DG_PolinomioA->Size = System::Drawing::Size(709, 89);
			this->DG_PolinomioA->TabIndex = 0;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->B_Tamano_PolinomioB);
			this->groupBox3->Controls->Add(this->B_Cargar_PolinomioB);
			this->groupBox3->Controls->Add(this->TB_Tamano_PolinomioB);
			this->groupBox3->Controls->Add(this->B_Guardar_PolinomioB);
			this->groupBox3->Controls->Add(this->DG_PolinomioB);
			this->groupBox3->Location = System::Drawing::Point(12, 172);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(721, 154);
			this->groupBox3->TabIndex = 5;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Polinomio B";
			// 
			// B_Tamano_PolinomioB
			// 
			this->B_Tamano_PolinomioB->Location = System::Drawing::Point(131, 121);
			this->B_Tamano_PolinomioB->Name = L"B_Tamano_PolinomioB";
			this->B_Tamano_PolinomioB->Size = System::Drawing::Size(145, 24);
			this->B_Tamano_PolinomioB->TabIndex = 4;
			this->B_Tamano_PolinomioB->Text = L"Cambiar Tamaño";
			this->B_Tamano_PolinomioB->UseVisualStyleBackColor = true;
			this->B_Tamano_PolinomioB->Click += gcnew System::EventHandler(this, &Form1::B_Tamano_PolinomioB_Click);
			// 
			// B_Cargar_PolinomioB
			// 
			this->B_Cargar_PolinomioB->Location = System::Drawing::Point(580, 114);
			this->B_Cargar_PolinomioB->Name = L"B_Cargar_PolinomioB";
			this->B_Cargar_PolinomioB->Size = System::Drawing::Size(135, 28);
			this->B_Cargar_PolinomioB->TabIndex = 3;
			this->B_Cargar_PolinomioB->Text = L"Cargar";
			this->B_Cargar_PolinomioB->UseVisualStyleBackColor = true;
			this->B_Cargar_PolinomioB->Click += gcnew System::EventHandler(this, &Form1::B_Cargar_PolinomioB_Click);
			// 
			// TB_Tamano_PolinomioB
			// 
			this->TB_Tamano_PolinomioB->Location = System::Drawing::Point(6, 121);
			this->TB_Tamano_PolinomioB->Name = L"TB_Tamano_PolinomioB";
			this->TB_Tamano_PolinomioB->Size = System::Drawing::Size(119, 22);
			this->TB_Tamano_PolinomioB->TabIndex = 2;
			// 
			// B_Guardar_PolinomioB
			// 
			this->B_Guardar_PolinomioB->Location = System::Drawing::Point(439, 116);
			this->B_Guardar_PolinomioB->Name = L"B_Guardar_PolinomioB";
			this->B_Guardar_PolinomioB->Size = System::Drawing::Size(135, 28);
			this->B_Guardar_PolinomioB->TabIndex = 1;
			this->B_Guardar_PolinomioB->Text = L"Guardar";
			this->B_Guardar_PolinomioB->UseVisualStyleBackColor = true;
			this->B_Guardar_PolinomioB->Click += gcnew System::EventHandler(this, &Form1::B_Guardar_PolinomioB_Click);
			// 
			// DG_PolinomioB
			// 
			this->DG_PolinomioB->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DG_PolinomioB->Location = System::Drawing::Point(6, 21);
			this->DG_PolinomioB->Name = L"DG_PolinomioB";
			this->DG_PolinomioB->RowTemplate->Height = 24;
			this->DG_PolinomioB->Size = System::Drawing::Size(709, 89);
			this->DG_PolinomioB->TabIndex = 0;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->DG_Resultado);
			this->groupBox4->Location = System::Drawing::Point(12, 332);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(721, 139);
			this->groupBox4->TabIndex = 6;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Resultado";
			// 
			// DG_Resultado
			// 
			this->DG_Resultado->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DG_Resultado->Location = System::Drawing::Point(6, 21);
			this->DG_Resultado->Name = L"DG_Resultado";
			this->DG_Resultado->RowTemplate->Height = 24;
			this->DG_Resultado->Size = System::Drawing::Size(709, 112);
			this->DG_Resultado->TabIndex = 0;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->B_Integrar);
			this->groupBox5->Controls->Add(this->B_Derivar);
			this->groupBox5->Controls->Add(this->B_Multiplicar);
			this->groupBox5->Controls->Add(this->B_Restar);
			this->groupBox5->Controls->Add(this->B_Sumar);
			this->groupBox5->Location = System::Drawing::Point(739, 22);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(165, 200);
			this->groupBox5->TabIndex = 7;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Operaciones";
			// 
			// B_Integrar
			// 
			this->B_Integrar->Location = System::Drawing::Point(6, 161);
			this->B_Integrar->Name = L"B_Integrar";
			this->B_Integrar->Size = System::Drawing::Size(153, 29);
			this->B_Integrar->TabIndex = 5;
			this->B_Integrar->Text = L"Integrar";
			this->B_Integrar->UseVisualStyleBackColor = true;
			this->B_Integrar->Click += gcnew System::EventHandler(this, &Form1::B_Integrar_Click);
			// 
			// B_Derivar
			// 
			this->B_Derivar->Location = System::Drawing::Point(6, 126);
			this->B_Derivar->Name = L"B_Derivar";
			this->B_Derivar->Size = System::Drawing::Size(153, 29);
			this->B_Derivar->TabIndex = 4;
			this->B_Derivar->Text = L"Derivar";
			this->B_Derivar->UseVisualStyleBackColor = true;
			this->B_Derivar->Click += gcnew System::EventHandler(this, &Form1::B_Derivar_Click);
			// 
			// B_Multiplicar
			// 
			this->B_Multiplicar->Location = System::Drawing::Point(6, 91);
			this->B_Multiplicar->Name = L"B_Multiplicar";
			this->B_Multiplicar->Size = System::Drawing::Size(153, 29);
			this->B_Multiplicar->TabIndex = 2;
			this->B_Multiplicar->Text = L"Multiplicar";
			this->B_Multiplicar->UseVisualStyleBackColor = true;
			this->B_Multiplicar->Click += gcnew System::EventHandler(this, &Form1::B_Multiplicar_Click);
			// 
			// B_Restar
			// 
			this->B_Restar->Location = System::Drawing::Point(6, 56);
			this->B_Restar->Name = L"B_Restar";
			this->B_Restar->Size = System::Drawing::Size(153, 29);
			this->B_Restar->TabIndex = 1;
			this->B_Restar->Text = L"Restar";
			this->B_Restar->UseVisualStyleBackColor = true;
			this->B_Restar->Click += gcnew System::EventHandler(this, &Form1::B_Restar_Click);
			// 
			// B_Sumar
			// 
			this->B_Sumar->Location = System::Drawing::Point(6, 21);
			this->B_Sumar->Name = L"B_Sumar";
			this->B_Sumar->Size = System::Drawing::Size(153, 29);
			this->B_Sumar->TabIndex = 0;
			this->B_Sumar->Text = L"Sumar";
			this->B_Sumar->UseVisualStyleBackColor = true;
			this->B_Sumar->Click += gcnew System::EventHandler(this, &Form1::B_Sumar_Click);
			// 
			// GB_OP
			// 
			this->GB_OP->Controls->Add(this->TB_Jose);
			this->GB_OP->Controls->Add(this->TB_Insertar);
			this->GB_OP->Controls->Add(this->B_EliminarSN);
			this->GB_OP->Controls->Add(this->B_Repetidos);
			this->GB_OP->Controls->Add(this->B_JuegoJose);
			this->GB_OP->Controls->Add(this->B_Ordenar);
			this->GB_OP->Controls->Add(this->B_Insertar);
			this->GB_OP->Controls->Add(this->B_EliminarTriplicados);
			this->GB_OP->Controls->Add(this->B_EliminarDuplicados);
			this->GB_OP->Controls->Add(this->B_Invertir);
			this->GB_OP->Location = System::Drawing::Point(910, 317);
			this->GB_OP->Name = L"GB_OP";
			this->GB_OP->Size = System::Drawing::Size(620, 154);
			this->GB_OP->TabIndex = 10;
			this->GB_OP->TabStop = false;
			this->GB_OP->Text = L"Aplicacion";
			// 
			// TB_Jose
			// 
			this->TB_Jose->Location = System::Drawing::Point(160, 56);
			this->TB_Jose->Name = L"TB_Jose";
			this->TB_Jose->Size = System::Drawing::Size(148, 22);
			this->TB_Jose->TabIndex = 11;
			// 
			// TB_Insertar
			// 
			this->TB_Insertar->Location = System::Drawing::Point(160, 23);
			this->TB_Insertar->Name = L"TB_Insertar";
			this->TB_Insertar->Size = System::Drawing::Size(148, 22);
			this->TB_Insertar->TabIndex = 5;
			// 
			// B_EliminarSN
			// 
			this->B_EliminarSN->Location = System::Drawing::Point(202, 88);
			this->B_EliminarSN->Name = L"B_EliminarSN";
			this->B_EliminarSN->Size = System::Drawing::Size(180, 27);
			this->B_EliminarSN->TabIndex = 10;
			this->B_EliminarSN->Text = L"Eliminar \'S\' y \'N\'";
			this->B_EliminarSN->UseVisualStyleBackColor = true;
			this->B_EliminarSN->Click += gcnew System::EventHandler(this, &Form1::B_EliminarSN_Click);
			// 
			// B_Repetidos
			// 
			this->B_Repetidos->Location = System::Drawing::Point(388, 88);
			this->B_Repetidos->Name = L"B_Repetidos";
			this->B_Repetidos->Size = System::Drawing::Size(190, 27);
			this->B_Repetidos->TabIndex = 9;
			this->B_Repetidos->Text = L"Devolver repetidos";
			this->B_Repetidos->UseVisualStyleBackColor = true;
			this->B_Repetidos->Click += gcnew System::EventHandler(this, &Form1::B_Repetidos_Click);
			// 
			// B_JuegoJose
			// 
			this->B_JuegoJose->Location = System::Drawing::Point(6, 54);
			this->B_JuegoJose->Name = L"B_JuegoJose";
			this->B_JuegoJose->Size = System::Drawing::Size(148, 27);
			this->B_JuegoJose->TabIndex = 8;
			this->B_JuegoJose->Text = L"Juego de José";
			this->B_JuegoJose->UseVisualStyleBackColor = true;
			this->B_JuegoJose->Click += gcnew System::EventHandler(this, &Form1::B_JuegoJose_Click);
			// 
			// B_Ordenar
			// 
			this->B_Ordenar->Location = System::Drawing::Point(388, 121);
			this->B_Ordenar->Name = L"B_Ordenar";
			this->B_Ordenar->Size = System::Drawing::Size(190, 27);
			this->B_Ordenar->TabIndex = 7;
			this->B_Ordenar->Text = L"Ordenar";
			this->B_Ordenar->UseVisualStyleBackColor = true;
			this->B_Ordenar->Click += gcnew System::EventHandler(this, &Form1::B_Ordenar_Click);
			// 
			// B_Insertar
			// 
			this->B_Insertar->Location = System::Drawing::Point(6, 21);
			this->B_Insertar->Name = L"B_Insertar";
			this->B_Insertar->Size = System::Drawing::Size(148, 27);
			this->B_Insertar->TabIndex = 6;
			this->B_Insertar->Text = L"Insertar ordenado";
			this->B_Insertar->UseVisualStyleBackColor = true;
			this->B_Insertar->Click += gcnew System::EventHandler(this, &Form1::B_Insertar_Click);
			// 
			// B_EliminarTriplicados
			// 
			this->B_EliminarTriplicados->Location = System::Drawing::Point(6, 121);
			this->B_EliminarTriplicados->Name = L"B_EliminarTriplicados";
			this->B_EliminarTriplicados->Size = System::Drawing::Size(190, 27);
			this->B_EliminarTriplicados->TabIndex = 5;
			this->B_EliminarTriplicados->Text = L"Eliminar triplicados";
			this->B_EliminarTriplicados->UseVisualStyleBackColor = true;
			this->B_EliminarTriplicados->Click += gcnew System::EventHandler(this, &Form1::B_EliminarTriplicados_Click);
			// 
			// B_EliminarDuplicados
			// 
			this->B_EliminarDuplicados->Location = System::Drawing::Point(6, 88);
			this->B_EliminarDuplicados->Name = L"B_EliminarDuplicados";
			this->B_EliminarDuplicados->Size = System::Drawing::Size(190, 27);
			this->B_EliminarDuplicados->TabIndex = 4;
			this->B_EliminarDuplicados->Text = L"Eliminar duplicados";
			this->B_EliminarDuplicados->UseVisualStyleBackColor = true;
			this->B_EliminarDuplicados->Click += gcnew System::EventHandler(this, &Form1::B_EliminarDuplicados_Click);
			// 
			// B_Invertir
			// 
			this->B_Invertir->Location = System::Drawing::Point(202, 121);
			this->B_Invertir->Name = L"B_Invertir";
			this->B_Invertir->Size = System::Drawing::Size(180, 27);
			this->B_Invertir->TabIndex = 3;
			this->B_Invertir->Text = L"Invertir";
			this->B_Invertir->UseVisualStyleBackColor = true;
			this->B_Invertir->Click += gcnew System::EventHandler(this, &Form1::B_Invertir_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->DG_Lista);
			this->groupBox2->Location = System::Drawing::Point(910, 205);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(620, 106);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Lista";
			// 
			// DG_Lista
			// 
			this->DG_Lista->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DG_Lista->Location = System::Drawing::Point(6, 20);
			this->DG_Lista->Name = L"DG_Lista";
			this->DG_Lista->RowTemplate->Height = 24;
			this->DG_Lista->Size = System::Drawing::Size(602, 80);
			this->DG_Lista->TabIndex = 0;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->B_CargarString);
			this->groupBox6->Controls->Add(this->B_GuardarString);
			this->groupBox6->Controls->Add(this->TB_Tamano);
			this->groupBox6->Controls->Add(this->B_Tamano);
			this->groupBox6->Controls->Add(this->B_Cargar);
			this->groupBox6->Controls->Add(this->B_Guardar);
			this->groupBox6->Controls->Add(this->DG_Datos);
			this->groupBox6->Location = System::Drawing::Point(910, 23);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(620, 189);
			this->groupBox6->TabIndex = 8;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Datos";
			// 
			// B_CargarString
			// 
			this->B_CargarString->Location = System::Drawing::Point(296, 149);
			this->B_CargarString->Name = L"B_CargarString";
			this->B_CargarString->Size = System::Drawing::Size(153, 27);
			this->B_CargarString->TabIndex = 6;
			this->B_CargarString->Text = L"Cargar String";
			this->B_CargarString->UseVisualStyleBackColor = true;
			this->B_CargarString->Click += gcnew System::EventHandler(this, &Form1::B_CargarString_Click);
			// 
			// B_GuardarString
			// 
			this->B_GuardarString->Location = System::Drawing::Point(296, 118);
			this->B_GuardarString->Name = L"B_GuardarString";
			this->B_GuardarString->Size = System::Drawing::Size(153, 27);
			this->B_GuardarString->TabIndex = 5;
			this->B_GuardarString->Text = L"Guardar String";
			this->B_GuardarString->UseVisualStyleBackColor = true;
			this->B_GuardarString->Click += gcnew System::EventHandler(this, &Form1::B_GuardarString_Click);
			// 
			// TB_Tamano
			// 
			this->TB_Tamano->Location = System::Drawing::Point(6, 120);
			this->TB_Tamano->Name = L"TB_Tamano";
			this->TB_Tamano->Size = System::Drawing::Size(107, 22);
			this->TB_Tamano->TabIndex = 4;
			// 
			// B_Tamano
			// 
			this->B_Tamano->Location = System::Drawing::Point(119, 118);
			this->B_Tamano->Name = L"B_Tamano";
			this->B_Tamano->Size = System::Drawing::Size(127, 27);
			this->B_Tamano->TabIndex = 3;
			this->B_Tamano->Text = L"Cambiar Tamaño";
			this->B_Tamano->UseVisualStyleBackColor = true;
			this->B_Tamano->Click += gcnew System::EventHandler(this, &Form1::B_Tamano_Click);
			// 
			// B_Cargar
			// 
			this->B_Cargar->Location = System::Drawing::Point(455, 149);
			this->B_Cargar->Name = L"B_Cargar";
			this->B_Cargar->Size = System::Drawing::Size(153, 27);
			this->B_Cargar->TabIndex = 2;
			this->B_Cargar->Text = L"Cargar";
			this->B_Cargar->UseVisualStyleBackColor = true;
			this->B_Cargar->Click += gcnew System::EventHandler(this, &Form1::B_Cargar_Click);
			// 
			// B_Guardar
			// 
			this->B_Guardar->Location = System::Drawing::Point(455, 118);
			this->B_Guardar->Name = L"B_Guardar";
			this->B_Guardar->Size = System::Drawing::Size(153, 27);
			this->B_Guardar->TabIndex = 1;
			this->B_Guardar->Text = L"Guardar";
			this->B_Guardar->UseVisualStyleBackColor = true;
			this->B_Guardar->Click += gcnew System::EventHandler(this, &Form1::B_Guardar_Click);
			// 
			// DG_Datos
			// 
			this->DG_Datos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DG_Datos->Location = System::Drawing::Point(6, 21);
			this->DG_Datos->Name = L"DG_Datos";
			this->DG_Datos->RowTemplate->Height = 24;
			this->DG_Datos->Size = System::Drawing::Size(602, 91);
			this->DG_Datos->TabIndex = 0;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1544, 499);
			this->Controls->Add(this->GB_OP);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Inicio";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DG_PolinomioA))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DG_PolinomioB))->EndInit();
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DG_Resultado))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->GB_OP->ResumeLayout(false);
			this->GB_OP->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DG_Lista))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DG_Datos))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void B_Tamano_PolinomioA_Click(System::Object^  sender, System::EventArgs^  e) {
		IO.cambiarTamano(DG_PolinomioA, TB_Tamano_PolinomioA);

	}

	private: System::Void B_Guardar_PolinomioA_Click(System::Object^  sender, System::EventArgs^  e) {
		IO.guardarDataGrid(DG_PolinomioA);
		APP_A.guardarPolinomioEnLista(IO);
	}

	private: System::Void B_Cargar_PolinomioA_Click(System::Object^  sender, System::EventArgs^  e) {
		APP_A.guardarListaEnPolinomio(IO);
		IO.cargarDataGrid(DG_Resultado);
	}

	private: System::Void B_Tamano_PolinomioB_Click(System::Object^  sender, System::EventArgs^  e) {
		IO.cambiarTamano(DG_PolinomioB, TB_Tamano_PolinomioB);

	}
	private: System::Void B_Guardar_PolinomioB_Click(System::Object^  sender, System::EventArgs^  e) {
		IO.guardarDataGrid(DG_PolinomioB);
		APP_B.guardarPolinomioEnLista(IO);
	}
	private: System::Void B_Cargar_PolinomioB_Click(System::Object^  sender, System::EventArgs^  e) {
		APP_B.guardarListaEnPolinomio(IO);
		IO.cargarDataGrid(DG_Resultado);
	}
	private: System::Void B_Sumar_Click(System::Object^  sender, System::EventArgs^  e) {
		APP_A.SumarPolinomios(APP_B.Polinomio());
		APP_A.guardarListaEnPolinomio(IO);
		IO.cargarDataGrid(DG_Resultado);
	}

	private: System::Void B_Restar_Click(System::Object^  sender, System::EventArgs^  e) {
		APP_A.RestarPolinomios(APP_B.Polinomio());
		APP_A.guardarListaEnPolinomio(IO);
		IO.cargarDataGrid(DG_Resultado);
	}

	private: System::Void B_Multiplicar_Click(System::Object^  sender, System::EventArgs^  e) {
		APP_A.MultiplicarPolinomios(APP_B.Polinomio());
		APP_A.guardarListaEnPolinomio(IO);
		IO.cargarDataGrid(DG_Resultado);
	}


	private: System::Void B_Derivar_Click(System::Object^  sender, System::EventArgs^  e) {
		APP_A.DerivarPolinomios();
		APP_A.guardarListaEnPolinomio(IO);
		IO.cargarDataGrid(DG_Resultado);
	}

	private: System::Void B_Integrar_Click(System::Object^  sender, System::EventArgs^  e) {
		APP_A.IntegrarPolinomios();
		APP_A.guardarListaEnPolinomio(IO);
		IO.cargarDataGrid(DG_Resultado);
	}

			 // FIN POLINOMIOS //

	private: System::Void B_Tamano_Click(System::Object^  sender, System::EventArgs^  e) {
		IO.cambiarTamano(DG_Datos, TB_Tamano);
	}

	private: System::Void B_Guardar_Click(System::Object^  sender, System::EventArgs^  e) {
		IO.guardarDataGrid(DG_Datos);
		APP.guardarMemoriaEnLista(IO);
	}

	private: System::Void B_Cargar_Click(System::Object^  sender, System::EventArgs^  e) {
		APP.guardarListaEnMemoria(IO);
		IO.cargarDataGrid(DG_Lista);
	}

	private: System::Void B_Invertir_Click(System::Object^  sender, System::EventArgs^  e) {
		APP.invertirLista();
		APP.guardarListaEnMemoria(IO);
		IO.cargarDataGrid(DG_Lista);
	}

	private: System::Void B_EliminarDuplicados_Click(System::Object^  sender, System::EventArgs^  e) {
		APP.eliminarDuplicados();
		APP.guardarListaEnMemoria(IO);
		IO.cargarDataGrid(DG_Lista);
	}

	private: System::Void B_EliminarTriplicados_Click(System::Object^  sender, System::EventArgs^  e) {
		APP.eliminarTriplicados();
		APP.guardarListaEnMemoria(IO);
		IO.cargarDataGrid(DG_Lista);
	}

	private: System::Void B_Insertar_Click(System::Object^  sender, System::EventArgs^  e) {
		APP.insertarOrdenadamente(IO.TextBoxEntero(TB_Insertar));
		APP.guardarListaEnMemoria(IO);
		IO.cargarDataGrid(DG_Lista);
	}

	private: System::Void B_Ordenar_Click(System::Object^  sender, System::EventArgs^  e) {
		APP.ordenarLista();
		APP.guardarListaEnMemoria(IO);
		IO.cargarDataGrid(DG_Lista);
	}

	private: System::Void B_JuegoJose_Click(System::Object^  sender, System::EventArgs^  e) {
		APP.juegoJose(IO.TextBoxEntero(TB_Jose));
		APP.guardarListaEnMemoria(IO);
		IO.cargarDataGrid(DG_Lista);
	}
	private: System::Void B_Repetidos_Click(System::Object^  sender, System::EventArgs^  e) {
		APP.devolverRepetidos(APP_Repetidos);
		APP_Repetidos.guardarListaEnMemoria(IO);
		APP_Repetidos.ordenarLista();
		IO.cargarDataGrid(DG_Lista);
	}

	private: System::Void B_GuardarString_Click(System::Object^  sender, System::EventArgs^  e) {
		IO_String.guardarStringDataGrid(DG_Datos);
		APP_String.guardarMemoriaEnLista(IO_String);
	}

	private: System::Void B_CargarString_Click(System::Object^  sender, System::EventArgs^  e) {
		IO_String.cargarStringDataGrid(DG_Lista);
	}

	private: System::Void B_EliminarSN_Click(System::Object^  sender, System::EventArgs^  e) {
		APP_String.EliminarSN(APP_String);
		APP_String.guardarListaEnMemoria(IO_String);
		IO_String.cargarStringDataGrid(DG_Lista);
	}


	};
}

