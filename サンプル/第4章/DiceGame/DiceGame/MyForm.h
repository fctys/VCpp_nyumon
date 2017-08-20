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
	/// MyForm の概要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RadioButton^  radioButtonKisu;
	private: System::Windows::Forms::RadioButton^  radioButtonGusu;
	private: System::Windows::Forms::PictureBox^  pictureDice1;
	private: System::Windows::Forms::PictureBox^  pictureDice2;
	private: System::Windows::Forms::PictureBox^  pictureDice3;
	private: System::Windows::Forms::PictureBox^  pictureDice4;
	private: System::Windows::Forms::PictureBox^  pictureDice5;
	private: System::Windows::Forms::PictureBox^  pictureDice6;




	private: System::Windows::Forms::Label^  labelResult;
	private: System::Windows::Forms::PictureBox^  pictureWin;
	private: System::Windows::Forms::PictureBox^  pictureLose;


	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButtonKisu = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonGusu = (gcnew System::Windows::Forms::RadioButton());
			this->pictureDice1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureDice2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureDice3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureDice4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureDice5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureDice6 = (gcnew System::Windows::Forms::PictureBox());
			this->labelResult = (gcnew System::Windows::Forms::Label());
			this->pictureWin = (gcnew System::Windows::Forms::PictureBox());
			this->pictureLose = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureWin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureLose))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(85, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ワタシと勝負しよう！";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button1->Location = System::Drawing::Point(68, 74);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 44);
			this->button1->TabIndex = 1;
			this->button1->Text = L"スタート";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// radioButtonKisu
			// 
			this->radioButtonKisu->AutoSize = true;
			this->radioButtonKisu->Location = System::Drawing::Point(64, 144);
			this->radioButtonKisu->Name = L"radioButtonKisu";
			this->radioButtonKisu->Size = System::Drawing::Size(56, 16);
			this->radioButtonKisu->TabIndex = 2;
			this->radioButtonKisu->TabStop = true;
			this->radioButtonKisu->Text = L"奇数だ";
			this->radioButtonKisu->UseVisualStyleBackColor = true;
			// 
			// radioButtonGusu
			// 
			this->radioButtonGusu->AutoSize = true;
			this->radioButtonGusu->Location = System::Drawing::Point(130, 144);
			this->radioButtonGusu->Name = L"radioButtonGusu";
			this->radioButtonGusu->Size = System::Drawing::Size(56, 16);
			this->radioButtonGusu->TabIndex = 3;
			this->radioButtonGusu->TabStop = true;
			this->radioButtonGusu->Text = L"偶数だ";
			this->radioButtonGusu->UseVisualStyleBackColor = true;
			// 
			// pictureDice1
			// 
			this->pictureDice1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDice1.Image")));
			this->pictureDice1->Location = System::Drawing::Point(44, 208);
			this->pictureDice1->Name = L"pictureDice1";
			this->pictureDice1->Size = System::Drawing::Size(34, 33);
			this->pictureDice1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureDice1->TabIndex = 4;
			this->pictureDice1->TabStop = false;
			this->pictureDice1->Visible = false;
			// 
			// pictureDice2
			// 
			this->pictureDice2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDice2.Image")));
			this->pictureDice2->Location = System::Drawing::Point(84, 208);
			this->pictureDice2->Name = L"pictureDice2";
			this->pictureDice2->Size = System::Drawing::Size(34, 33);
			this->pictureDice2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureDice2->TabIndex = 5;
			this->pictureDice2->TabStop = false;
			this->pictureDice2->Visible = false;
			// 
			// pictureDice3
			// 
			this->pictureDice3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDice3.Image")));
			this->pictureDice3->Location = System::Drawing::Point(124, 208);
			this->pictureDice3->Name = L"pictureDice3";
			this->pictureDice3->Size = System::Drawing::Size(34, 33);
			this->pictureDice3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureDice3->TabIndex = 6;
			this->pictureDice3->TabStop = false;
			this->pictureDice3->Visible = false;
			// 
			// pictureDice4
			// 
			this->pictureDice4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDice4.Image")));
			this->pictureDice4->Location = System::Drawing::Point(164, 208);
			this->pictureDice4->Name = L"pictureDice4";
			this->pictureDice4->Size = System::Drawing::Size(34, 33);
			this->pictureDice4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureDice4->TabIndex = 7;
			this->pictureDice4->TabStop = false;
			this->pictureDice4->Visible = false;
			// 
			// pictureDice5
			// 
			this->pictureDice5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDice5.Image")));
			this->pictureDice5->Location = System::Drawing::Point(204, 208);
			this->pictureDice5->Name = L"pictureDice5";
			this->pictureDice5->Size = System::Drawing::Size(34, 33);
			this->pictureDice5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureDice5->TabIndex = 8;
			this->pictureDice5->TabStop = false;
			this->pictureDice5->Visible = false;
			// 
			// pictureDice6
			// 
			this->pictureDice6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDice6.Image")));
			this->pictureDice6->Location = System::Drawing::Point(244, 208);
			this->pictureDice6->Name = L"pictureDice6";
			this->pictureDice6->Size = System::Drawing::Size(34, 33);
			this->pictureDice6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureDice6->TabIndex = 9;
			this->pictureDice6->TabStop = false;
			this->pictureDice6->Visible = false;
			// 
			// labelResult
			// 
			this->labelResult->AutoSize = true;
			this->labelResult->Location = System::Drawing::Point(207, 272);
			this->labelResult->Name = L"labelResult";
			this->labelResult->Size = System::Drawing::Size(0, 12);
			this->labelResult->TabIndex = 10;
			// 
			// pictureWin
			// 
			this->pictureWin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureWin.Image")));
			this->pictureWin->Location = System::Drawing::Point(43, 251);
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
			this->pictureLose->Location = System::Drawing::Point(44, 251);
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
			this->ClientSize = System::Drawing::Size(304, 311);
			this->Controls->Add(this->pictureLose);
			this->Controls->Add(this->pictureWin);
			this->Controls->Add(this->labelResult);
			this->Controls->Add(this->pictureDice6);
			this->Controls->Add(this->pictureDice5);
			this->Controls->Add(this->pictureDice4);
			this->Controls->Add(this->pictureDice3);
			this->Controls->Add(this->pictureDice2);
			this->Controls->Add(this->pictureDice1);
			this->Controls->Add(this->radioButtonGusu);
			this->Controls->Add(this->radioButtonKisu);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"サイコロ予想ゲーム";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureWin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureLose))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//オプションボタン（ラジオボタン）の状態を確認
		if (this->radioButtonKisu->Checked == true) {
			System::Diagnostics::Debug::WriteLine("奇数が選択されました");
		}
		else if (this->radioButtonGusu->Checked == true) {
			System::Diagnostics::Debug::WriteLine("偶数が選択されました");
		}
		else {
			MessageBox::Show("奇数か偶数かを選んでください", "お願い");
			return;
		}

		//サイコロの目をランダムに生成
		Random^ randomDice;
		randomDice = gcnew Random();
		int diceNumber;
		diceNumber = randomDice->Next(1, 7);
		Debug::WriteLine("変数diceNumberの値は" + diceNumber.ToString() + "です");

		//サイコロを表示
		ShowDice(diceNumber);

		//勝敗を判定
		bool winFlg = IsWinGame(diceNumber);

		//勝敗に応じた画像を表示
		ShowPicture(winFlg);
	}

	private: System::Void ShowDice(int showDiceNumber) {
		//全部のサイコロを非表示
		this->pictureDice1->Visible = false;
		this->pictureDice2->Visible = false;
		this->pictureDice3->Visible = false;
		this->pictureDice4->Visible = false;
		this->pictureDice5->Visible = false;
		this->pictureDice6->Visible = false;
		//サイコロを表示
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
		//偶数か奇数のどちらを選んだか保存
		String^ selectedValue;
		if (radioButtonGusu->Checked == true) {
			selectedValue = "偶数";
		}
		else {
			selectedValue = "奇数";
		}
		//偶数か奇数のどちらの目が出たかを保存
		String^ resultValue;
		if (showDiceNumber % 2 == 0) {
			resultValue = "偶数";
		}
		else {
			resultValue = "奇数";
		}

		//予想と結果が一致するかで勝敗を判定
		if (selectedValue == resultValue) {
			//勝ち
			return true;
		}
		else {
			//負け
			return false;
		}
	}

	private: System::Void ShowPicture(bool winGame) {
		if (winGame) {
			this->labelResult->Text = "あたり！";
			this->labelResult->ForeColor = Color::Red;
			this->pictureWin->Visible = true;
			this->pictureLose->Visible = false;
			this->BackColor = Color::White;

		}
		else {
			this->labelResult->Text = "はずれ…";
			this->labelResult->ForeColor = Color::Black;
			this->pictureWin->Visible = false;
			this->pictureLose->Visible = true;
			this->BackColor = Color::LightGray;
		}
	}
private: System::Void MyForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	if (System::Windows::Forms::DialogResult::Cancel ==
		MessageBox::Show("ゲームを終了しますか？", "確認",
			MessageBoxButtons::OKCancel, MessageBoxIcon::Question))
	{
		e->Cancel = true;
	}
}
};
}
