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
	private: System::Windows::Forms::Label^  lblScore;
	private: System::Windows::Forms::Button^  btnReset;
	private: System::Windows::Forms::Button^  btnClose;
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
			this->label1->Text = L"ハイスコア";
			// 
			// lblScore
			// 
			this->lblScore->AutoSize = true;
			this->lblScore->Location = System::Drawing::Point(171, 13);
			this->lblScore->Name = L"lblScore";
			this->lblScore->Size = System::Drawing::Size(23, 12);
			this->lblScore->TabIndex = 1;
			this->lblScore->Text = L"0点";
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(12, 97);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(75, 23);
			this->btnReset->TabIndex = 2;
			this->btnReset->Text = L"リセット";
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
			this->btnClose->Text = L"閉じる";
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
				this->lblScore->Text = reader->ReadToEnd() + "点";
			}
			//Dice/datを閉じる
			reader->Close();
		}
		catch(System::IO::FileNotFoundException^ ex){
			//ファイルが存在しない場合、初期値0で新たなテキストファイルを作成
			System::IO::File::AppendAllText("./Dice.dat","0");
			System::Diagnostics::Debug::WriteLine("--エラーメッセージ---\n"+ex->Message);

		}
		finally{

		}
	}
private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void btnReset_Click(System::Object^  sender, System::EventArgs^  e) {
	//Dice.datを開く（存在しない場合は新規作成）
	System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter("./Dice.dat", false);
	//値として0をセット
	writer->Write("0");
	//Dice.datを閉じる
	writer->Close();
	//フォーム上の表示も「0点」に変更
	this->lblScore->Text = "0てん";
}
};
}
