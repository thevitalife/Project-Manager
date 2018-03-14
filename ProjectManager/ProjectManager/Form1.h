#pragma once
#include "Project.h"
#include <vector>
#include <msclr/marshal_cppstd.h>

namespace CppCLR_WinformsProjekt {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
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

	protected:

	protected:































































































































	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		

		 
		 
		 



		 











		 int editingmode = 1;
private: System::Windows::Forms::MenuStrip^  menuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^  програмаToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  проМенеджераToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  проПрограмуToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  закритиToolStripMenuItem;
private: System::Windows::Forms::TabPage^  tabPageCustomers;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Button^  bCDelete;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Button^  bCCancel;
private: System::Windows::Forms::ListBox^  lbCProjects;
private: System::Windows::Forms::Button^  bCSave;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Button^  bCChange;
private: System::Windows::Forms::TextBox^  tCPhoneNumber;
private: System::Windows::Forms::TextBox^  tCFullName;
private: System::Windows::Forms::TextBox^  tCCompany;
private: System::Windows::Forms::Button^  bCAdd;
private: System::Windows::Forms::Button^  lbCToProjects;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::ListBox^  lbCustomers;
private: System::Windows::Forms::TabPage^  tabPageWorkers;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Button^  bWDelete;
private: System::Windows::Forms::ComboBox^  tWProject;
private: System::Windows::Forms::Button^  bWCancel;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Button^  bWSave;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Button^  bWChange;
private: System::Windows::Forms::TextBox^  tWPhoneNumber;
private: System::Windows::Forms::TextBox^  tWSalary;
private: System::Windows::Forms::TextBox^  tWSurName;
private: System::Windows::Forms::TextBox^  tWPosition;
private: System::Windows::Forms::TextBox^  tWID;
private: System::Windows::Forms::TextBox^  tWName;
private: System::Windows::Forms::Button^  bWAdd;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::ListBox^  lbWorkers;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Button^  bWToProjects;
private: System::Windows::Forms::TabPage^  tabPageProjects;
private: System::Windows::Forms::GroupBox^  gbAuthorization;
private: System::Windows::Forms::Button^  bLogin;
private: System::Windows::Forms::TextBox^  tPassword;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Button^  bPrDelete;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::TextBox^  tPrPrice;
private: System::Windows::Forms::TextBox^  tPrID;
private: System::Windows::Forms::TextBox^  tPrName;
private: System::Windows::Forms::Button^  bToCustomers;
private: System::Windows::Forms::Button^  bPrCancel;
private: System::Windows::Forms::Button^  bPrOffWorker;
private: System::Windows::Forms::Button^  bPrSave;
private: System::Windows::Forms::Button^  bToWorkers;
private: System::Windows::Forms::Button^  bPrChange;
private: System::Windows::Forms::ListBox^  lbPrWorkers;
private: System::Windows::Forms::Button^  bPrAdd;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::ComboBox^  tPrCustomer;
private: System::Windows::Forms::ListBox^  lbProjects;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::TabControl^  tabControl;
private: System::Windows::Forms::ToolStripMenuItem^  телефоннаКнигаToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  працівниківToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  замовниківToolStripMenuItem;
		 int mode = 1;
		void PrSetMode(int mode);
		void CSetMode(int mode);
		void WSetMode(int mode);

		void LoadCustomers();
		void ShowCustomer(int id);
		void UpdateCustomer(int id);
		void AddCustomer();
		void DeleteCustomer(int id);
		void FromCustomerToProjects();

		void LoadProjects();
		void ShowProject(int id);
		void UpdateProject(int id);
		void AddProject();
		void DeleteProject(int id);
		void FromProjectToWorkers();
		void LoadFreeWorkers();

