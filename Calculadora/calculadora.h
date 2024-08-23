#pragma once
#include "calculadora.h"
#include "math.h"
#include "stdio.h"

namespace Calculadora {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de calculadora
	/// </summary>
	public ref class calculadora : public System::Windows::Forms::Form
	{
	public:
		calculadora(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~calculadora()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ btnporcentaje;
	private: System::Windows::Forms::Button^ btnpotencia2;
	private: System::Windows::Forms::Button^ btnpotencia3;





	private: System::Windows::Forms::Button^ btndivision;

	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btnmultiplicacion;
	protected:

	protected:








	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btnresta;








	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btnsuma;
	private: System::Windows::Forms::Button^ btnigual;









	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ btnpunto;
	private: System::Windows::Forms::Button^ btnC;
	private: System::Windows::Forms::Button^ btnDEL;





	private: System::Windows::Forms::TextBox^ txtDisplay;
	private: System::Windows::Forms::ToolStripMenuItem^ menúToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ estándarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ derivadasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ integralesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;

	private: System::Windows::Forms::TextBox^ txtDisplay2;
	private: System::Windows::Forms::TextBox^ txtDisplay3;

	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtliminfer;
	private: System::Windows::Forms::TextBox^ txtlimsuper;


	private: System::Windows::Forms::TextBox^ txtnum1;




private: System::Windows::Forms::TextBox^ txtpotencia1;


private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ btncalcular2;
private: System::Windows::Forms::Button^ btnlimpiar2;



private: System::Windows::Forms::TextBox^ txtnumero1;
private: System::Windows::Forms::Label^ lblD1;


private: System::Windows::Forms::TextBox^ txtpotencia2;








private: System::Windows::Forms::TextBox^ txtX2;

private: System::Windows::Forms::Label^ lblD;

private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::TextBox^ txtD;

private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::TextBox^ txtX;
private: System::Windows::Forms::Label^ LBL1;


private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ LBL3D;

private: System::Windows::Forms::Label^ LBL2;
private: System::Windows::Forms::Label^ LblPotencia;
private: System::Windows::Forms::Label^ lblNumero;
private: System::Windows::Forms::Label^ lblDe;
private: System::Windows::Forms::Label^ LBLXX;





private: System::Windows::Forms::Label^ lblDD;

private: System::Windows::Forms::Label^ lblPote;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ lblxxx;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label11;































	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(calculadora::typeid));
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btnporcentaje = (gcnew System::Windows::Forms::Button());
			this->btnpotencia2 = (gcnew System::Windows::Forms::Button());
			this->btnpotencia3 = (gcnew System::Windows::Forms::Button());
			this->btndivision = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnmultiplicacion = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnresta = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnsuma = (gcnew System::Windows::Forms::Button());
			this->btnigual = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnpunto = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnDEL = (gcnew System::Windows::Forms::Button());
			this->menúToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estándarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->derivadasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->integralesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->txtDisplay2 = (gcnew System::Windows::Forms::TextBox());
			this->txtDisplay3 = (gcnew System::Windows::Forms::TextBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->backgroundWorker2 = (gcnew System::ComponentModel::BackgroundWorker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtliminfer = (gcnew System::Windows::Forms::TextBox());
			this->txtlimsuper = (gcnew System::Windows::Forms::TextBox());
			this->txtnum1 = (gcnew System::Windows::Forms::TextBox());
			this->txtpotencia1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->btncalcular2 = (gcnew System::Windows::Forms::Button());
			this->btnlimpiar2 = (gcnew System::Windows::Forms::Button());
			this->txtnumero1 = (gcnew System::Windows::Forms::TextBox());
			this->lblD1 = (gcnew System::Windows::Forms::Label());
			this->txtpotencia2 = (gcnew System::Windows::Forms::TextBox());
			this->txtX2 = (gcnew System::Windows::Forms::TextBox());
			this->lblD = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtD = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtX = (gcnew System::Windows::Forms::TextBox());
			this->LBL1 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->LBL3D = (gcnew System::Windows::Forms::Label());
			this->LBL2 = (gcnew System::Windows::Forms::Label());
			this->LblPotencia = (gcnew System::Windows::Forms::Label());
			this->lblNumero = (gcnew System::Windows::Forms::Label());
			this->lblDe = (gcnew System::Windows::Forms::Label());
			this->LBLXX = (gcnew System::Windows::Forms::Label());
			this->lblDD = (gcnew System::Windows::Forms::Label());
			this->lblPote = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lblxxx = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// txtDisplay
			// 
			this->txtDisplay->BackColor = System::Drawing::Color::Turquoise;
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtDisplay->Location = System::Drawing::Point(19, 32);
			this->txtDisplay->Margin = System::Windows::Forms::Padding(2);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(324, 65);
			this->txtDisplay->TabIndex = 0;
			// 
			// btnporcentaje
			// 
			this->btnporcentaje->BackColor = System::Drawing::Color::Turquoise;
			this->btnporcentaje->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnporcentaje->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnporcentaje->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnporcentaje->Location = System::Drawing::Point(31, 183);
			this->btnporcentaje->Margin = System::Windows::Forms::Padding(2);
			this->btnporcentaje->Name = L"btnporcentaje";
			this->btnporcentaje->Size = System::Drawing::Size(56, 61);
			this->btnporcentaje->TabIndex = 1;
			this->btnporcentaje->Text = L"%";
			this->btnporcentaje->UseVisualStyleBackColor = false;
			this->btnporcentaje->Click += gcnew System::EventHandler(this, &calculadora::btnporcentaje_Click);
			// 
			// btnpotencia2
			// 
			this->btnpotencia2->BackColor = System::Drawing::Color::Turquoise;
			this->btnpotencia2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnpotencia2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnpotencia2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnpotencia2->Location = System::Drawing::Point(111, 183);
			this->btnpotencia2->Margin = System::Windows::Forms::Padding(2);
			this->btnpotencia2->Name = L"btnpotencia2";
			this->btnpotencia2->Size = System::Drawing::Size(56, 61);
			this->btnpotencia2->TabIndex = 2;
			this->btnpotencia2->Text = L"x²";
			this->btnpotencia2->UseVisualStyleBackColor = false;
			this->btnpotencia2->Click += gcnew System::EventHandler(this, &calculadora::btnpotencia2_Click);
			// 
			// btnpotencia3
			// 
			this->btnpotencia3->BackColor = System::Drawing::Color::Turquoise;
			this->btnpotencia3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnpotencia3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnpotencia3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnpotencia3->Location = System::Drawing::Point(191, 183);
			this->btnpotencia3->Margin = System::Windows::Forms::Padding(2);
			this->btnpotencia3->Name = L"btnpotencia3";
			this->btnpotencia3->Size = System::Drawing::Size(56, 61);
			this->btnpotencia3->TabIndex = 3;
			this->btnpotencia3->Text = L"x³";
			this->btnpotencia3->UseVisualStyleBackColor = false;
			this->btnpotencia3->Click += gcnew System::EventHandler(this, &calculadora::btnpotencia3_Click);
			// 
			// btndivision
			// 
			this->btndivision->BackColor = System::Drawing::Color::Turquoise;
			this->btndivision->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btndivision->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndivision->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btndivision->Location = System::Drawing::Point(272, 183);
			this->btndivision->Margin = System::Windows::Forms::Padding(2);
			this->btndivision->Name = L"btndivision";
			this->btndivision->Size = System::Drawing::Size(56, 61);
			this->btndivision->TabIndex = 4;
			this->btndivision->Text = L"/";
			this->btndivision->UseVisualStyleBackColor = false;
			this->btndivision->Click += gcnew System::EventHandler(this, &calculadora::EnterOperator);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::White;
			this->btn7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn7->Location = System::Drawing::Point(31, 256);
			this->btn7->Margin = System::Windows::Forms::Padding(2);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(56, 61);
			this->btn7->TabIndex = 5;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &calculadora::EnterNumber);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::Color::White;
			this->btn8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn8->Location = System::Drawing::Point(111, 256);
			this->btn8->Margin = System::Windows::Forms::Padding(2);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(56, 61);
			this->btn8->TabIndex = 6;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &calculadora::EnterNumber);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::Color::White;
			this->btn9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn9->Location = System::Drawing::Point(191, 256);
			this->btn9->Margin = System::Windows::Forms::Padding(2);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(56, 61);
			this->btn9->TabIndex = 7;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &calculadora::EnterNumber);
			// 
			// btnmultiplicacion
			// 
			this->btnmultiplicacion->BackColor = System::Drawing::Color::Turquoise;
			this->btnmultiplicacion->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnmultiplicacion->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnmultiplicacion->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnmultiplicacion->Location = System::Drawing::Point(270, 256);
			this->btnmultiplicacion->Margin = System::Windows::Forms::Padding(2);
			this->btnmultiplicacion->Name = L"btnmultiplicacion";
			this->btnmultiplicacion->Size = System::Drawing::Size(56, 61);
			this->btnmultiplicacion->TabIndex = 8;
			this->btnmultiplicacion->Text = L"*";
			this->btnmultiplicacion->UseVisualStyleBackColor = false;
			this->btnmultiplicacion->Click += gcnew System::EventHandler(this, &calculadora::EnterOperator);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::White;
			this->btn4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn4->Location = System::Drawing::Point(31, 330);
			this->btn4->Margin = System::Windows::Forms::Padding(2);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(56, 61);
			this->btn4->TabIndex = 9;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &calculadora::EnterNumber);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::White;
			this->btn5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn5->Location = System::Drawing::Point(111, 330);
			this->btn5->Margin = System::Windows::Forms::Padding(2);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(56, 61);
			this->btn5->TabIndex = 10;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &calculadora::EnterNumber);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::White;
			this->btn6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn6->Location = System::Drawing::Point(191, 330);
			this->btn6->Margin = System::Windows::Forms::Padding(2);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(56, 61);
			this->btn6->TabIndex = 11;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &calculadora::EnterNumber);
			// 
			// btnresta
			// 
			this->btnresta->BackColor = System::Drawing::Color::Turquoise;
			this->btnresta->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnresta->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnresta->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnresta->Location = System::Drawing::Point(270, 330);
			this->btnresta->Margin = System::Windows::Forms::Padding(2);
			this->btnresta->Name = L"btnresta";
			this->btnresta->Size = System::Drawing::Size(56, 61);
			this->btnresta->TabIndex = 12;
			this->btnresta->Text = L"-";
			this->btnresta->UseVisualStyleBackColor = false;
			this->btnresta->Click += gcnew System::EventHandler(this, &calculadora::EnterOperator);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::White;
			this->btn1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn1->Location = System::Drawing::Point(31, 403);
			this->btn1->Margin = System::Windows::Forms::Padding(2);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(56, 61);
			this->btn1->TabIndex = 13;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &calculadora::EnterNumber);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::White;
			this->btn2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn2->Location = System::Drawing::Point(111, 403);
			this->btn2->Margin = System::Windows::Forms::Padding(2);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(56, 61);
			this->btn2->TabIndex = 14;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &calculadora::EnterNumber);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::White;
			this->btn3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn3->Location = System::Drawing::Point(191, 403);
			this->btn3->Margin = System::Windows::Forms::Padding(2);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(56, 61);
			this->btn3->TabIndex = 15;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &calculadora::EnterNumber);
			// 
			// btnsuma
			// 
			this->btnsuma->BackColor = System::Drawing::Color::Turquoise;
			this->btnsuma->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnsuma->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsuma->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnsuma->Location = System::Drawing::Point(270, 403);
			this->btnsuma->Margin = System::Windows::Forms::Padding(2);
			this->btnsuma->Name = L"btnsuma";
			this->btnsuma->Size = System::Drawing::Size(56, 61);
			this->btnsuma->TabIndex = 16;
			this->btnsuma->Text = L"+";
			this->btnsuma->UseVisualStyleBackColor = false;
			this->btnsuma->Click += gcnew System::EventHandler(this, &calculadora::EnterOperator);
			// 
			// btnigual
			// 
			this->btnigual->BackColor = System::Drawing::Color::Turquoise;
			this->btnigual->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnigual->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnigual->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnigual->Location = System::Drawing::Point(190, 479);
			this->btnigual->Margin = System::Windows::Forms::Padding(2);
			this->btnigual->Name = L"btnigual";
			this->btnigual->Size = System::Drawing::Size(136, 61);
			this->btnigual->TabIndex = 17;
			this->btnigual->Text = L"=";
			this->btnigual->UseVisualStyleBackColor = false;
			this->btnigual->Click += gcnew System::EventHandler(this, &calculadora::btnigual_Click);
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::Color::White;
			this->btn0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn0->Location = System::Drawing::Point(31, 479);
			this->btn0->Margin = System::Windows::Forms::Padding(2);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(56, 61);
			this->btn0->TabIndex = 18;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &calculadora::EnterNumber);
			// 
			// btnpunto
			// 
			this->btnpunto->BackColor = System::Drawing::Color::White;
			this->btnpunto->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnpunto->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnpunto->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnpunto->Location = System::Drawing::Point(112, 479);
			this->btnpunto->Margin = System::Windows::Forms::Padding(2);
			this->btnpunto->Name = L"btnpunto";
			this->btnpunto->Size = System::Drawing::Size(56, 61);
			this->btnpunto->TabIndex = 19;
			this->btnpunto->Text = L".";
			this->btnpunto->UseVisualStyleBackColor = false;
			this->btnpunto->Click += gcnew System::EventHandler(this, &calculadora::btnpunto_Click);
			// 
			// btnC
			// 
			this->btnC->BackColor = System::Drawing::Color::Turquoise;
			this->btnC->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnC->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnC->Location = System::Drawing::Point(32, 109);
			this->btnC->Margin = System::Windows::Forms::Padding(2);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(136, 61);
			this->btnC->TabIndex = 20;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = false;
			this->btnC->Click += gcnew System::EventHandler(this, &calculadora::btnC_Click);
			// 
			// btnDEL
			// 
			this->btnDEL->BackColor = System::Drawing::Color::Turquoise;
			this->btnDEL->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnDEL->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDEL->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnDEL->Location = System::Drawing::Point(191, 109);
			this->btnDEL->Margin = System::Windows::Forms::Padding(2);
			this->btnDEL->Name = L"btnDEL";
			this->btnDEL->Size = System::Drawing::Size(136, 61);
			this->btnDEL->TabIndex = 21;
			this->btnDEL->Text = L"DEL";
			this->btnDEL->UseVisualStyleBackColor = false;
			this->btnDEL->Click += gcnew System::EventHandler(this, &calculadora::btnDEL_Click);
			// 
			// menúToolStripMenuItem
			// 
			this->menúToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->estándarToolStripMenuItem,
					this->derivadasToolStripMenuItem, this->integralesToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->menúToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menúToolStripMenuItem->ForeColor = System::Drawing::Color::Gray;
			this->menúToolStripMenuItem->Name = L"menúToolStripMenuItem";
			this->menúToolStripMenuItem->Size = System::Drawing::Size(63, 24);
			this->menúToolStripMenuItem->Text = L"Menú";
			// 
			// estándarToolStripMenuItem
			// 
			this->estándarToolStripMenuItem->Name = L"estándarToolStripMenuItem";
			this->estándarToolStripMenuItem->Size = System::Drawing::Size(162, 26);
			this->estándarToolStripMenuItem->Text = L"Estándar";
			this->estándarToolStripMenuItem->Click += gcnew System::EventHandler(this, &calculadora::estándarToolStripMenuItem_Click);
			// 
			// derivadasToolStripMenuItem
			// 
			this->derivadasToolStripMenuItem->Name = L"derivadasToolStripMenuItem";
			this->derivadasToolStripMenuItem->Size = System::Drawing::Size(162, 26);
			this->derivadasToolStripMenuItem->Text = L"Derivadas";
			this->derivadasToolStripMenuItem->Click += gcnew System::EventHandler(this, &calculadora::derivadasToolStripMenuItem_Click);
			// 
			// integralesToolStripMenuItem
			// 
			this->integralesToolStripMenuItem->Name = L"integralesToolStripMenuItem";
			this->integralesToolStripMenuItem->Size = System::Drawing::Size(162, 26);
			this->integralesToolStripMenuItem->Text = L"Integrales";
			this->integralesToolStripMenuItem->Click += gcnew System::EventHandler(this, &calculadora::integralesToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(162, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &calculadora::salirToolStripMenuItem_Click_1);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Transparent;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menúToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1040, 28);
			this->menuStrip1->TabIndex = 23;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &calculadora::menuStrip1_ItemClicked);
			// 
			// txtDisplay2
			// 
			this->txtDisplay2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtDisplay2->BackColor = System::Drawing::Color::Turquoise;
			this->txtDisplay2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtDisplay2->Location = System::Drawing::Point(381, 32);
			this->txtDisplay2->Margin = System::Windows::Forms::Padding(2);
			this->txtDisplay2->Multiline = true;
			this->txtDisplay2->Name = L"txtDisplay2";
			this->txtDisplay2->Size = System::Drawing::Size(324, 65);
			this->txtDisplay2->TabIndex = 26;
			this->txtDisplay2->TextChanged += gcnew System::EventHandler(this, &calculadora::txtDisplay2_TextChanged);
			// 
			// txtDisplay3
			// 
			this->txtDisplay3->BackColor = System::Drawing::Color::Turquoise;
			this->txtDisplay3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->txtDisplay3->Location = System::Drawing::Point(748, 32);
			this->txtDisplay3->Margin = System::Windows::Forms::Padding(2);
			this->txtDisplay3->Multiline = true;
			this->txtDisplay3->Name = L"txtDisplay3";
			this->txtDisplay3->Size = System::Drawing::Size(324, 65);
			this->txtDisplay3->TabIndex = 27;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(751, 131);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 91);
			this->label1->TabIndex = 29;
			this->label1->Text = L"∫";
			this->label1->Click += gcnew System::EventHandler(this, &calculadora::label1_Click);
			// 
			// txtliminfer
			// 
			this->txtliminfer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtliminfer->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtliminfer->Location = System::Drawing::Point(789, 125);
			this->txtliminfer->Name = L"txtliminfer";
			this->txtliminfer->Size = System::Drawing::Size(25, 26);
			this->txtliminfer->TabIndex = 30;
			// 
			// txtlimsuper
			// 
			this->txtlimsuper->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtlimsuper->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtlimsuper->Location = System::Drawing::Point(789, 192);
			this->txtlimsuper->Name = L"txtlimsuper";
			this->txtlimsuper->Size = System::Drawing::Size(25, 26);
			this->txtlimsuper->TabIndex = 31;
			// 
			// txtnum1
			// 
			this->txtnum1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtnum1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtnum1->Location = System::Drawing::Point(825, 158);
			this->txtnum1->Name = L"txtnum1";
			this->txtnum1->Size = System::Drawing::Size(25, 26);
			this->txtnum1->TabIndex = 32;
			// 
			// txtpotencia1
			// 
			this->txtpotencia1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtpotencia1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtpotencia1->Location = System::Drawing::Point(883, 149);
			this->txtpotencia1->Name = L"txtpotencia1";
			this->txtpotencia1->Size = System::Drawing::Size(25, 23);
			this->txtpotencia1->TabIndex = 34;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Location = System::Drawing::Point(908, 167);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 39);
			this->label3->TabIndex = 35;
			this->label3->Text = L"d";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Turquoise;
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->Location = System::Drawing::Point(789, 340);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(78, 33);
			this->button2->TabIndex = 36;
			this->button2->Text = L"Calcular";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &calculadora::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Turquoise;
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button3->Location = System::Drawing::Point(885, 340);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(83, 33);
			this->button3->TabIndex = 37;
			this->button3->Text = L"limpiar";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &calculadora::button3_Click);
			// 
			// btncalcular2
			// 
			this->btncalcular2->BackColor = System::Drawing::Color::Turquoise;
			this->btncalcular2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btncalcular2->Location = System::Drawing::Point(417, 340);
			this->btncalcular2->Name = L"btncalcular2";
			this->btncalcular2->Size = System::Drawing::Size(82, 33);
			this->btncalcular2->TabIndex = 38;
			this->btncalcular2->Text = L"calcular";
			this->btncalcular2->UseVisualStyleBackColor = false;
			this->btncalcular2->Click += gcnew System::EventHandler(this, &calculadora::btncalcular2_Click);
			// 
			// btnlimpiar2
			// 
			this->btnlimpiar2->BackColor = System::Drawing::Color::Turquoise;
			this->btnlimpiar2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnlimpiar2->Location = System::Drawing::Point(543, 340);
			this->btnlimpiar2->Name = L"btnlimpiar2";
			this->btnlimpiar2->Size = System::Drawing::Size(82, 33);
			this->btnlimpiar2->TabIndex = 39;
			this->btnlimpiar2->Text = L"limpiar";
			this->btnlimpiar2->UseVisualStyleBackColor = false;
			this->btnlimpiar2->Click += gcnew System::EventHandler(this, &calculadora::btnlimpiar2_Click);
			// 
			// txtnumero1
			// 
			this->txtnumero1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtnumero1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtnumero1->Location = System::Drawing::Point(500, 153);
			this->txtnumero1->Multiline = true;
			this->txtnumero1->Name = L"txtnumero1";
			this->txtnumero1->Size = System::Drawing::Size(42, 25);
			this->txtnumero1->TabIndex = 43;
			this->txtnumero1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// lblD1
			// 
			this->lblD1->AutoSize = true;
			this->lblD1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblD1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->lblD1->Location = System::Drawing::Point(583, 153);
			this->lblD1->Name = L"lblD1";
			this->lblD1->Size = System::Drawing::Size(32, 36);
			this->lblD1->TabIndex = 44;
			this->lblD1->Text = L"d";
			// 
			// txtpotencia2
			// 
			this->txtpotencia2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtpotencia2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtpotencia2->Location = System::Drawing::Point(564, 131);
			this->txtpotencia2->Name = L"txtpotencia2";
			this->txtpotencia2->Size = System::Drawing::Size(25, 24);
			this->txtpotencia2->TabIndex = 46;
			this->txtpotencia2->TextChanged += gcnew System::EventHandler(this, &calculadora::txtpotencia2_TextChanged);
			// 
			// txtX2
			// 
			this->txtX2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtX2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtX2->Location = System::Drawing::Point(856, 167);
			this->txtX2->Name = L"txtX2";
			this->txtX2->Size = System::Drawing::Size(25, 26);
			this->txtX2->TabIndex = 51;
			this->txtX2->TextChanged += gcnew System::EventHandler(this, &calculadora::txtX2_TextChanged);
			// 
			// lblD
			// 
			this->lblD->AutoSize = true;
			this->lblD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblD->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->lblD->Location = System::Drawing::Point(607, 162);
			this->lblD->Name = L"lblD";
			this->lblD->Size = System::Drawing::Size(22, 24);
			this->lblD->TabIndex = 53;
			this->lblD->Text = L"--";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label4->Location = System::Drawing::Point(412, 149);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(25, 36);
			this->label4->TabIndex = 54;
			this->label4->Text = L"f";
			// 
			// txtD
			// 
			this->txtD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtD->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtD->Location = System::Drawing::Point(443, 156);
			this->txtD->Name = L"txtD";
			this->txtD->Size = System::Drawing::Size(18, 29);
			this->txtD->TabIndex = 55;
			this->txtD->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label5->Location = System::Drawing::Point(471, 149);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 36);
			this->label5->TabIndex = 56;
			this->label5->Text = L"=";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label6->Location = System::Drawing::Point(428, 149);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(26, 36);
			this->label6->TabIndex = 57;
			this->label6->Text = L"(";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label8->Location = System::Drawing::Point(458, 149);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(26, 36);
			this->label8->TabIndex = 58;
			this->label8->Text = L")";
			// 
			// txtX
			// 
			this->txtX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtX->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtX->Location = System::Drawing::Point(543, 152);
			this->txtX->Multiline = true;
			this->txtX->Name = L"txtX";
			this->txtX->Size = System::Drawing::Size(21, 27);
			this->txtX->TabIndex = 59;
			// 
			// LBL1
			// 
			this->LBL1->AutoSize = true;
			this->LBL1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBL1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->LBL1->Location = System::Drawing::Point(428, 217);
			this->LBL1->Name = L"LBL1";
			this->LBL1->Size = System::Drawing::Size(0, 29);
			this->LBL1->TabIndex = 66;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label10->Location = System::Drawing::Point(412, 224);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(69, 29);
			this->label10->TabIndex = 68;
			this->label10->Text = L"____";
			// 
			// LBL3D
			// 
			this->LBL3D->AutoSize = true;
			this->LBL3D->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBL3D->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->LBL3D->Location = System::Drawing::Point(439, 247);
			this->LBL3D->Name = L"LBL3D";
			this->LBL3D->Size = System::Drawing::Size(0, 29);
			this->LBL3D->TabIndex = 70;
			// 
			// LBL2
			// 
			this->LBL2->AutoSize = true;
			this->LBL2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBL2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->LBL2->Location = System::Drawing::Point(420, 248);
			this->LBL2->Name = L"LBL2";
			this->LBL2->Size = System::Drawing::Size(0, 29);
			this->LBL2->TabIndex = 69;
			// 
			// LblPotencia
			// 
			this->LblPotencia->AutoSize = true;
			this->LblPotencia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LblPotencia->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->LblPotencia->Location = System::Drawing::Point(501, 233);
			this->LblPotencia->Name = L"LblPotencia";
			this->LblPotencia->Size = System::Drawing::Size(0, 29);
			this->LblPotencia->TabIndex = 71;
			// 
			// lblNumero
			// 
			this->lblNumero->AutoSize = true;
			this->lblNumero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNumero->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->lblNumero->Location = System::Drawing::Point(538, 233);
			this->lblNumero->Name = L"lblNumero";
			this->lblNumero->Size = System::Drawing::Size(0, 29);
			this->lblNumero->TabIndex = 72;
			// 
			// lblDe
			// 
			this->lblDe->AutoSize = true;
			this->lblDe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDe->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->lblDe->Location = System::Drawing::Point(560, 234);
			this->lblDe->Name = L"lblDe";
			this->lblDe->Size = System::Drawing::Size(0, 29);
			this->lblDe->TabIndex = 73;
			// 
			// LBLXX
			// 
			this->LBLXX->AutoSize = true;
			this->LBLXX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LBLXX->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->LBLXX->Location = System::Drawing::Point(612, 235);
			this->LBLXX->Name = L"LBLXX";
			this->LBLXX->Size = System::Drawing::Size(0, 29);
			this->LBLXX->TabIndex = 74;
			// 
			// lblDD
			// 
			this->lblDD->AutoSize = true;
			this->lblDD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDD->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->lblDD->Location = System::Drawing::Point(593, 235);
			this->lblDD->Name = L"lblDD";
			this->lblDD->Size = System::Drawing::Size(0, 29);
			this->lblDD->TabIndex = 75;
			// 
			// lblPote
			// 
			this->lblPote->AutoSize = true;
			this->lblPote->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPote->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->lblPote->Location = System::Drawing::Point(571, 219);
			this->lblPote->Name = L"lblPote";
			this->lblPote->Size = System::Drawing::Size(0, 20);
			this->lblPote->TabIndex = 76;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(471, 233);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 29);
			this->label2->TabIndex = 77;
			this->label2->Text = L"=";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label7->Location = System::Drawing::Point(521, 238);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(23, 29);
			this->label7->TabIndex = 78;
			this->label7->Text = L"*";
			// 
			// lblxxx
			// 
			this->lblxxx->AutoSize = true;
			this->lblxxx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblxxx->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->lblxxx->Location = System::Drawing::Point(932, 164);
			this->lblxxx->Name = L"lblxxx";
			this->lblxxx->Size = System::Drawing::Size(0, 39);
			this->lblxxx->TabIndex = 79;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(322, -24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(40, 624);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 80;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(694, -24);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(40, 624);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 81;
			this->pictureBox2->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Consolas", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::SeaGreen;
			this->label9->Location = System::Drawing::Point(426, 452);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(238, 51);
			this->label9->TabIndex = 82;
			this->label9->Text = L"DERIVADAS";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Consolas", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::SeaGreen;
			this->label11->Location = System::Drawing::Point(782, 452);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(262, 51);
			this->label11->TabIndex = 83;
			this->label11->Text = L"INTEGRALES";
			// 
			// calculadora
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1040, 554);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->lblxxx);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lblPote);
			this->Controls->Add(this->lblDD);
			this->Controls->Add(this->LBLXX);
			this->Controls->Add(this->lblDe);
			this->Controls->Add(this->lblNumero);
			this->Controls->Add(this->LblPotencia);
			this->Controls->Add(this->LBL3D);
			this->Controls->Add(this->LBL2);
			this->Controls->Add(this->LBL1);
			this->Controls->Add(this->txtX);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtD);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lblD);
			this->Controls->Add(this->txtX2);
			this->Controls->Add(this->txtpotencia2);
			this->Controls->Add(this->lblD1);
			this->Controls->Add(this->txtnumero1);
			this->Controls->Add(this->btnlimpiar2);
			this->Controls->Add(this->btncalcular2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtpotencia1);
			this->Controls->Add(this->txtnum1);
			this->Controls->Add(this->txtlimsuper);
			this->Controls->Add(this->txtliminfer);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtDisplay3);
			this->Controls->Add(this->txtDisplay2);
			this->Controls->Add(this->btndivision);
			this->Controls->Add(this->btnDEL);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->btnpunto);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btnigual);
			this->Controls->Add(this->btnsuma);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btnresta);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btnmultiplicacion);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btnpotencia3);
			this->Controls->Add(this->btnpotencia2);
			this->Controls->Add(this->btnporcentaje);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"calculadora";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"calculadora";
			this->Load += gcnew System::EventHandler(this, &calculadora::calculadora_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstDigit, secondDigit, result;
		String^ operators;
		double a;

	//Le da tamaño al Form y permite selección con MenuStrip
	private: System::Void calculadora_Load(System::Object^ sender, System::EventArgs^ e) {
		calculadora::Width = 350;
		calculadora::Height = 550;
		txtDisplay->Width = 320;
		estándarToolStripMenuItem->Visible = false;
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast<Button^>(sender);

	if (txtDisplay->Text=="0")
		{
		txtDisplay->Text = Numbers->Text;
		}
	else
	{
		txtDisplay->Text = txtDisplay->Text + Numbers->Text;
	}
}
private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {

	Button^ NumbersOp = safe_cast<Button^>(sender);
	firstDigit = Double::Parse(txtDisplay->Text);

	txtDisplay->Text = "";
	operators = NumbersOp->Text;

}
private: System::Void btnpunto_Click(System::Object^ sender, System::EventArgs^ e) {

	if (!txtDisplay->Text->Contains("."))
		{
			txtDisplay->Text = txtDisplay->Text + ".";
		}
}
private: System::Void btnigual_Click(System::Object^ sender, System::EventArgs^ e) {

	secondDigit = Double::Parse(txtDisplay->Text);

	if (operators == "+")
		{
			result = firstDigit + secondDigit;
			txtDisplay->Text = System::Convert::ToString(result);
		}
	else if (operators == "-")
		{
		result = firstDigit - secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
		}
	else if (operators == "/")
	{
		result = firstDigit / secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "*")
	{
		result = firstDigit * secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}


}
private: System::Void btnC_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "0";
}
private: System::Void btnDEL_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if(txtDisplay->Text->Length > 0)
		{
		txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
		}
}
private: System::Void btnporcentaje_Click(System::Object^ sender, System::EventArgs^ e) {

	a = Convert::ToDouble(txtDisplay->Text) / Convert::ToDouble(100);
		txtDisplay->Text = Convert::ToString(a);
	
}
private: System::Void btnpotencia2_Click(System::Object^ sender, System::EventArgs^ e) {

	a = Convert::ToDouble(txtDisplay->Text) * Convert::ToDouble(txtDisplay->Text);
		txtDisplay->Text = Convert::ToString(a);
}
private: System::Void btnpotencia3_Click(System::Object^ sender, System::EventArgs^ e) {
	
	a = Convert::ToDouble(txtDisplay->Text) * Convert::ToDouble(txtDisplay->Text) * Convert::ToDouble(txtDisplay->Text);
	txtDisplay->Text = Convert::ToString(a);
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void salirToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit(); //Cierra todas las ventanas del programa
}
private: System::Void estándarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	calculadora::Width = 350;
	calculadora::Height = 550;
	//mostrar(true) ocultar(false) opción en MenuStrip
	estándarToolStripMenuItem->Visible = false;
	derivadasToolStripMenuItem->Visible = true;
	integralesToolStripMenuItem->Visible = true;
}	
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void derivadasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	calculadora::Width = 730;
	txtDisplay2->Width = 320;
	//mostrar(true) ocultar(false) opción en MenuStrip
	estándarToolStripMenuItem->Visible = true;
	derivadasToolStripMenuItem->Visible = false;
	integralesToolStripMenuItem->Visible = true;
	
}
private: System::Void integralesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	calculadora::Width = 1085;
	txtDisplay2->Width = 320;
	//mostrar(true) ocultar(false) opción en MenuStrip
	estándarToolStripMenuItem->Visible = true;
	derivadasToolStripMenuItem->Visible = true;
	integralesToolStripMenuItem->Visible = false;
}
private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e)
{
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {


	double liminfer, limsuper, numero1, potencia1, pot1,liminfer2,limsuper2,limresultado, resultado;

	if ( this->txtnum1->Text == ""||potencia1==-1 || this->txtliminfer->Text == "" || this->txtlimsuper->Text == "" || this->txtpotencia1->Text == "" || this->txtX2->Text == "")
	{
		MessageBox::Show("El campo no puede estar vacio", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else
	{
		liminfer = Convert::ToDouble(this->txtliminfer->Text);
		limsuper = Convert::ToDouble(this->txtlimsuper->Text);
		numero1 = Convert::ToDouble(this->txtnum1->Text);
		potencia1 = Convert::ToDouble(this->txtpotencia1->Text);

		pot1 = potencia1 + 1;
		liminfer2 = pow(liminfer, pot1);
		limsuper2 = pow(limsuper, pot1);
		limresultado = liminfer2 - limsuper2;

		this->lblxxx->Text = this->txtX2->Text;


		this->txtDisplay3->Text = Convert::ToString(limresultado / pot1 * numero1);
	}

	

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->txtDisplay3->Text= "";
	this->txtliminfer->Text= "";
	this->txtlimsuper->Text = "";
	this->txtnum1->Text = "";
	this->txtpotencia1->Text = "";
	this->txtX2->Text = "";
	//this->txt10->Text = "";
}
private: System::Void btncalcular2_Click(System::Object^ sender, System::EventArgs^ e) {
	double numero1, numero2, potencia, potencia2;

	if (this->txtD->Text == "" || this->txtnumero1->Text == "" || this->txtX->Text == "" || this->txtpotencia2->Text == "") 
	{
		MessageBox::Show("El campo no puede estar vacio", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	
	}
	else
	{
		numero1 = Convert::ToDouble(this->txtnumero1->Text);
		potencia = Convert::ToDouble(this->txtpotencia2->Text);

		potencia2 = potencia - 1;
		numero2 = numero1 * potencia;

		this->LBL1->Text = this->lblD1->Text;
		this->LBL2->Text = this->lblD1->Text;

		this->LBL3D->Text = this->txtD->Text;

		this->LblPotencia->Text = this->txtpotencia2->Text;
		this->lblNumero->Text = this->txtnumero1->Text;

		this->lblDe->Text = this->txtX->Text;

		this->lblD->Text = this->txtD->Text;

		this->lblPote->Text = Convert::ToString(potencia + "-1");
		this->lblDD->Text = this->lblD1->Text;
		this->lblDD->Text = this->lblD1->Text;
		this->LBLXX->Text = this->lblD->Text;

		this->txtDisplay2->Text = Convert::ToString("f" + "(" + this->txtD->Text + ")" + " = " + numero2 + this->txtX->Text + "^" + potencia2);
	}
	
}


private: System::Void btnlimpiar2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->txtDisplay2->Text = "";
	this->txtnumero1->Text = "";
	this->txtpotencia2->Text = "";
	this->LBL1->Text = "";
	this->LBL2->Text = "";
	this->LBL3D->Text = "";
	this->lblD->Text = "";
	this->lblD1->Text = "";
	this->lblDD->Text = "";
	this->lblDe->Text = "";
	this->lblNumero->Text = "";
	this->lblPote->Text = "";
	this->LblPotencia->Text = "";
	this->LBLXX->Text = "";
	this->txtD->Text = "";
	//this->txtt1->Text = "";
	//this->txtt2->Text = "";
	//this->txtdv->Text = "";
	this->txtX->Text = "";
}
private: System::Void txtX2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtDisplay2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtpotencia2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
