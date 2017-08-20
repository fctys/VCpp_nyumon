#pragma once

namespace DiceGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// FormScore の概要
	/// </summary>
	public ref class FormScore : public System::Windows::Forms::Form
	{
	public:
		FormScore(void)
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
		~FormScore()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  labelScore;
	private: System::Windows::Forms::Button^  buttonReset;
	private: System::Windows::Forms::Button^  buttonClose;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelScore = (gcnew System::Windows::Forms::Label());
			this->buttonReset = (gcnew System::Windows::Forms::Button());
			this->buttonClose = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ハイスコア";
			// 
			// labelScore
			// 
			this->labelScore->AutoSize = true;
			this->labelScore->Location = System::Drawing::Point(181, 38);
			this->labelScore->Name = L"labelScore";
			this->labelScore->Size = System::Drawing::Size(23, 12);
			this->labelScore->TabIndex = 1;
			this->labelScore->Text = L"0点";
			// 
			// buttonReset
			// 
			this->buttonReset->Location = System::Drawing::Point(41, 104);
			this->buttonReset->Name = L"buttonReset";
			this->buttonReset->Size = System::Drawing::Size(75, 23);
			this->buttonReset->TabIndex = 2;
			this->buttonReset->Text = L"リセット";
			this->buttonReset->UseVisualStyleBackColor = true;
			this->buttonReset->Click += gcnew System::EventHandler(this, &FormScore::buttonReset_Click);
			// 
			// buttonClose
			// 
			this->buttonClose->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->buttonClose->Location = System::Drawing::Point(183, 104);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(75, 23);
			this->buttonClose->TabIndex = 3;
			this->buttonClose->Text = L"閉じる";
			this->buttonClose->UseVisualStyleBackColor = true;
			this->buttonClose->Click += gcnew System::EventHandler(this, &FormScore::buttonClose_Click);
			// 
			// FormScore
			// 
			this->AcceptButton = this->buttonClose;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->buttonClose;
			this->ClientSize = System::Drawing::Size(284, 161);
			this->Controls->Add(this->buttonClose);
			this->Controls->Add(this->buttonReset);
			this->Controls->Add(this->labelScore);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"FormScore";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"ハイスコア";
			this->Load += gcnew System::EventHandler(this, &FormScore::FormScore_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormScore_Load(System::Object^  sender, System::EventArgs^  e) {
		try {
			//スコア記録用のDice.datを開く
			System::IO::StreamReader^ reader = gcnew System::IO::StreamReader("./Dice.dat");
			//Dice.datに中身がある場合、その値をラベルにセット
			if (!reader->EndOfStream) {
				this->labelScore->Text = reader->ReadToEnd() + "点";
			}
			//Dice.datを閉じる
			reader->Close();
		}
		catch (System::IO::FileNotFoundException^ ex) {
			//ファイルが存在しない場合、初期値0で新たなテキストを作成
			System::IO::File::AppendAllText("./Dice.dat", "0");
			System::Diagnostics::Debug::WriteLine("---エラーメッセージ---\n" + ex->Message);
		}
	}
private: System::Void buttonClose_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void buttonReset_Click(System::Object^  sender, System::EventArgs^  e) {
	//Dice.datを開く（存在しない場合は新規作成）
	System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter("./Dice.dat", false);
	//値として0をセット
	writer->Write("0");
	//Dice.datを閉じる
	writer->Close();
	//フォーム上の表示も「0点」に変更
	this->labelScore->Text = "0点";
}
};
}