		void LoadWorkers();
		void ShowWorker(int id);
		void ShowWorker(Worker * worker);
		void UpdateWorker(int id);
		void AddWorker();
		void DeleteWorker(int id);
		void FreeWorkers();
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->програмаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проМенеджераToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проПрограмуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->закритиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->телефоннаКнигаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->працівниківToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->замовниківToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabPageCustomers = (gcnew System::Windows::Forms::TabPage());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->bCDelete = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->bCCancel = (gcnew System::Windows::Forms::Button());
			this->lbCProjects = (gcnew System::Windows::Forms::ListBox());
			this->bCSave = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->bCChange = (gcnew System::Windows::Forms::Button());
			this->tCPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->tCFullName = (gcnew System::Windows::Forms::TextBox());
			this->tCCompany = (gcnew System::Windows::Forms::TextBox());
			this->bCAdd = (gcnew System::Windows::Forms::Button());
			this->lbCToProjects = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->lbCustomers = (gcnew System::Windows::Forms::ListBox());
			this->tabPageWorkers = (gcnew System::Windows::Forms::TabPage());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->bWDelete = (gcnew System::Windows::Forms::Button());
			this->tWProject = (gcnew System::Windows::Forms::ComboBox());
			this->bWCancel = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->bWSave = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->bWChange = (gcnew System::Windows::Forms::Button());
			this->tWPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->tWSalary = (gcnew System::Windows::Forms::TextBox());
			this->tWSurName = (gcnew System::Windows::Forms::TextBox());
			this->tWPosition = (gcnew System::Windows::Forms::TextBox());
			this->tWID = (gcnew System::Windows::Forms::TextBox());
			this->tWName = (gcnew System::Windows::Forms::TextBox());
			this->bWAdd = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lbWorkers = (gcnew System::Windows::Forms::ListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->bWToProjects = (gcnew System::Windows::Forms::Button());
			this->tabPageProjects = (gcnew System::Windows::Forms::TabPage());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->bPrDelete = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tPrPrice = (gcnew System::Windows::Forms::TextBox());
			this->tPrID = (gcnew System::Windows::Forms::TextBox());
			this->tPrName = (gcnew System::Windows::Forms::TextBox());
			this->bToCustomers = (gcnew System::Windows::Forms::Button());
			this->bPrCancel = (gcnew System::Windows::Forms::Button());
			this->bPrOffWorker = (gcnew System::Windows::Forms::Button());
			this->bPrSave = (gcnew System::Windows::Forms::Button());
			this->bToWorkers = (gcnew System::Windows::Forms::Button());
			this->bPrChange = (gcnew System::Windows::Forms::Button());
			this->lbPrWorkers = (gcnew System::Windows::Forms::ListBox());
			this->bPrAdd = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tPrCustomer = (gcnew System::Windows::Forms::ComboBox());
			this->lbProjects = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->gbAuthorization = (gcnew System::Windows::Forms::GroupBox());
			this->bLogin = (gcnew System::Windows::Forms::Button());
			this->tPassword = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->tabControl = (gcnew System::Windows::Forms::TabControl());
			this->menuStrip1->SuspendLayout();
			this->tabPageCustomers->SuspendLayout();
			this->tabPageWorkers->SuspendLayout();
			this->tabPageProjects->SuspendLayout();
			this->gbAuthorization->SuspendLayout();
			this->tabControl->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->програмаToolStripMenuItem,
					this->телефоннаКнигаToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(866, 28);
			this->menuStrip1->TabIndex = 28;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->Visible = false;
			// 
			// програмаToolStripMenuItem
			// 
			this->програмаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->проМенеджераToolStripMenuItem,
					this->проПрограмуToolStripMenuItem, this->закритиToolStripMenuItem
			});
			this->програмаToolStripMenuItem->Name = L"програмаToolStripMenuItem";
			this->програмаToolStripMenuItem->Size = System::Drawing::Size(102, 24);
			this->програмаToolStripMenuItem->Text = L"Інформація";
			// 
			// проМенеджераToolStripMenuItem
			// 
			this->проМенеджераToolStripMenuItem->Name = L"проМенеджераToolStripMenuItem";
			this->проМенеджераToolStripMenuItem->Size = System::Drawing::Size(197, 26);
			this->проМенеджераToolStripMenuItem->Text = L"Про менеджера";
			this->проМенеджераToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::проМенеджераToolStripMenuItem_Click);
			// 
			// проПрограмуToolStripMenuItem
			// 
			this->проПрограмуToolStripMenuItem->Name = L"проПрограмуToolStripMenuItem";
			this->проПрограмуToolStripMenuItem->Size = System::Drawing::Size(197, 26);
			this->проПрограмуToolStripMenuItem->Text = L"Про програму";
			this->проПрограмуToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::проПрограмуToolStripMenuItem_Click);
			// 
			// закритиToolStripMenuItem
			// 
			this->закритиToolStripMenuItem->Name = L"закритиToolStripMenuItem";
			this->закритиToolStripMenuItem->Size = System::Drawing::Size(197, 26);
			this->закритиToolStripMenuItem->Text = L"Закрити";
			this->закритиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::закритиToolStripMenuItem_Click);
			// 
			// телефоннаКнигаToolStripMenuItem
			// 
			this->телефоннаКнигаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->працівниківToolStripMenuItem,
					this->замовниківToolStripMenuItem
			});
			this->телефоннаКнигаToolStripMenuItem->Name = L"телефоннаКнигаToolStripMenuItem";
			this->телефоннаКнигаToolStripMenuItem->Size = System::Drawing::Size(141, 24);
			this->телефоннаКнигаToolStripMenuItem->Text = L"Телефонна книга";
			// 
			// працівниківToolStripMenuItem
			// 
			this->працівниківToolStripMenuItem->Name = L"працівниківToolStripMenuItem";
			this->працівниківToolStripMenuItem->Size = System::Drawing::Size(170, 26);
			this->працівниківToolStripMenuItem->Text = L"Працівників";
			this->працівниківToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::працівниківToolStripMenuItem_Click);
			// 
			// замовниківToolStripMenuItem
			// 
			this->замовниківToolStripMenuItem->Name = L"замовниківToolStripMenuItem";
			this->замовниківToolStripMenuItem->Size = System::Drawing::Size(170, 26);
			this->замовниківToolStripMenuItem->Text = L"Замовників";
			this->замовниківToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::замовниківToolStripMenuItem_Click);
			// 
			// tabPageCustomers
			// 
			this->tabPageCustomers->BackColor = System::Drawing::SystemColors::Control;
			this->tabPageCustomers->Controls->Add(this->label16);
			this->tabPageCustomers->Controls->Add(this->bCDelete);
			this->tabPageCustomers->Controls->Add(this->label9);
			this->tabPageCustomers->Controls->Add(this->bCCancel);
			this->tabPageCustomers->Controls->Add(this->lbCProjects);
			this->tabPageCustomers->Controls->Add(this->bCSave);
			this->tabPageCustomers->Controls->Add(this->label10);
			this->tabPageCustomers->Controls->Add(this->bCChange);
			this->tabPageCustomers->Controls->Add(this->tCPhoneNumber);
			this->tabPageCustomers->Controls->Add(this->tCFullName);
			this->tabPageCustomers->Controls->Add(this->tCCompany);
			this->tabPageCustomers->Controls->Add(this->bCAdd);
			this->tabPageCustomers->Controls->Add(this->lbCToProjects);
			this->tabPageCustomers->Controls->Add(this->label14);
			this->tabPageCustomers->Controls->Add(this->lbCustomers);
			this->tabPageCustomers->Location = System::Drawing::Point(4, 25);
			this->tabPageCustomers->Name = L"tabPageCustomers";
			this->tabPageCustomers->Size = System::Drawing::Size(858, 507);
			this->tabPageCustomers->TabIndex = 2;
			this->tabPageCustomers->Text = L"Замовники";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(469, 16);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(73, 17);
			this->label16->TabIndex = 26;
			this->label16->Text = L"Повне імя";
			// 
			// bCDelete
			// 
			this->bCDelete->Enabled = false;
			this->bCDelete->Location = System::Drawing::Point(316, 106);
			this->bCDelete->Name = L"bCDelete";
			this->bCDelete->Size = System::Drawing::Size(147, 44);
			this->bCDelete->TabIndex = 25;
			this->bCDelete->Tag = L"1";
			this->bCDelete->Text = L"Видалити";
			this->bCDelete->UseVisualStyleBackColor = true;
			this->bCDelete->Click += gcnew System::EventHandler(this, &Form1::bCDelete_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(469, 150);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(151, 17);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Знайдено замовлень:";
			// 
			// bCCancel
			// 
			this->bCCancel->Enabled = false;
			this->bCCancel->Location = System::Drawing::Point(316, 206);
			this->bCCancel->Name = L"bCCancel";
			this->bCCancel->Size = System::Drawing::Size(147, 44);
			this->bCCancel->TabIndex = 24;
			this->bCCancel->Tag = L"2";
			this->bCCancel->Text = L"Відмінити";
			this->bCCancel->UseVisualStyleBackColor = true;
			this->bCCancel->Click += gcnew System::EventHandler(this, &Form1::bCCancel_Click);
			// 
			// lbCProjects
			// 
			this->lbCProjects->FormattingEnabled = true;
			this->lbCProjects->HorizontalScrollbar = true;
			this->lbCProjects->ItemHeight = 16;
			this->lbCProjects->Location = System::Drawing::Point(472, 181);
			this->lbCProjects->Name = L"lbCProjects";
			this->lbCProjects->Size = System::Drawing::Size(343, 228);
			this->lbCProjects->TabIndex = 18;
			this->lbCProjects->Tag = L"1";
			// 
			// bCSave
			// 
			this->bCSave->Enabled = false;
			this->bCSave->Location = System::Drawing::Point(316, 156);
			this->bCSave->Name = L"bCSave";
			this->bCSave->Size = System::Drawing::Size(147, 44);
			this->bCSave->TabIndex = 23;
			this->bCSave->Tag = L"2";
			this->bCSave->Text = L"Зберегти";
			this->bCSave->UseVisualStyleBackColor = true;
			this->bCSave->Click += gcnew System::EventHandler(this, &Form1::bCSave_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(469, 95);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(137, 17);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Телефонний номер";
			// 
			// bCChange
			// 
			this->bCChange->Location = System::Drawing::Point(316, 56);
			this->bCChange->Name = L"bCChange";
			this->bCChange->Size = System::Drawing::Size(147, 44);
			this->bCChange->TabIndex = 22;
			this->bCChange->Tag = L"1";
			this->bCChange->Text = L"Змінити";
			this->bCChange->UseVisualStyleBackColor = true;
			this->bCChange->Click += gcnew System::EventHandler(this, &Form1::bCChange_Click);
			// 
			// tCPhoneNumber
			// 
			this->tCPhoneNumber->Location = System::Drawing::Point(610, 92);
			this->tCPhoneNumber->Name = L"tCPhoneNumber";
			this->tCPhoneNumber->Size = System::Drawing::Size(205, 22);
			this->tCPhoneNumber->TabIndex = 3;
			this->tCPhoneNumber->Tag = L"2";
			// 
			// tCFullName
			// 
			this->tCFullName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tCFullName->Location = System::Drawing::Point(557, 6);
			this->tCFullName->Name = L"tCFullName";
			this->tCFullName->Size = System::Drawing::Size(258, 30);
			this->tCFullName->TabIndex = 1;
			this->tCFullName->Tag = L"2";
			this->tCFullName->Text = L"Project";
			// 
			// tCCompany
			// 
			this->tCCompany->Location = System::Drawing::Point(610, 45);
			this->tCCompany->Name = L"tCCompany";
			this->tCCompany->Size = System::Drawing::Size(205, 22);
			this->tCCompany->TabIndex = 2;
			this->tCCompany->Tag = L"2";
			// 
			// bCAdd
			// 
			this->bCAdd->Location = System::Drawing::Point(316, 6);
			this->bCAdd->Name = L"bCAdd";
			this->bCAdd->Size = System::Drawing::Size(147, 44);
			this->bCAdd->TabIndex = 21;
			this->bCAdd->Tag = L"1";
			this->bCAdd->Text = L"Додати";
			this->bCAdd->UseVisualStyleBackColor = false;
			this->bCAdd->Click += gcnew System::EventHandler(this, &Form1::bCAdd_Click);
			// 
			// lbCToProjects
			// 
			this->lbCToProjects->Location = System::Drawing::Point(610, 428);
			this->lbCToProjects->Name = L"lbCToProjects";
			this->lbCToProjects->Size = System::Drawing::Size(205, 45);
			this->lbCToProjects->TabIndex = 9;
			this->lbCToProjects->Tag = L"1";
			this->lbCToProjects->Text = L"До \"Проектів\"";
			this->lbCToProjects->UseVisualStyleBackColor = true;
			this->lbCToProjects->Click += gcnew System::EventHandler(this, &Form1::lbCToProjects_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(469, 48);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(69, 17);
			this->label14->TabIndex = 5;
			this->label14->Text = L"Компанія";
			// 
			// lbCustomers
			// 
			this->lbCustomers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbCustomers->FormattingEnabled = true;
			this->lbCustomers->HorizontalScrollbar = true;
			this->lbCustomers->ItemHeight = 20;
			this->lbCustomers->Location = System::Drawing::Point(3, 6);
			this->lbCustomers->Name = L"lbCustomers";
			this->lbCustomers->Size = System::Drawing::Size(307, 464);
			this->lbCustomers->TabIndex = 19;
			this->lbCustomers->Tag = L"1";
			this->lbCustomers->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::lbCustomers_SelectedIndexChanged);
			// 
			// tabPageWorkers
			// 
			this->tabPageWorkers->BackColor = System::Drawing::Color::Transparent;
			this->tabPageWorkers->Controls->Add(this->label15);
			this->tabPageWorkers->Controls->Add(this->bWDelete);
			this->tabPageWorkers->Controls->Add(this->tWProject);
			this->tabPageWorkers->Controls->Add(this->bWCancel);
			this->tabPageWorkers->Controls->Add(this->label8);
			this->tabPageWorkers->Controls->Add(this->bWSave);
			this->tabPageWorkers->Controls->Add(this->label7);
			this->tabPageWorkers->Controls->Add(this->bWChange);
			this->tabPageWorkers->Controls->Add(this->tWPhoneNumber);
			this->tabPageWorkers->Controls->Add(this->tWSalary);
			this->tabPageWorkers->Controls->Add(this->tWSurName);
			this->tabPageWorkers->Controls->Add(this->tWPosition);
			this->tabPageWorkers->Controls->Add(this->tWID);
			this->tabPageWorkers->Controls->Add(this->tWName);
			this->tabPageWorkers->Controls->Add(this->bWAdd);
			this->tabPageWorkers->Controls->Add(this->label5);
			this->tabPageWorkers->Controls->Add(this->lbWorkers);
			this->tabPageWorkers->Controls->Add(this->label4);
			this->tabPageWorkers->Controls->Add(this->label1);
			this->tabPageWorkers->Controls->Add(this->label3);
			this->tabPageWorkers->Controls->Add(this->bWToProjects);
			this->tabPageWorkers->Location = System::Drawing::Point(4, 25);
			this->tabPageWorkers->Name = L"tabPageWorkers";
			this->tabPageWorkers->Padding = System::Windows::Forms::Padding(3);
			this->tabPageWorkers->Size = System::Drawing::Size(858, 507);
			this->tabPageWorkers->TabIndex = 1;
			this->tabPageWorkers->Text = L"Працівники";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(471, 15);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(21, 17);
			this->label15->TabIndex = 23;
			this->label15->Text = L"ID";
			// 
			// bWDelete
			// 
			this->bWDelete->Location = System::Drawing::Point(318, 106);
			this->bWDelete->Name = L"bWDelete";
			this->bWDelete->Size = System::Drawing::Size(147, 44);
			this->bWDelete->TabIndex = 21;
			this->bWDelete->Tag = L"1";
			this->bWDelete->Text = L"Видалити";
			this->bWDelete->UseVisualStyleBackColor = true;
			this->bWDelete->Click += gcnew System::EventHandler(this, &Form1::bWDelete_Click);
			// 
			// tWProject
			// 
			this->tWProject->FormattingEnabled = true;
			this->tWProject->Location = System::Drawing::Point(612, 254);
			this->tWProject->Name = L"tWProject";
			this->tWProject->Size = System::Drawing::Size(205, 24);
			this->tWProject->TabIndex = 7;
			this->tWProject->Tag = L"2";
			// 
			// bWCancel
			// 
			this->bWCancel->Enabled = false;
			this->bWCancel->Location = System::Drawing::Point(318, 206);
			this->bWCancel->Name = L"bWCancel";
			this->bWCancel->Size = System::Drawing::Size(147, 44);
			this->bWCancel->TabIndex = 18;
			this->bWCancel->Tag = L"2";
			this->bWCancel->Text = L"Відмінити";
			this->bWCancel->UseVisualStyleBackColor = true;
			this->bWCancel->Click += gcnew System::EventHandler(this, &Form1::bWCancel_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(471, 254);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 17);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Проект";
			// 
			// bWSave
			// 
			this->bWSave->Enabled = false;
			this->bWSave->Location = System::Drawing::Point(318, 156);
			this->bWSave->Name = L"bWSave";
			this->bWSave->Size = System::Drawing::Size(147, 44);
			this->bWSave->TabIndex = 17;
			this->bWSave->Tag = L"2";
			this->bWSave->Text = L"Зберегти";
			this->bWSave->UseVisualStyleBackColor = true;
			this->bWSave->Click += gcnew System::EventHandler(this, &Form1::bWSave_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(471, 213);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(137, 17);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Телефонний номер";
			// 
			// bWChange
			// 
			this->bWChange->Location = System::Drawing::Point(318, 56);
			this->bWChange->Name = L"bWChange";
			this->bWChange->Size = System::Drawing::Size(147, 44);
			this->bWChange->TabIndex = 16;
			this->bWChange->Tag = L"1";
			this->bWChange->Text = L"Змінити";
			this->bWChange->UseVisualStyleBackColor = true;
			this->bWChange->Click += gcnew System::EventHandler(this, &Form1::bWChange_Click);
			// 
			// tWPhoneNumber
			// 
			this->tWPhoneNumber->Location = System::Drawing::Point(612, 210);
			this->tWPhoneNumber->Name = L"tWPhoneNumber";
			this->tWPhoneNumber->Size = System::Drawing::Size(205, 22);
			this->tWPhoneNumber->TabIndex = 6;
			this->tWPhoneNumber->Tag = L"2";
			// 
			// tWSalary
			// 
			this->tWSalary->Location = System::Drawing::Point(612, 167);
			this->tWSalary->Name = L"tWSalary";
			this->tWSalary->Size = System::Drawing::Size(205, 22);
			this->tWSalary->TabIndex = 5;
			this->tWSalary->Tag = L"2";
			// 
			// tWSurName
			// 
			this->tWSurName->Location = System::Drawing::Point(612, 84);
			this->tWSurName->Name = L"tWSurName";
			this->tWSurName->Size = System::Drawing::Size(205, 22);
			this->tWSurName->TabIndex = 3;
			this->tWSurName->Tag = L"2";
			// 
			// tWPosition
			// 
			this->tWPosition->Location = System::Drawing::Point(612, 128);
			this->tWPosition->Name = L"tWPosition";
			this->tWPosition->Size = System::Drawing::Size(205, 22);
			this->tWPosition->TabIndex = 4;
			this->tWPosition->Tag = L"2";
			// 
			// tWID
			// 
			this->tWID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tWID->Location = System::Drawing::Point(612, 5);
			this->tWID->Name = L"tWID";
			this->tWID->Size = System::Drawing::Size(117, 30);
			this->tWID->TabIndex = 1;
			this->tWID->Tag = L"2";
			this->tWID->Text = L"Project";
			// 
			// tWName
			// 
			this->tWName->Location = System::Drawing::Point(612, 41);
			this->tWName->Name = L"tWName";
			this->tWName->Size = System::Drawing::Size(205, 22);
			this->tWName->TabIndex = 2;
			this->tWName->Tag = L"2";
			// 
			// bWAdd
			// 
			this->bWAdd->Location = System::Drawing::Point(318, 6);
			this->bWAdd->Name = L"bWAdd";
			this->bWAdd->Size = System::Drawing::Size(147, 44);
			this->bWAdd->TabIndex = 15;
			this->bWAdd->Tag = L"1";
			this->bWAdd->Text = L"Додати";
			this->bWAdd->UseVisualStyleBackColor = true;
			this->bWAdd->Click += gcnew System::EventHandler(this, &Form1::bWAdd_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(471, 170);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 17);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Зарплата";
			// 
			// lbWorkers
			// 
			this->lbWorkers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbWorkers->FormattingEnabled = true;
			this->lbWorkers->HorizontalScrollbar = true;
			this->lbWorkers->ItemHeight = 20;
			this->lbWorkers->Location = System::Drawing::Point(5, 6);
			this->lbWorkers->Name = L"lbWorkers";
			this->lbWorkers->Size = System::Drawing::Size(307, 464);
			this->lbWorkers->TabIndex = 13;
			this->lbWorkers->Tag = L"1";
			this->lbWorkers->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::lbWorkers_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(471, 131);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 17);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Посада";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(471, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(28, 17);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Імя";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(471, 87);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Прізвище";
			// 
			// bWToProjects
			// 
			this->bWToProjects->Location = System::Drawing::Point(612, 299);
			this->bWToProjects->Name = L"bWToProjects";
			this->bWToProjects->Size = System::Drawing::Size(205, 45);
			this->bWToProjects->TabIndex = 9;
			this->bWToProjects->Tag = L"1";
			this->bWToProjects->Text = L"До \"Проектів\"";
			this->bWToProjects->UseVisualStyleBackColor = true;
			this->bWToProjects->Click += gcnew System::EventHandler(this, &Form1::bWToProjects_Click);
			// 
			// tabPageProjects
			// 
			this->tabPageProjects->BackColor = System::Drawing::Color::Transparent;
			this->tabPageProjects->Controls->Add(this->label12);
			this->tabPageProjects->Controls->Add(this->bPrDelete);
			this->tabPageProjects->Controls->Add(this->label11);
			this->tabPageProjects->Controls->Add(this->tPrPrice);
			this->tabPageProjects->Controls->Add(this->tPrID);
			this->tabPageProjects->Controls->Add(this->tPrName);
			this->tabPageProjects->Controls->Add(this->bToCustomers);
			this->tabPageProjects->Controls->Add(this->bPrCancel);
			this->tabPageProjects->Controls->Add(this->bPrOffWorker);
			this->tabPageProjects->Controls->Add(this->bPrSave);
			this->tabPageProjects->Controls->Add(this->bToWorkers);
			this->tabPageProjects->Controls->Add(this->bPrChange);
			this->tabPageProjects->Controls->Add(this->lbPrWorkers);
			this->tabPageProjects->Controls->Add(this->bPrAdd);
			this->tabPageProjects->Controls->Add(this->label2);
			this->tabPageProjects->Controls->Add(this->tPrCustomer);
			this->tabPageProjects->Controls->Add(this->lbProjects);
			this->tabPageProjects->Controls->Add(this->label6);
			this->tabPageProjects->Location = System::Drawing::Point(4, 25);
			this->tabPageProjects->Name = L"tabPageProjects";
			this->tabPageProjects->Padding = System::Windows::Forms::Padding(3);
			this->tabPageProjects->Size = System::Drawing::Size(858, 507);
			this->tabPageProjects->TabIndex = 0;
			this->tabPageProjects->Text = L"Проекти";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(362, 16);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(21, 17);
			this->label12->TabIndex = 16;
			this->label12->Text = L"ID";
			// 
			// bPrDelete
			// 
			this->bPrDelete->Location = System::Drawing::Point(209, 106);
			this->bPrDelete->Name = L"bPrDelete";
			this->bPrDelete->Size = System::Drawing::Size(147, 44);
			this->bPrDelete->TabIndex = 15;
			this->bPrDelete->Tag = L"1";
			this->bPrDelete->Text = L"Видалити";
			this->bPrDelete->UseVisualStyleBackColor = true;
			this->bPrDelete->Click += gcnew System::EventHandler(this, &Form1::bPrDelete_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(362, 109);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(64, 17);
			this->label11->TabIndex = 14;
			this->label11->Text = L"Вартість";
			// 
			// tPrPrice
			// 
			this->tPrPrice->Location = System::Drawing::Point(440, 106);
			this->tPrPrice->Name = L"tPrPrice";
			this->tPrPrice->Size = System::Drawing::Size(174, 22);
			this->tPrPrice->TabIndex = 4;
			this->tPrPrice->Tag = L"2";
			// 
			// tPrID
			// 
			this->tPrID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tPrID->Location = System::Drawing::Point(440, 6);
			this->tPrID->Name = L"tPrID";
			this->tPrID->Size = System::Drawing::Size(138, 30);
			this->tPrID->TabIndex = 1;
			this->tPrID->Tag = L"2";
			this->tPrID->Text = L"Project";
			// 
			// tPrName
			// 
			this->tPrName->Location = System::Drawing::Point(440, 75);
			this->tPrName->Name = L"tPrName";
			this->tPrName->Size = System::Drawing::Size(174, 22);
			this->tPrName->TabIndex = 3;
			this->tPrName->Tag = L"2";
			// 
			// bToCustomers
			// 
			this->bToCustomers->Location = System::Drawing::Point(650, 75);
			this->bToCustomers->Name = L"bToCustomers";
			this->bToCustomers->Size = System::Drawing::Size(165, 44);
			this->bToCustomers->TabIndex = 8;
			this->bToCustomers->Tag = L"1";
			this->bToCustomers->Text = L"До \"Замовників\"";
			this->bToCustomers->UseVisualStyleBackColor = true;
			this->bToCustomers->Click += gcnew System::EventHandler(this, &Form1::bToCustomers_Click);
			// 
			// bPrCancel
			// 
			this->bPrCancel->Enabled = false;
			this->bPrCancel->Location = System::Drawing::Point(209, 206);
			this->bPrCancel->Name = L"bPrCancel";
			this->bPrCancel->Size = System::Drawing::Size(147, 44);
			this->bPrCancel->TabIndex = 12;
			this->bPrCancel->Tag = L"2";
			this->bPrCancel->Text = L"Відмінити";
			this->bPrCancel->UseVisualStyleBackColor = true;
			this->bPrCancel->Click += gcnew System::EventHandler(this, &Form1::bPrCancel_Click);
			// 
			// bPrOffWorker
			// 
			this->bPrOffWorker->Location = System::Drawing::Point(652, 429);
			this->bPrOffWorker->Name = L"bPrOffWorker";
			this->bPrOffWorker->Size = System::Drawing::Size(165, 44);
			this->bPrOffWorker->TabIndex = 7;
			this->bPrOffWorker->Tag = L"2";
			this->bPrOffWorker->Text = L"Виключити працівника";
			this->bPrOffWorker->UseVisualStyleBackColor = true;
			this->bPrOffWorker->Click += gcnew System::EventHandler(this, &Form1::bPrOffWorker_Click);
			// 
			// bPrSave
			// 
			this->bPrSave->Enabled = false;
			this->bPrSave->Location = System::Drawing::Point(209, 156);
			this->bPrSave->Name = L"bPrSave";
			this->bPrSave->Size = System::Drawing::Size(147, 44);
			this->bPrSave->TabIndex = 11;
			this->bPrSave->Tag = L"2";
			this->bPrSave->Text = L"Зберегти";
			this->bPrSave->UseVisualStyleBackColor = true;
			this->bPrSave->Click += gcnew System::EventHandler(this, &Form1::bPrSave_Click);
			// 
			// bToWorkers
			// 
			this->bToWorkers->Location = System::Drawing::Point(362, 432);
			this->bToWorkers->Name = L"bToWorkers";
			this->bToWorkers->Size = System::Drawing::Size(165, 44);
			this->bToWorkers->TabIndex = 6;
			this->bToWorkers->Tag = L"1";
			this->bToWorkers->Text = L"До \"Працівників\"";
			this->bToWorkers->UseVisualStyleBackColor = true;
			this->bToWorkers->Click += gcnew System::EventHandler(this, &Form1::bToWorkers_Click);
			// 
			// bPrChange
			// 
			this->bPrChange->Location = System::Drawing::Point(209, 56);
			this->bPrChange->Name = L"bPrChange";
			this->bPrChange->Size = System::Drawing::Size(147, 44);
			this->bPrChange->TabIndex = 10;
			this->bPrChange->Tag = L"1";
			this->bPrChange->Text = L"Змінити";
			this->bPrChange->UseVisualStyleBackColor = true;
			this->bPrChange->Click += gcnew System::EventHandler(this, &Form1::bPrChange_Click);
			// 
			// lbPrWorkers
			// 
			this->lbPrWorkers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbPrWorkers->FormattingEnabled = true;
			this->lbPrWorkers->HorizontalScrollbar = true;
			this->lbPrWorkers->ItemHeight = 20;
			this->lbPrWorkers->Location = System::Drawing::Point(362, 151);
			this->lbPrWorkers->Name = L"lbPrWorkers";
			this->lbPrWorkers->SelectionMode = System::Windows::Forms::SelectionMode::MultiExtended;
			this->lbPrWorkers->Size = System::Drawing::Size(453, 264);
			this->lbPrWorkers->TabIndex = 3;
			// 
			// bPrAdd
			// 
			this->bPrAdd->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bPrAdd->Location = System::Drawing::Point(209, 6);
			this->bPrAdd->Name = L"bPrAdd";
			this->bPrAdd->Size = System::Drawing::Size(147, 44);
			this->bPrAdd->TabIndex = 9;
			this->bPrAdd->Tag = L"1";
			this->bPrAdd->Text = L"Додати";
			this->bPrAdd->UseVisualStyleBackColor = true;
			this->bPrAdd->Click += gcnew System::EventHandler(this, &Form1::bPrAdd_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(362, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Замовник";
			// 
			// tPrCustomer
			// 
			this->tPrCustomer->FormattingEnabled = true;
			this->tPrCustomer->Location = System::Drawing::Point(440, 45);
			this->tPrCustomer->Name = L"tPrCustomer";
			this->tPrCustomer->Size = System::Drawing::Size(375, 24);
			this->tPrCustomer->TabIndex = 2;
			this->tPrCustomer->Tag = L"2";
			// 
			// lbProjects
			// 
			this->lbProjects->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbProjects->FormattingEnabled = true;
			this->lbProjects->HorizontalScrollbar = true;
			this->lbProjects->ItemHeight = 20;
			this->lbProjects->Location = System::Drawing::Point(6, 6);
			this->lbProjects->Name = L"lbProjects";
			this->lbProjects->Size = System::Drawing::Size(197, 464);
			this->lbProjects->TabIndex = 0;
			this->lbProjects->Tag = L"1";
			this->lbProjects->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::lbProjects_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(362, 78);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 17);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Назва";
			// 
			// gbAuthorization
			// 
			this->gbAuthorization->Controls->Add(this->bLogin);
			this->gbAuthorization->Controls->Add(this->tPassword);
			this->gbAuthorization->Controls->Add(this->label17);
			this->gbAuthorization->Dock = System::Windows::Forms::DockStyle::Fill;
			this->gbAuthorization->Location = System::Drawing::Point(0, 0);
			this->gbAuthorization->Name = L"gbAuthorization";
			this->gbAuthorization->Size = System::Drawing::Size(866, 536);
			this->gbAuthorization->TabIndex = 27;
			this->gbAuthorization->TabStop = false;
			this->gbAuthorization->Text = L"Авторизація";
			// 
			// bLogin
			// 
			this->bLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bLogin->Location = System::Drawing::Point(272, 281);
			this->bLogin->Name = L"bLogin";
			this->bLogin->Size = System::Drawing::Size(286, 51);
			this->bLogin->TabIndex = 2;
			this->bLogin->Text = L"Ввійти";
			this->bLogin->UseVisualStyleBackColor = true;
			this->bLogin->Click += gcnew System::EventHandler(this, &Form1::bLogin_Click);
			// 
			// tPassword
			// 
			this->tPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tPassword->Location = System::Drawing::Point(222, 174);
			this->tPassword->Name = L"tPassword";
			this->tPassword->PasswordChar = '*';
			this->tPassword->Size = System::Drawing::Size(396, 45);
			this->tPassword->TabIndex = 1;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(264, 93);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(290, 44);
			this->label17->TabIndex = 0;
			this->label17->Text = L"Введіть пароль";
			// 
			// tabControl
			// 
			this->tabControl->Controls->Add(this->tabPageProjects);
			this->tabControl->Controls->Add(this->tabPageWorkers);
			this->tabControl->Controls->Add(this->tabPageCustomers);
			this->tabControl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl->Location = System::Drawing::Point(0, 0);
			this->tabControl->Multiline = true;
			this->tabControl->Name = L"tabControl";
			this->tabControl->SelectedIndex = 0;
			this->tabControl->Size = System::Drawing::Size(866, 536);
			this->tabControl->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tabControl->TabIndex = 0;
			this->tabControl->Selecting += gcnew System::Windows::Forms::TabControlCancelEventHandler(this, &Form1::tabControl_Selecting);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(866, 536);
			this->Controls->Add(this->gbAuthorization);
			this->Controls->Add(this->tabControl);
			this->Controls->Add(this->menuStrip1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Система менеджменту проектів";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabPageCustomers->ResumeLayout(false);
			this->tabPageCustomers->PerformLayout();
			this->tabPageWorkers->ResumeLayout(false);
			this->tabPageWorkers->PerformLayout();
			this->tabPageProjects->ResumeLayout(false);
			this->tabPageProjects->PerformLayout();
			this->gbAuthorization->ResumeLayout(false);
			this->gbAuthorization->PerformLayout();
			this->tabControl->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

#define WATCHING_MODE 1
#define EDITING_MODE 2
#define CHANGE_EDITING_MODE 2
#define ADD_EDITING_MODE 1

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void bPrAdd_Click(System::Object^  sender, System::EventArgs^  e) {
	PrSetMode(2);
	editingmode = ADD_EDITING_MODE;
	tPrID->Text = "ІД проекту";
	tPrID->Focus();
	tPrCustomer->SelectedIndex = 0;
	tPrName->Text = "";
	tPrPrice->Text = "0";
	lbPrWorkers->Items->Clear();
	LoadFreeWorkers();
}
private: System::Void bPrSave_Click(System::Object^  sender, System::EventArgs^  e) {
	if (editingmode == CHANGE_EDITING_MODE)
	{
		if (MessageBox::Show("Ви впевнені, що хочете змінити інформацію про даний проект?", "Підтвердження", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
		{
			UpdateProject(lbProjects->SelectedIndex);
			PrSetMode(1);
		}

	}
	else
		if (MessageBox::Show("Ви впевнені, що хочете додати інформацію про даний проект?", "Підтвердження", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
		{
			AddProject();
			PrSetMode(1);
		}
}
private: System::Void bWAdd_Click(System::Object^  sender, System::EventArgs^  e) {
	WSetMode(2);
	editingmode = ADD_EDITING_MODE;
	tWID->Text = "ID";
	tWName->Text = "";
	tWProject->SelectedIndex=0;
	tWSurName->Text = "";
	tWSalary->Text = "0";
	tWPhoneNumber->Text = "";
}
private: System::Void bWSave_Click(System::Object^  sender, System::EventArgs^  e) {
	if (editingmode == CHANGE_EDITING_MODE)
	{
		if (MessageBox::Show("Ви впевнені, що хочете змінити інформацію про даного працівника?", "Підтвердження", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
		{
			UpdateWorker(lbWorkers->SelectedIndex);
			WSetMode(1);
		}

	}
	else
		if (MessageBox::Show("Ви впевнені, що хочете додати інформацію про даного працівника?", "Підтвердження", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
		{
			AddWorker();
			WSetMode(1);
		}
}
private: System::Void bCAdd_Click(System::Object^  sender, System::EventArgs^  e) {
	CSetMode(2);
	editingmode = ADD_EDITING_MODE;
	tCFullName->Text = "Імя замовника";
	tCFullName->Focus();
	tCPhoneNumber->Text = "";
	tCCompany->Text = "";
}
private: System::Void bCSave_Click(System::Object^  sender, System::EventArgs^  e) {
	
	if (editingmode == CHANGE_EDITING_MODE)
	{
		if (MessageBox::Show("Ви впевнені, що хочете змінити інформацію про даного замовника?", "Підтвердження", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
		{
			UpdateCustomer(lbCustomers->SelectedIndex);
			CSetMode(1);
		}

	}
	else
		if (MessageBox::Show("Ви впевнені, що хочете додати інформацію про даного замовника?", "Підтвердження", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
		{
			AddCustomer();
			CSetMode(1);
		}
}
private: System::Void lbCustomers_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	ShowCustomer(lbCustomers->SelectedIndex);
}
private: System::Void bCChange_Click(System::Object^  sender, System::EventArgs^  e) {
	CSetMode(2);
	editingmode = CHANGE_EDITING_MODE;
}
private: System::Void bCCancel_Click(System::Object^  sender, System::EventArgs^  e) {
	CSetMode(1);
	ShowCustomer(lbCustomers->SelectedIndex);
}
private: System::Void bCDelete_Click(System::Object^  sender, System::EventArgs^  e) {
	if (lbCustomers->SelectedIndex >= 0 && MessageBox::Show("Ви впевнені, що хочете видалити інформацію про даного замовника та всі його проекти?", "Підтвердження", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) DeleteCustomer(lbCustomers->SelectedIndex);
}
private: System::Void lbProjects_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	ShowProject(lbProjects->SelectedIndex);
}
private: System::Void bPrChange_Click(System::Object^  sender, System::EventArgs^  e) {
	PrSetMode(2);
	editingmode = CHANGE_EDITING_MODE;
}
private: System::Void bPrCancel_Click(System::Object^  sender, System::EventArgs^  e) {
	PrSetMode(1);
	ShowProject(lbProjects->SelectedIndex);
}
private: System::Void lbCToProjects_Click(System::Object^  sender, System::EventArgs^  e) {
	if (lbCProjects->SelectedIndex >= 0)
	{
		FromCustomerToProjects();
	}
}
private: System::Void bToCustomers_Click(System::Object^  sender, System::EventArgs^  e) {
	int id= tPrCustomer->SelectedIndex;
	tabControl->SelectTab(2);
	lbCustomers->SelectedIndex = id;
}
private: System::Void bPrDelete_Click(System::Object^  sender, System::EventArgs^  e) {
	if (lbProjects->SelectedIndex >= 0 && MessageBox::Show("Ви впевнені, що хочете видалити інформацію про даний проект?", "Підтвердження", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) DeleteProject(lbProjects->SelectedIndex);
}
private: System::Void bWChange_Click(System::Object^  sender, System::EventArgs^  e) {
	WSetMode(2);
	editingmode = CHANGE_EDITING_MODE;
}
private: System::Void bWDelete_Click(System::Object^  sender, System::EventArgs^  e) {
	if (lbWorkers->SelectedIndex >= 0 && MessageBox::Show("Ви впевнені, що хочете видалити інформацію про даного працівника?", "Підтвердження", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) DeleteWorker(lbWorkers->SelectedIndex);
}
private: System::Void bWCancel_Click(System::Object^  sender, System::EventArgs^  e) {
	WSetMode(1);
	ShowWorker(lbWorkers->SelectedIndex);
}
private: System::Void lbWorkers_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (lbWorkers->SelectedIndex>=0) ShowWorker(lbWorkers->SelectedIndex);
}
private: System::Void bWToProjects_Click(System::Object^  sender, System::EventArgs^  e) {
	if (tWProject->SelectedIndex > 0)
	{
		int id = tWProject->SelectedIndex - 1;
		tabControl->SelectTab(0);
		lbProjects->SelectedIndex = id;
	}
}
private: System::Void bToWorkers_Click(System::Object^  sender, System::EventArgs^  e) {
	if (lbPrWorkers->SelectedIndex >= 0)
	{
		FromProjectToWorkers();
	}
}
private: System::Void tabControl_Selecting(System::Object^  sender, System::Windows::Forms::TabControlCancelEventArgs^  e) {
	switch (tabControl->SelectedIndex)
	{
		case 0: LoadProjects();
			break;
		case 1: LoadWorkers();
			break;
		case 2: LoadCustomers();
	}
}
private: System::Void bPrOffWorker_Click(System::Object^  sender, System::EventArgs^  e) {
	if (lbPrWorkers->SelectedIndices->Count>0 && MessageBox::Show("Ви впевнені, що хочете виключити даних працівників з проекту?", "Підтвердження", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
		FreeWorkers();
}
private: System::Void bLogin_Click(System::Object^  sender, System::EventArgs^  e) {
	if (tPassword->Text == "12345")
	{
		gbAuthorization->Visible = false;
		menuStrip1->Visible = true;
		Manager *m = Manager::Service("m.txt");
		Customer::LoadAll("c.txt");
		Project::LoadAll("p.txt");
		Worker::LoadAll("w.txt");
		LoadCustomers();
		LoadProjects();
		LoadWorkers();
		CSetMode(mode);
		PrSetMode(mode);
		WSetMode(mode);
	}
}

private: System::Void проМенеджераToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl->SelectTab(1);
	lbWorkers->SelectedIndex = -1;
	ShowWorker(Manager::current);//Реалізація пункту 11.	Продемонструвати поліморфні виклики усіх методів за допомогою пізнього зв'язуванням (динамічного) та  раннього (статичним) зв'язуванням. Продемонструвати зміну форми об’єкта із застосуванням принципу поліморфізму.
}
private: System::Void проПрограмуToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Система менеджменту проекту\nРозробник: студент групи ІПЗ-16-1, Віталій Кривий\nДля курсового проекту\nУкраїна, Хмельницький, 2017");
}
private: System::Void закритиToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}

//Реалізація пункту 6.	Визначити шаблон класу. Оголосити об'єктів, що базуються на шаблоні класу з двома різними типами даних.
private: System::Void працівниківToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	PhoneBook<Worker> phonebook(Worker::workers);
	MessageBox::Show(marshal_as<String ^>(phonebook.GetListAsString()));
}
private: System::Void замовниківToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	PhoneBook<Customer> phonebook(Customer::customers);
	MessageBox::Show(marshal_as<String ^>(phonebook.GetListAsString()));
}
};
}
