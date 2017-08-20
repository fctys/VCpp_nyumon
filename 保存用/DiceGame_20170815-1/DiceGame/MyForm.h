#pragma once

namespace DiceGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// MyForm �̊T�v
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �����ɃR���X�g���N�^�[ �R�[�h��ǉ����܂�
			//
		}

	protected:
		/// <summary>
		/// �g�p���̃��\�[�X�����ׂăN���[���A�b�v���܂��B
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
			 //private: Label^ label1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RadioButton^  rdbOdd;
	private: System::Windows::Forms::RadioButton^  rdbEven;
	private: System::Windows::Forms::PictureBox^  pictureDice1;
	private: System::Windows::Forms::PictureBox^  pictureDice2;
	private: System::Windows::Forms::PictureBox^  pictureDice3;
	private: System::Windows::Forms::PictureBox^  pictureDice6;
	private: System::Windows::Forms::PictureBox^  pictureDice5;
	private: System::Windows::Forms::PictureBox^  pictureDice4;
	private: System::Windows::Forms::Label^  lblResult;
	private: System::Windows::Forms::PictureBox^  pictureWin;
	private: System::Windows::Forms::PictureBox^  pictureLose;

	private:
		/// <summary>
		/// �K�v�ȃf�U�C�i�[�ϐ��ł��B
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �f�U�C�i�[ �T�|�[�g�ɕK�v�ȃ��\�b�h�ł��B���̃��\�b�h�̓��e��
		/// �R�[�h �G�f�B�^�[�ŕύX���Ȃ��ł��������B
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->rdbOdd = (gcnew System::Windows::Forms::RadioButton());
			this->rdbEven = (gcnew System::Windows::Forms::RadioButton());
			this->pictureDice1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureDice2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureDice3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureDice6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureDice5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureDice4 = (gcnew System::Windows::Forms::PictureBox());
			this->lblResult = (gcnew System::Windows::Forms::Label());
			this->pictureWin = (gcnew System::Windows::Forms::PictureBox());
			this->pictureLose = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureWin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureLose))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(103, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"����Ə������悤�I";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"�l�r �o�S�V�b�N", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button1->Location = System::Drawing::Point(91, 104);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 48);
			this->button1->TabIndex = 1;
			this->button1->Text = L"�X�^�[�g";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// rdbOdd
			// 
			this->rdbOdd->AutoSize = true;
			this->rdbOdd->Location = System::Drawing::Point(88, 168);
			this->rdbOdd->Name = L"rdbOdd";
			this->rdbOdd->Size = System::Drawing::Size(58, 16);
			this->rdbOdd->TabIndex = 2;
			this->rdbOdd->TabStop = true;
			this->rdbOdd->Text = L"���";
			this->rdbOdd->UseVisualStyleBackColor = true;
			// 
			// rdbEven
			// 
			this->rdbEven->AutoSize = true;
			this->rdbEven->Location = System::Drawing::Point(152, 168);
			this->rdbEven->Name = L"rdbEven";
			this->rdbEven->Size = System::Drawing::Size(58, 16);
			this->rdbEven->TabIndex = 3;
			this->rdbEven->TabStop = true;
			this->rdbEven->Text = L"������";
			this->rdbEven->UseVisualStyleBackColor = true;
			// 
			// pictureDice1
			// 
			this->pictureDice1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDice1.Image")));
			this->pictureDice1->Location = System::Drawing::Point(17, 213);
			this->pictureDice1->Name = L"pictureDice1";
			this->pictureDice1->Size = System::Drawing::Size(39, 39);
			this->pictureDice1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureDice1->TabIndex = 4;
			this->pictureDice1->TabStop = false;
			this->pictureDice1->Visible = false;
			// 
			// pictureDice2
			// 
			this->pictureDice2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDice2.Image")));
			this->pictureDice2->Location = System::Drawing::Point(62, 213);
			this->pictureDice2->Name = L"pictureDice2";
			this->pictureDice2->Size = System::Drawing::Size(39, 39);
			this->pictureDice2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureDice2->TabIndex = 5;
			this->pictureDice2->TabStop = false;
			this->pictureDice2->Visible = false;
			// 
			// pictureDice3
			// 
			this->pictureDice3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDice3.Image")));
			this->pictureDice3->Location = System::Drawing::Point(107, 213);
			this->pictureDice3->Name = L"pictureDice3";
			this->pictureDice3->Size = System::Drawing::Size(39, 39);
			this->pictureDice3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureDice3->TabIndex = 6;
			this->pictureDice3->TabStop = false;
			this->pictureDice3->Visible = false;
			// 
			// pictureDice6
			// 
			this->pictureDice6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDice6.Image")));
			this->pictureDice6->Location = System::Drawing::Point(242, 213);
			this->pictureDice6->Name = L"pictureDice6";
			this->pictureDice6->Size = System::Drawing::Size(39, 39);
			this->pictureDice6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureDice6->TabIndex = 9;
			this->pictureDice6->TabStop = false;
			this->pictureDice6->Visible = false;
			// 
			// pictureDice5
			// 
			this->pictureDice5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDice5.Image")));
			this->pictureDice5->Location = System::Drawing::Point(197, 213);
			this->pictureDice5->Name = L"pictureDice5";
			this->pictureDice5->Size = System::Drawing::Size(39, 39);
			this->pictureDice5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureDice5->TabIndex = 8;
			this->pictureDice5->TabStop = false;
			this->pictureDice5->Visible = false;
			// 
			// pictureDice4
			// 
			this->pictureDice4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDice4.Image")));
			this->pictureDice4->Location = System::Drawing::Point(152, 213);
			this->pictureDice4->Name = L"pictureDice4";
			this->pictureDice4->Size = System::Drawing::Size(39, 39);
			this->pictureDice4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureDice4->TabIndex = 7;
			this->pictureDice4->TabStop = false;
			this->pictureDice4->Visible = false;
			// 
			// lblResult
			// 
			this->lblResult->AutoSize = true;
			this->lblResult->Location = System::Drawing::Point(197, 279);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(0, 12);
			this->lblResult->TabIndex = 10;
			// 
			// pictureWin
			// 
			this->pictureWin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureWin.Image")));
			this->pictureWin->Location = System::Drawing::Point(17, 259);
			this->pictureWin->Name = L"pictureWin";
			this->pictureWin->Size = System::Drawing::Size(75, 48);
			this->pictureWin->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureWin->TabIndex = 11;
			this->pictureWin->TabStop = false;
			this->pictureWin->Visible = false;
			// 
			// pictureLose
			// 
			this->pictureLose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureLose.Image")));
			this->pictureLose->Location = System::Drawing::Point(17, 259);
			this->pictureLose->Name = L"pictureLose";
			this->pictureLose->Size = System::Drawing::Size(75, 48);
			this->pictureLose->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureLose->TabIndex = 12;
			this->pictureLose->TabStop = false;
			this->pictureLose->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(312, 323);
			this->Controls->Add(this->pictureLose);
			this->Controls->Add(this->pictureWin);
			this->Controls->Add(this->lblResult);
			this->Controls->Add(this->pictureDice6);
			this->Controls->Add(this->pictureDice5);
			this->Controls->Add(this->pictureDice4);
			this->Controls->Add(this->pictureDice3);
			this->Controls->Add(this->pictureDice2);
			this->Controls->Add(this->pictureDice1);
			this->Controls->Add(this->rdbEven);
			this->Controls->Add(this->rdbOdd);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"�l�r �o�S�V�b�N", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"�T�C�R���\�z�Q�[��";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureWin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureLose))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);


		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->rdbOdd->Checked) {
			System::Diagnostics::Debug::WriteLine("����I������܂���");
		}
		else if (this->rdbEven->Checked) {
			System::Diagnostics::Debug::WriteLine("�������I������܂���");
		}
		else {
			MessageBox::Show("�����������I��ł�������", "���˂���");
			return;
		}
		//�T�C�R���̖ڂ������_���ɐ���
		Random^ randomDice;
		randomDice = gcnew Random();

		//MessageBox::Show("�{�^�����N���b�N����܂���");

		int diceNumber;
		diceNumber = randomDice->Next(1, 7);
		//diceNumber = 1;
		//Debug::WriteLine("�ϐ�diceNumber�̒l��" + diceNumber.ToString()+"�ł�");
		//diceNumber +=5;
		Debug::WriteLine("�ϐ�diceNumber�̒l��" + diceNumber.ToString() + "�ł�");
		ShowDice(diceNumber);

		//���s�𔻒�
		bool winFlg = IsWinGame(diceNumber);

		//���s�ɉ����ĉ摜��\��
		ShowPicture(winFlg);

	}

	private: System::Void ShowDice(int showDiceNumber) {
		//�S���̃T�C�R�����\��
		this->pictureDice1->Visible = false;
		this->pictureDice2->Visible = false;
		this->pictureDice3->Visible = false;
		this->pictureDice4->Visible = false;
		this->pictureDice5->Visible = false;
		this->pictureDice6->Visible = false;
		//�T�C�R����\��
		switch (showDiceNumber) {
		case 1:
			this->pictureDice1->Visible = true;
			break;
		case 2:
			this->pictureDice2->Visible = true;
			break;
		case 3:
			this->pictureDice3->Visible = true;
			break;
		case 4:
			this->pictureDice4->Visible = true;
			break;
		case 5:
			this->pictureDice5->Visible = true;
			break;
		case 6:
			this->pictureDice6->Visible = true;
			break;
		default:
			break;
		}
	}

	private: bool IsWinGame(int showDiceNumber) {
		//��������̂ǂ����I�񂾂��ۑ�
		String^ selectedValue;
		if (rdbEven->Checked) {
			selectedValue = "����";
		}
		else {
			selectedValue = "�";
		}
		//��������̂ǂ���̖ڂ��ł�����ۑ�
		String^ resultValue;
		if (showDiceNumber % 2 == 0) {
			resultValue = "����";
		}
		else {
			resultValue = "�";
		}

		//�\�z�ƌ��ʂ���v���邩�ǂ����ŏ��s�𔻒�
		if (selectedValue == resultValue) {
			//����
			return true;
		}
		else {
			//����
			return false;
		}
	}

	private: System::Void ShowPicture(bool winGame) {
		if (winGame) {
			this->lblResult->Text = "������";
			this->lblResult->ForeColor = Color::Red;
			this->pictureWin->Visible = true;
			this->pictureLose->Visible = false;
			this->BackColor = Color::White;
		}
		else {
			this->lblResult->Text = "�͂���E�E";
			this->lblResult->ForeColor = Color::Black;
			this->pictureWin->Visible = false;
			this->pictureLose->Visible = true;
			this->BackColor = Color::LightGray;
		}
	}

	private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (System::Windows::Forms::DialogResult::Cancel ==
			MessageBox::Show("�Q�[�����I�����܂����H", "�m�F",
				MessageBoxButtons::OKCancel, MessageBoxIcon::Question)) {
			e->Cancel = true;
		}

	}


	};
}
