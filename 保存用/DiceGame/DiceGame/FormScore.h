#pragma once

namespace DiceGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// FormScore �̊T�v
	/// </summary>
	public ref class FormScore : public System::Windows::Forms::Form
	{
	public:
		FormScore(void)
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
		~FormScore()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lblScore;
	private: System::Windows::Forms::Button^  btnReset;
	private: System::Windows::Forms::Button^  btnClose;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblScore = (gcnew System::Windows::Forms::Label());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�n�C�X�R�A";
			// 
			// lblScore
			// 
			this->lblScore->AutoSize = true;
			this->lblScore->Location = System::Drawing::Point(171, 13);
			this->lblScore->Name = L"lblScore";
			this->lblScore->Size = System::Drawing::Size(23, 12);
			this->lblScore->TabIndex = 1;
			this->lblScore->Text = L"0�_";
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(12, 97);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(75, 23);
			this->btnReset->TabIndex = 2;
			this->btnReset->Text = L"���Z�b�g";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &FormScore::btnReset_Click);
			// 
			// btnClose
			// 
			this->btnClose->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnClose->Location = System::Drawing::Point(119, 97);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(75, 23);
			this->btnClose->TabIndex = 3;
			this->btnClose->Text = L"����";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &FormScore::btnClose_Click);
			// 
			// FormScore
			// 
			this->AcceptButton = this->btnClose;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->btnClose;
			this->ClientSize = System::Drawing::Size(292, 273);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->lblScore);
			this->Controls->Add(this->label1);
			this->Name = L"FormScore";
			this->Text = L"�n�C�X�R�A";
			this->Load += gcnew System::EventHandler(this, &FormScore::FormScore_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormScore_Load(System::Object^  sender, System::EventArgs^  e) {
		try {
			//�X�R�A�L�^�p��Dice.dat���J��
			System::IO::StreamReader^ reader = gcnew System::IO::StreamReader("./Dice.dat");
			//Dice.dat�ɒ��g������ꍇ�A���̒l�����x���ɃZ�b�g
			if (!reader->EndOfStream) {
				this->lblScore->Text = reader->ReadToEnd() + "�_";
			}
			//Dice/dat�����
			reader->Close();
		}
		catch(System::IO::FileNotFoundException^ ex){
			//�t�@�C�������݂��Ȃ��ꍇ�A�����l0�ŐV���ȃe�L�X�g�t�@�C�����쐬
			System::IO::File::AppendAllText("./Dice.dat","0");
			System::Diagnostics::Debug::WriteLine("--�G���[���b�Z�[�W---\n"+ex->Message);

		}
		finally{

		}
	}
private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void btnReset_Click(System::Object^  sender, System::EventArgs^  e) {
	//Dice.dat���J���i���݂��Ȃ��ꍇ�͐V�K�쐬�j
	System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter("./Dice.dat", false);
	//�l�Ƃ���0���Z�b�g
	writer->Write("0");
	//Dice.dat�����
	writer->Close();
	//�t�H�[����̕\�����u0�_�v�ɕύX
	this->lblScore->Text = "0�Ă�";
}
};
}
