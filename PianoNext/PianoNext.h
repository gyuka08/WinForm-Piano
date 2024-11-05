#pragma once
#include <iostream>
#include <cmath>
#include "Speaker.h"

int octave = 3;
int volume = 50;
float noteC = 16.35F;
float noteDFlat = 17.32F;
float noteD = 18.35F;
float noteEFlat = 19.45F;
float noteE = 20.6F;
float noteF = 21.83F;
float noteGFlat = 23.12F;
float noteG = 24.5F;
float noteAFlat = 25.96F;
float noteA = 27.5F;
float noteBFlat = 29.14F;
float noteB = 30.87F;
bool isRecording = false;

namespace PianoNext {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class PianoNext : public System::Windows::Forms::Form
	{
		
	public:
		PianoNext(void)
		{
			InitializeComponent();
		}

	protected:
		~PianoNext()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::Button^ octaveDownButton;
	private: System::Windows::Forms::Button^ keyC;
	private: System::Windows::Forms::Button^ keyD;
	private: System::Windows::Forms::Button^ keyE;
	private: System::Windows::Forms::Button^ keyF;
	private: System::Windows::Forms::Button^ keyG;
	private: System::Windows::Forms::Button^ keyA;
	private: System::Windows::Forms::Button^ keyB;
	private: System::Windows::Forms::Button^ highC;
	private: System::Windows::Forms::Button^ octaveUpButton;
	private: System::Windows::Forms::Button^ keyDFlat;
	private: System::Windows::Forms::Button^ keyEFlat;
	private: System::Windows::Forms::Button^ keyAFlat;
	private: System::Windows::Forms::Button^ keyBFlat;
	private: System::Windows::Forms::Button^ keyGFlat;
	private: System::Windows::Forms::Button^ volumeUpButton;
	private: System::Windows::Forms::Button^ exitButton;
	private: System::Windows::Forms::Button^ volumeDownButton;
	private: System::Windows::Forms::Button^ recordButton;
	private: System::Windows::Forms::TableLayoutPanel^ whiteKeyPanel;
	private: System::Windows::Forms::TableLayoutPanel^ ControlPanel;
	private: System::Windows::Forms::TableLayoutPanel^ blackKeyPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ blackKeyPanel2;

	protected:

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PianoNext::typeid));
			this->title = (gcnew System::Windows::Forms::Label());
			this->octaveDownButton = (gcnew System::Windows::Forms::Button());
			this->keyC = (gcnew System::Windows::Forms::Button());
			this->keyD = (gcnew System::Windows::Forms::Button());
			this->keyE = (gcnew System::Windows::Forms::Button());
			this->keyF = (gcnew System::Windows::Forms::Button());
			this->keyG = (gcnew System::Windows::Forms::Button());
			this->keyA = (gcnew System::Windows::Forms::Button());
			this->keyB = (gcnew System::Windows::Forms::Button());
			this->highC = (gcnew System::Windows::Forms::Button());
			this->octaveUpButton = (gcnew System::Windows::Forms::Button());
			this->keyDFlat = (gcnew System::Windows::Forms::Button());
			this->keyEFlat = (gcnew System::Windows::Forms::Button());
			this->keyAFlat = (gcnew System::Windows::Forms::Button());
			this->keyBFlat = (gcnew System::Windows::Forms::Button());
			this->keyGFlat = (gcnew System::Windows::Forms::Button());
			this->volumeUpButton = (gcnew System::Windows::Forms::Button());
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->volumeDownButton = (gcnew System::Windows::Forms::Button());
			this->recordButton = (gcnew System::Windows::Forms::Button());
			this->whiteKeyPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->ControlPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->blackKeyPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->blackKeyPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->whiteKeyPanel->SuspendLayout();
			this->ControlPanel->SuspendLayout();
			this->blackKeyPanel1->SuspendLayout();
			this->blackKeyPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// title
			// 
			this->title->AccessibleName = L"TitleLabel";
			this->title->AutoSize = true;
			this->title->BackColor = System::Drawing::Color::Transparent;
			this->title->Font = (gcnew System::Drawing::Font(L"Aptos", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title->Location = System::Drawing::Point(0, 0);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(Screen::PrimaryScreen->WorkingArea.Width, Screen::PrimaryScreen->WorkingArea.Height * 2 / 5);
			this->title->TabIndex = 0;
			this->title->Text = L"";
			this->title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// octaveDownButton
			// 
			this->octaveDownButton->AccessibleName = L"LowerOctave";
			this->octaveDownButton->AutoSize = true;
			this->octaveDownButton->BackColor = System::Drawing::Color::Transparent;
			this->octaveDownButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"octaveDownButton.BackgroundImage")));
			this->octaveDownButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->octaveDownButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->octaveDownButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->octaveDownButton->FlatAppearance->BorderSize = 0;
			this->octaveDownButton->ForeColor = System::Drawing::Color::DimGray;
			this->octaveDownButton->Location = System::Drawing::Point(2, 2);
			this->octaveDownButton->Margin = System::Windows::Forms::Padding(2);
			this->octaveDownButton->Name = L"octaveDownButton";
			this->octaveDownButton->Size = System::Drawing::Size(48, 396);
			this->octaveDownButton->TabIndex = 1;
			this->octaveDownButton->Text = L"";
			this->octaveDownButton->UseVisualStyleBackColor = false;
			this->octaveDownButton->Click += gcnew System::EventHandler(this, &PianoNext::octaveDownButton_Click);
			// 
			// keyC
			// 
			this->keyC->AccessibleName = L"LowC";
			this->keyC->AutoSize = true;
			this->keyC->BackColor = System::Drawing::Color::Transparent;
			this->keyC->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"keyC.BackgroundImage")));
			this->keyC->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->keyC->Cursor = System::Windows::Forms::Cursors::Hand;
			this->keyC->Dock = System::Windows::Forms::DockStyle::Fill;
			this->keyC->FlatAppearance->BorderSize = 0;
			this->keyC->Font = (gcnew System::Drawing::Font(L"Aptos Semibold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyC->ForeColor = System::Drawing::Color::DimGray;
			this->keyC->Location = System::Drawing::Point(54, 2);
			this->keyC->Margin = System::Windows::Forms::Padding(2);
			this->keyC->Name = L"keyC";
			this->keyC->Size = System::Drawing::Size(114, 396);
			this->keyC->TabIndex = 2;
			this->keyC->Text = L"C" + octave;
			this->keyC->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->keyC->UseVisualStyleBackColor = false;
			this->keyC->Click += gcnew System::EventHandler(this, &PianoNext::keyC_Click);
			// 
			// keyD
			// 
			this->keyD->AccessibleName = L"D";
			this->keyD->AutoSize = true;
			this->keyD->BackColor = System::Drawing::Color::Transparent;
			this->keyD->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"keyD.BackgroundImage")));
			this->keyD->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->keyD->Cursor = System::Windows::Forms::Cursors::Hand;
			this->keyD->Dock = System::Windows::Forms::DockStyle::Fill;
			this->keyD->FlatAppearance->BorderSize = 0;
			this->keyD->Font = (gcnew System::Drawing::Font(L"Aptos", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyD->ForeColor = System::Drawing::Color::DimGray;
			this->keyD->Location = System::Drawing::Point(172, 2);
			this->keyD->Margin = System::Windows::Forms::Padding(2);
			this->keyD->Name = L"keyD";
			this->keyD->Size = System::Drawing::Size(114, 396);
			this->keyD->TabIndex = 3;
			this->keyD->Text = L"D" + octave;
			this->keyD->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->keyD->UseVisualStyleBackColor = false;
			this->keyD->Click += gcnew System::EventHandler(this, &PianoNext::keyD_Click);
			// 
			// keyE
			// 
			this->keyE->AccessibleName = L"E";
			this->keyE->AutoSize = true;
			this->keyE->BackColor = System::Drawing::Color::Transparent;
			this->keyE->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"keyE.BackgroundImage")));
			this->keyE->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->keyE->Cursor = System::Windows::Forms::Cursors::Hand;
			this->keyE->Dock = System::Windows::Forms::DockStyle::Fill;
			this->keyE->FlatAppearance->BorderSize = 0;
			this->keyE->Font = (gcnew System::Drawing::Font(L"Aptos", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyE->ForeColor = System::Drawing::Color::DimGray;
			this->keyE->Location = System::Drawing::Point(290, 2);
			this->keyE->Margin = System::Windows::Forms::Padding(2);
			this->keyE->Name = L"keyE";
			this->keyE->Size = System::Drawing::Size(114, 396);
			this->keyE->TabIndex = 4;
			this->keyE->Text = L"E" + octave;
			this->keyE->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->keyE->UseVisualStyleBackColor = false;
			this->keyE->Click += gcnew System::EventHandler(this, &PianoNext::keyE_Click);
			// 
			// keyF
			// 
			this->keyF->AccessibleName = L"F";
			this->keyF->AutoSize = true;
			this->keyF->BackColor = System::Drawing::Color::Transparent;
			this->keyF->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"keyF.BackgroundImage")));
			this->keyF->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->keyF->Cursor = System::Windows::Forms::Cursors::Hand;
			this->keyF->Dock = System::Windows::Forms::DockStyle::Fill;
			this->keyF->FlatAppearance->BorderSize = 0;
			this->keyF->Font = (gcnew System::Drawing::Font(L"Aptos", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyF->ForeColor = System::Drawing::Color::DimGray;
			this->keyF->Location = System::Drawing::Point(408, 2);
			this->keyF->Margin = System::Windows::Forms::Padding(2);
			this->keyF->Name = L"keyF";
			this->keyF->Size = System::Drawing::Size(114, 396);
			this->keyF->TabIndex = 5;
			this->keyF->Text = L"F" + octave;
			this->keyF->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->keyF->UseVisualStyleBackColor = false;
			this->keyF->Click += gcnew System::EventHandler(this, &PianoNext::keyF_Click);
			// 
			// keyG
			// 
			this->keyG->AccessibleName = L"G";
			this->keyG->AutoSize = true;
			this->keyG->BackColor = System::Drawing::Color::Transparent;
			this->keyG->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"keyG.BackgroundImage")));
			this->keyG->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->keyG->Cursor = System::Windows::Forms::Cursors::Hand;
			this->keyG->Dock = System::Windows::Forms::DockStyle::Fill;
			this->keyG->FlatAppearance->BorderSize = 0;
			this->keyG->Font = (gcnew System::Drawing::Font(L"Aptos", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyG->ForeColor = System::Drawing::Color::DimGray;
			this->keyG->Location = System::Drawing::Point(526, 2);
			this->keyG->Margin = System::Windows::Forms::Padding(2);
			this->keyG->Name = L"keyG";
			this->keyG->Size = System::Drawing::Size(114, 396);
			this->keyG->TabIndex = 6;
			this->keyG->Text = L"G" + octave;
			this->keyG->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->keyG->UseVisualStyleBackColor = false;
			this->keyG->Click += gcnew System::EventHandler(this, &PianoNext::keyG_Click);
			// 
			// keyA
			// 
			this->keyA->AccessibleName = L"A";
			this->keyA->AutoSize = true;
			this->keyA->BackColor = System::Drawing::Color::Transparent;
			this->keyA->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"keyA.BackgroundImage")));
			this->keyA->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->keyA->Cursor = System::Windows::Forms::Cursors::Hand;
			this->keyA->Dock = System::Windows::Forms::DockStyle::Fill;
			this->keyA->FlatAppearance->BorderSize = 0;
			this->keyA->Font = (gcnew System::Drawing::Font(L"Aptos", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyA->ForeColor = System::Drawing::Color::DimGray;
			this->keyA->Location = System::Drawing::Point(644, 2);
			this->keyA->Margin = System::Windows::Forms::Padding(2);
			this->keyA->Name = L"keyA";
			this->keyA->Size = System::Drawing::Size(114, 396);
			this->keyA->TabIndex = 7;
			this->keyA->Text = L"A" + octave;
			this->keyA->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->keyA->UseVisualStyleBackColor = false;
			this->keyA->Click += gcnew System::EventHandler(this, &PianoNext::keyA_Click);
			// 
			// keyB
			// 
			this->keyB->AccessibleName = L"B";
			this->keyB->AutoSize = true;
			this->keyB->BackColor = System::Drawing::Color::Transparent;
			this->keyB->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"keyB.BackgroundImage")));
			this->keyB->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->keyB->Cursor = System::Windows::Forms::Cursors::Hand;
			this->keyB->Dock = System::Windows::Forms::DockStyle::Fill;
			this->keyB->FlatAppearance->BorderSize = 0;
			this->keyB->Font = (gcnew System::Drawing::Font(L"Aptos", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyB->ForeColor = System::Drawing::Color::DimGray;
			this->keyB->Location = System::Drawing::Point(762, 2);
			this->keyB->Margin = System::Windows::Forms::Padding(2);
			this->keyB->Name = L"keyB";
			this->keyB->Size = System::Drawing::Size(114, 396);
			this->keyB->TabIndex = 8;
			this->keyB->Text = L"B" + octave;
			this->keyB->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->keyB->UseVisualStyleBackColor = false;
			this->keyB->Click += gcnew System::EventHandler(this, &PianoNext::keyB_Click);
			// 
			// highC
			// 
			this->highC->AccessibleName = L"HighC";
			this->highC->AutoSize = true;
			this->highC->BackColor = System::Drawing::Color::Transparent;
			this->highC->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"highC.BackgroundImage")));
			this->highC->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->highC->Cursor = System::Windows::Forms::Cursors::Hand;
			this->highC->Dock = System::Windows::Forms::DockStyle::Fill;
			this->highC->FlatAppearance->BorderSize = 0;
			this->highC->Font = (gcnew System::Drawing::Font(L"Aptos", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->highC->ForeColor = System::Drawing::Color::DimGray;
			this->highC->Location = System::Drawing::Point(880, 2);
			this->highC->Margin = System::Windows::Forms::Padding(2);
			this->highC->Name = L"highC";
			this->highC->Size = System::Drawing::Size(114, 396);
			this->highC->TabIndex = 9;
			this->highC->Text = L"C" + octave;
			this->highC->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->highC->UseVisualStyleBackColor = false;
			this->highC->Click += gcnew System::EventHandler(this, &PianoNext::highC_Click);
			// 
			// octaveUpButton
			// 
			this->octaveUpButton->AccessibleName = L"HigherOctave";
			this->octaveUpButton->AutoSize = true;
			this->octaveUpButton->BackColor = System::Drawing::Color::Transparent;
			this->octaveUpButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"octaveUpButton.BackgroundImage")));
			this->octaveUpButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->octaveUpButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->octaveUpButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->octaveUpButton->FlatAppearance->BorderSize = 0;
			this->octaveUpButton->ForeColor = System::Drawing::Color::DimGray;
			this->octaveUpButton->Location = System::Drawing::Point(998, 2);
			this->octaveUpButton->Margin = System::Windows::Forms::Padding(2);
			this->octaveUpButton->Name = L"octaveUpButton";
			this->octaveUpButton->Size = System::Drawing::Size(50, 396);
			this->octaveUpButton->TabIndex = 10;
			this->octaveUpButton->Text = L"";
			this->octaveUpButton->UseVisualStyleBackColor = false;
			this->octaveUpButton->Click += gcnew System::EventHandler(this, &PianoNext::octaveUpButton_Click);
			// 
			// keyDFlat
			// 
			this->keyDFlat->AccessibleName = L"DFlat";
			this->keyDFlat->AutoSize = true;
			this->keyDFlat->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->keyDFlat->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"keyDFlat.BackgroundImage")));
			this->keyDFlat->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->keyDFlat->Cursor = System::Windows::Forms::Cursors::Hand;
			this->keyDFlat->Dock = System::Windows::Forms::DockStyle::Fill;
			this->keyDFlat->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->keyDFlat->FlatAppearance->BorderSize = 0;
			this->keyDFlat->FlatAppearance->CheckedBackColor = System::Drawing::SystemColors::ActiveCaption;
			this->keyDFlat->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ActiveCaption;
			this->keyDFlat->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ActiveCaption;
			this->keyDFlat->Font = (gcnew System::Drawing::Font(L"Aptos", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyDFlat->ForeColor = System::Drawing::Color::Gainsboro;
			this->keyDFlat->Location = System::Drawing::Point(2, 2);
			this->keyDFlat->Margin = System::Windows::Forms::Padding(2);
			this->keyDFlat->Name = L"keyDFlat";
			this->keyDFlat->Size = System::Drawing::Size(91, 205);
			this->keyDFlat->TabIndex = 11;
			this->keyDFlat->Text = L"D♭" + octave;
			this->keyDFlat->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->keyDFlat->UseVisualStyleBackColor = false;
			this->keyDFlat->Click += gcnew System::EventHandler(this, &PianoNext::keyDFlat_Click);
			// 
			// keyEFlat
			// 
			this->keyEFlat->AccessibleName = L"EFlat";
			this->keyEFlat->AutoSize = true;
			this->keyEFlat->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->keyEFlat->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"keyEFlat.BackgroundImage")));
			this->keyEFlat->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->keyEFlat->Cursor = System::Windows::Forms::Cursors::Hand;
			this->keyEFlat->Dock = System::Windows::Forms::DockStyle::Fill;
			this->keyEFlat->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->keyEFlat->FlatAppearance->BorderSize = 0;
			this->keyEFlat->FlatAppearance->CheckedBackColor = System::Drawing::SystemColors::ActiveCaption;
			this->keyEFlat->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ActiveCaption;
			this->keyEFlat->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ActiveCaption;
			this->keyEFlat->Font = (gcnew System::Drawing::Font(L"Aptos", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyEFlat->ForeColor = System::Drawing::Color::Gainsboro;
			this->keyEFlat->Location = System::Drawing::Point(97, 2);
			this->keyEFlat->Margin = System::Windows::Forms::Padding(2);
			this->keyEFlat->Name = L"keyEFlat";
			this->keyEFlat->Size = System::Drawing::Size(91, 205);
			this->keyEFlat->TabIndex = 12;
			this->keyEFlat->Text = L"E♭" + octave;
			this->keyEFlat->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->keyEFlat->UseVisualStyleBackColor = false;
			this->keyEFlat->Click += gcnew System::EventHandler(this, &PianoNext::keyEFlat_Click);
			// 
			// keyAFlat
			// 
			this->keyAFlat->AccessibleName = L"AFlat";
			this->keyAFlat->AutoSize = true;
			this->keyAFlat->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->keyAFlat->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"keyAFlat.BackgroundImage")));
			this->keyAFlat->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->keyAFlat->Cursor = System::Windows::Forms::Cursors::Hand;
			this->keyAFlat->Dock = System::Windows::Forms::DockStyle::Fill;
			this->keyAFlat->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->keyAFlat->FlatAppearance->BorderSize = 0;
			this->keyAFlat->FlatAppearance->CheckedBackColor = System::Drawing::SystemColors::ActiveCaption;
			this->keyAFlat->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ActiveCaption;
			this->keyAFlat->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ActiveCaption;
			this->keyAFlat->Font = (gcnew System::Drawing::Font(L"Aptos", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyAFlat->ForeColor = System::Drawing::Color::Gainsboro;
			this->keyAFlat->Location = System::Drawing::Point(382, 2);
			this->keyAFlat->Margin = System::Windows::Forms::Padding(2);
			this->keyAFlat->Name = L"keyAFlat";
			this->keyAFlat->Size = System::Drawing::Size(91, 205);
			this->keyAFlat->TabIndex = 13;
			this->keyAFlat->Text = L"A♭" + octave;
			this->keyAFlat->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->keyAFlat->UseVisualStyleBackColor = false;
			this->keyAFlat->Click += gcnew System::EventHandler(this, &PianoNext::keyAFlat_Click);
			// 
			// keyBFlat
			// 
			this->keyBFlat->AccessibleName = L"BFlat";
			this->keyBFlat->AutoSize = true;
			this->keyBFlat->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->keyBFlat->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"keyBFlat.BackgroundImage")));
			this->keyBFlat->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->keyBFlat->Cursor = System::Windows::Forms::Cursors::Hand;
			this->keyBFlat->Dock = System::Windows::Forms::DockStyle::Fill;
			this->keyBFlat->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->keyBFlat->FlatAppearance->BorderSize = 0;
			this->keyBFlat->FlatAppearance->CheckedBackColor = System::Drawing::SystemColors::ActiveCaption;
			this->keyBFlat->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ActiveCaption;
			this->keyBFlat->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ActiveCaption;
			this->keyBFlat->Font = (gcnew System::Drawing::Font(L"Aptos", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyBFlat->ForeColor = System::Drawing::Color::Gainsboro;
			this->keyBFlat->Location = System::Drawing::Point(477, 2);
			this->keyBFlat->Margin = System::Windows::Forms::Padding(2);
			this->keyBFlat->Name = L"keyBFlat";
			this->keyBFlat->Size = System::Drawing::Size(91, 205);
			this->keyBFlat->TabIndex = 14;
			this->keyBFlat->Text = L"B♭" + octave;
			this->keyBFlat->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->keyBFlat->UseVisualStyleBackColor = false;
			this->keyBFlat->Click += gcnew System::EventHandler(this, &PianoNext::keyBFlat_Click);
			// 
			// keyGFlat
			// 
			this->keyGFlat->AccessibleName = L"GFlat";
			this->keyGFlat->AutoSize = true;
			this->keyGFlat->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->keyGFlat->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"keyGFlat.BackgroundImage")));
			this->keyGFlat->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->keyGFlat->Cursor = System::Windows::Forms::Cursors::Hand;
			this->keyGFlat->Dock = System::Windows::Forms::DockStyle::Fill;
			this->keyGFlat->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->keyGFlat->FlatAppearance->BorderSize = 0;
			this->keyGFlat->FlatAppearance->CheckedBackColor = System::Drawing::SystemColors::ActiveCaption;
			this->keyGFlat->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ActiveCaption;
			this->keyGFlat->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ActiveCaption;
			this->keyGFlat->Font = (gcnew System::Drawing::Font(L"Aptos", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keyGFlat->ForeColor = System::Drawing::Color::Gainsboro;
			this->keyGFlat->Location = System::Drawing::Point(287, 2);
			this->keyGFlat->Margin = System::Windows::Forms::Padding(2);
			this->keyGFlat->Name = L"keyGFlat";
			this->keyGFlat->Size = System::Drawing::Size(91, 205);
			this->keyGFlat->TabIndex = 15;
			this->keyGFlat->Text = L"G♭" + octave;
			this->keyGFlat->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->keyGFlat->UseVisualStyleBackColor = false;
			this->keyGFlat->Click += gcnew System::EventHandler(this, &PianoNext::keyGFlat_Click);
			// 
			// volumeUpButton
			// 
			this->volumeUpButton->AccessibleName = L"VolumeUp";
			this->volumeUpButton->AutoSize = true;
			this->volumeUpButton->BackColor = System::Drawing::Color::White;
			this->volumeUpButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"volumeUpButton.BackgroundImage")));
			this->volumeUpButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->volumeUpButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->volumeUpButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->volumeUpButton->FlatAppearance->BorderSize = 0;
			this->volumeUpButton->Font = (gcnew System::Drawing::Font(L"Aptos", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->volumeUpButton->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->volumeUpButton->Location = System::Drawing::Point(2, 2);
			this->volumeUpButton->Margin = System::Windows::Forms::Padding(2);
			this->volumeUpButton->Name = L"volumeUpButton";
			this->volumeUpButton->Size = System::Drawing::Size(62, 32);
			this->volumeUpButton->TabIndex = 16;
			this->volumeUpButton->Text = L"VolUp";
			this->volumeUpButton->UseVisualStyleBackColor = false;
			this->volumeUpButton->Click += gcnew System::EventHandler(this, &PianoNext::volumeUpButton_Click);
			// 
			// exitButton
			// 
			this->exitButton->AccessibleName = L"Exit";
			this->exitButton->BackColor = System::Drawing::Color::White;
			this->exitButton->Cursor = System::Windows::Forms::Cursors::PanNE;
			this->exitButton->FlatAppearance->BorderSize = 0;
			this->exitButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->exitButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->exitButton->Font = (gcnew System::Drawing::Font(L"Aptos Symbol", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitButton->ForeColor = System::Drawing::Color::DimGray;
			this->exitButton->Location = System::Drawing::Point(Screen::PrimaryScreen->WorkingArea.Width * .8375F, 0);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(Screen::PrimaryScreen->WorkingArea.Width * .1125F, Screen::PrimaryScreen->WorkingArea.Width * .05625F);
			this->exitButton->TabIndex = 17;
			this->exitButton->Text = L"";
			this->exitButton->UseVisualStyleBackColor = false;
			this->exitButton->Click += gcnew System::EventHandler(this, &PianoNext::exitButton_Click);
			// 
			// volumeDownButton
			// 
			this->volumeDownButton->AccessibleName = L"VolumeDown";
			this->volumeDownButton->AutoSize = true;
			this->volumeDownButton->BackColor = System::Drawing::Color::White;
			this->volumeDownButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"volumeDownButton.BackgroundImage")));
			this->volumeDownButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->volumeDownButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->volumeDownButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->volumeDownButton->FlatAppearance->BorderSize = 0;
			this->volumeDownButton->Font = (gcnew System::Drawing::Font(L"Aptos", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->volumeDownButton->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->volumeDownButton->Location = System::Drawing::Point(68, 2);
			this->volumeDownButton->Margin = System::Windows::Forms::Padding(2);
			this->volumeDownButton->Name = L"volumeDownButton";
			this->volumeDownButton->Size = System::Drawing::Size(62, 32);
			this->volumeDownButton->TabIndex = 18;
			this->volumeDownButton->Text = L"VolDn";
			this->volumeDownButton->UseVisualStyleBackColor = false;
			this->volumeDownButton->Click += gcnew System::EventHandler(this, &PianoNext::volumeDownButton_Click);
			// 
			// recordButton
			// 
			this->recordButton->AccessibleName = L"Record";
			this->recordButton->AutoSize = true;
			this->recordButton->BackColor = System::Drawing::Color::White;
			this->recordButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"recordButton.BackgroundImage")));
			this->recordButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->recordButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->recordButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->recordButton->FlatAppearance->BorderSize = 0;
			this->recordButton->Font = (gcnew System::Drawing::Font(L"Aptos", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->recordButton->ForeColor = System::Drawing::Color::Maroon;
			this->recordButton->Location = System::Drawing::Point(134, 2);
			this->recordButton->Margin = System::Windows::Forms::Padding(2);
			this->recordButton->Name = L"recordButton";
			this->recordButton->Size = System::Drawing::Size(64, 32);
			this->recordButton->TabIndex = 19;
			this->recordButton->Text = L"Rec";
			this->recordButton->UseVisualStyleBackColor = false;
			this->recordButton->Click += gcnew System::EventHandler(this, &PianoNext::recordButton_Click);
			// 
			// whiteKeyPanel
			// 
			this->whiteKeyPanel->BackColor = System::Drawing::Color::Transparent;
			this->whiteKeyPanel->ColumnCount = 10;
			this->whiteKeyPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				5)));
			this->whiteKeyPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				11.25F)));
			this->whiteKeyPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				11.25F)));
			this->whiteKeyPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				11.25F)));
			this->whiteKeyPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				11.25F)));
			this->whiteKeyPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				11.25F)));
			this->whiteKeyPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				11.25F)));
			this->whiteKeyPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				11.25F)));
			this->whiteKeyPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				11.25F)));
			this->whiteKeyPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				5)));
			this->whiteKeyPanel->Controls->Add(this->octaveUpButton, 9, 0);
			this->whiteKeyPanel->Controls->Add(this->highC, 8, 0);
			this->whiteKeyPanel->Controls->Add(this->keyB, 7, 0);
			this->whiteKeyPanel->Controls->Add(this->octaveDownButton, 0, 0);
			this->whiteKeyPanel->Controls->Add(this->keyA, 6, 0);
			this->whiteKeyPanel->Controls->Add(this->keyF, 4, 0);
			this->whiteKeyPanel->Controls->Add(this->keyE, 3, 0);
			this->whiteKeyPanel->Controls->Add(this->keyG, 5, 0);
			this->whiteKeyPanel->Controls->Add(this->keyC, 1, 0);
			this->whiteKeyPanel->Controls->Add(this->keyD, 2, 0);
			this->whiteKeyPanel->ForeColor = System::Drawing::Color::Transparent;
			this->whiteKeyPanel->Location = System::Drawing::Point(0, Screen::PrimaryScreen->WorkingArea.Height / 10);
			this->whiteKeyPanel->Name = L"whiteKeyPanel";
			this->whiteKeyPanel->RowCount = 1;
			this->whiteKeyPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->whiteKeyPanel->Size = System::Drawing::Size(Screen::PrimaryScreen->WorkingArea.Width, Screen::PrimaryScreen->WorkingArea.Height / 2);
			this->whiteKeyPanel->TabIndex = 22;
			this->whiteKeyPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &PianoNext::whiteKeyPanel_Paint);
			// 
			// ControlPanel
			// 
			this->ControlPanel->BackColor = System::Drawing::Color::Transparent;
			this->ControlPanel->ColumnCount = 3;
			this->ControlPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->ControlPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->ControlPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->ControlPanel->Controls->Add(this->volumeDownButton, 1, 0);
			this->ControlPanel->Controls->Add(this->volumeUpButton, 0, 0);
			this->ControlPanel->Controls->Add(this->recordButton, 2, 0);
			this->ControlPanel->Location = System::Drawing::Point(Screen::PrimaryScreen->WorkingArea.Width * .05F, 0);
			this->ControlPanel->Name = L"ControlPanel";
			this->ControlPanel->RowCount = 1;
			this->ControlPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->ControlPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->ControlPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->ControlPanel->Size = System::Drawing::Size(Screen::PrimaryScreen->WorkingArea.Width * .3375F, Screen::PrimaryScreen->WorkingArea.Width * .05625F);
			this->ControlPanel->TabIndex = 23;
			this->ControlPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &PianoNext::ControlPanel_Paint);
			// 
			// blackKeyPanel1
			// 
			this->blackKeyPanel1->BackColor = System::Drawing::Color::Transparent;
			this->blackKeyPanel1->ColumnCount = 2;
			this->blackKeyPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50.0F)));
			this->blackKeyPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50.0F)));
			this->blackKeyPanel1->Controls->Add(this->keyDFlat, 0, 0);
			this->blackKeyPanel1->Controls->Add(this->keyEFlat, 1, 0);
			this->blackKeyPanel1->Location = System::Drawing::Point(Screen::PrimaryScreen->WorkingArea.Width * .10625F, Screen::PrimaryScreen->WorkingArea.Height / 10);
			this->blackKeyPanel1->Name = L"blackKeyPanel1";
			this->blackKeyPanel1->RowCount = 1;
			this->blackKeyPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->blackKeyPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->blackKeyPanel1->Size = System::Drawing::Size(Screen::PrimaryScreen->WorkingArea.Width * .225F, Screen::PrimaryScreen->WorkingArea.Height * 3 / 10);
			this->blackKeyPanel1->TabIndex = 24;
			this->blackKeyPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &PianoNext::blackKeyPanel1_Paint);
			// 
			// blackKeyPanel2
			// 
			this->blackKeyPanel2->BackColor = System::Drawing::Color::Transparent;
			this->blackKeyPanel2->ColumnCount = 3;
			this->blackKeyPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.3F)));
			this->blackKeyPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.3F)));
			this->blackKeyPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.3F)));
			this->blackKeyPanel2->Controls->Add(this->keyAFlat, 0, 0);
			this->blackKeyPanel2->Controls->Add(this->keyBFlat, 1, 0);
			this->blackKeyPanel2->Controls->Add(this->keyGFlat, 2, 0);
			this->blackKeyPanel2->Location = System::Drawing::Point(Screen::PrimaryScreen->WorkingArea.Width * .55625F, Screen::PrimaryScreen->WorkingArea.Height / 10);
			this->blackKeyPanel2->Name = L"blackKeyPanel2";
			this->blackKeyPanel2->RowCount = 1;
			this->blackKeyPanel1->TabIndex = 25;
			this->blackKeyPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->blackKeyPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->blackKeyPanel2->Size = System::Drawing::Size(Screen::PrimaryScreen->WorkingArea.Width * .3375F, Screen::PrimaryScreen->WorkingArea.Height * 3 / 10);
			this->blackKeyPanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &PianoNext::blackKeyPanel2_Paint);
			// 
			// PianoNext
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(Screen::PrimaryScreen->WorkingArea.Width, Screen::PrimaryScreen->WorkingArea.Height * 3 / 5);
			this->Controls->Add(this->blackKeyPanel1);
			this->Controls->Add(this->blackKeyPanel2);
			this->Controls->Add(this->ControlPanel);
			this->Controls->Add(this->whiteKeyPanel);
			this->Controls->Add(this->exitButton);
			this->Controls->Add(this->title);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Aptos", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(0, Screen::PrimaryScreen->WorkingArea.Height * 2 / 5);
			this->Dock = DockStyle::Bottom;
			this->Name = L"PianoNext";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Piano";
			this->whiteKeyPanel->ResumeLayout(false);
			this->whiteKeyPanel->PerformLayout();
			this->ControlPanel->ResumeLayout(false);
			this->ControlPanel->PerformLayout();
			this->blackKeyPanel1->ResumeLayout(false);
			this->blackKeyPanel1->PerformLayout();
			this->blackKeyPanel2->ResumeLayout(false);
			this->blackKeyPanel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		////KEY EVENTS

		//NOTES
		private: System::Void keyC_Click(System::Object^ sender, System::EventArgs^ e) {
			playSound(noteC * pow(2, octave), volume);
			//std::cout << "Played  " << noteC * pow(2, octave) << " at " << volume << ".\n";
		}
		private: System::Void keyD_Click(System::Object^ sender, System::EventArgs^ e) {
			playSound(noteD * pow(2, octave), volume);
		}
		private: System::Void keyE_Click(System::Object^ sender, System::EventArgs^ e) {
			playSound(noteE * pow(2, octave), volume);
		}
		private: System::Void keyF_Click(System::Object^ sender, System::EventArgs^ e) {
			playSound(noteF * pow(2, octave), volume);
		}
		private: System::Void keyG_Click(System::Object^ sender, System::EventArgs^ e) {
			playSound(noteG * pow(2, octave), volume);
		}
		private: System::Void keyA_Click(System::Object^ sender, System::EventArgs^ e) {
			playSound(noteA * pow(2, octave), volume);
		}
		private: System::Void keyB_Click(System::Object^ sender, System::EventArgs^ e) {
			playSound(noteB * pow(2, octave), volume);
		}
		private: System::Void highC_Click(System::Object^ sender, System::EventArgs^ e) {
			playSound(noteC * pow(2, octave + 1), volume);
		}
		private: System::Void keyEFlat_Click(System::Object^ sender, System::EventArgs^ e) {
			playSound(noteEFlat * pow(2, octave), volume);
		}
		private: System::Void keyDFlat_Click(System::Object^ sender, System::EventArgs^ e) {
			playSound(noteDFlat * pow(2, octave), volume);
		}
		private: System::Void keyAFlat_Click(System::Object^ sender, System::EventArgs^ e) {
			playSound(noteAFlat * pow(2, octave), volume);
		}
		private: System::Void keyBFlat_Click(System::Object^ sender, System::EventArgs^ e) {
			playSound(noteBFlat * pow(2, octave), volume);
		}
		private: System::Void keyGFlat_Click(System::Object^ sender, System::EventArgs^ e) {
			playSound(noteGFlat * pow(2, octave), volume);
		}

		//UI
		private: System::Void exitButton_Click(System::Object^ sender, System::EventArgs^ e) {
			   Application::Exit();
   	    }
		private: System::Void octaveUpButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (octave < 8) {
				octave++;
				this->octaveUpButton->ForeColor = System::Drawing::Color::DimGray;
				this->keyC->Text = L"C" + octave;
				this->keyDFlat->Text = L"D♭" + octave;
				this->keyD->Text = L"D" + octave;
				this->keyEFlat->Text = L"E♭" + octave;
				this->keyE->Text = L"E" + octave;
				this->keyF->Text = L"F" + octave;
				this->keyGFlat->Text = L"G♭" + octave;
				this->keyG->Text = L"G" + octave;
				this->keyAFlat->Text = L"A♭" + octave;
				this->keyA->Text = L"A" + octave;
				this->keyBFlat->Text = L"B♭" + octave;
				this->keyB->Text = L"B" + octave;
				this->highC->Text = L"C" + octave;
			}
			else this->octaveUpButton->ForeColor = System::Drawing::Color::WhiteSmoke;
		}
		private: System::Void octaveDownButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (octave > 0) {
				octave--;
				this->octaveUpButton->ForeColor = System::Drawing::Color::DimGray;
				this->keyC->Text = L"C" + octave;
				this->keyDFlat->Text = L"D♭" + octave;
				this->keyD->Text = L"D" + octave;
				this->keyEFlat->Text = L"E♭" + octave;
				this->keyE->Text = L"E" + octave;
				this->keyF->Text = L"F" + octave;
				this->keyGFlat->Text = L"G♭" + octave;
				this->keyG->Text = L"G" + octave;
				this->keyAFlat->Text = L"A♭" + octave;
				this->keyA->Text = L"A" + octave;
				this->keyBFlat->Text = L"B♭" + octave;
				this->keyB->Text = L"B" + octave;
				this->highC->Text = L"C" + octave;
			}
			else this->octaveUpButton->ForeColor = System::Drawing::Color::WhiteSmoke;
		}
		private: System::Void volumeUpButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if(volume != 100) volume += 5;
		}
		private: System::Void volumeDownButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (volume != 0) volume -= 5;
		}
		private: System::Void recordButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!isRecording) writeRecord();
			else cutRecord();
		}

		//PANEL
		private: System::Void whiteKeyPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		}
		private: System::Void ControlPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		}
		private: System::Void blackKeyPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		}
		private: System::Void blackKeyPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		}
	};
}
