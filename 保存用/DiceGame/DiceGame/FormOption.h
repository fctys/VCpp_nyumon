#pragma once

namespace DiceGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// FormOption の概要
	/// </summary>
	public ref class FormOption : public System::Windows::Forms::Form
	{
	public:
		FormOption(void)
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
		~FormOption()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  btnOK;
	private: System::Windows::Forms::Button^  btnCancel;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"サイコロの転がる間隔（ミリ秒）";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(163, 10);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 19);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(12, 51);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(75, 23);
			this->btnOK->TabIndex = 2;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &FormOption::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnCancel->Location = System::Drawing::Point(188, 51);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 3;
			this->btnCancel->Text = L"キャンセル";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &FormOption::btnCancel_Click);
			// 
			// FormOption
			// 
			this->AcceptButton = this->btnOK;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->btnCancel;
			this->ClientSize = System::Drawing::Size(292, 273);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"FormOption";
			this->Text = L"FormOption";
			this->Load += gcnew System::EventHandler(this, &FormOption::FormOption_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		//フィールド
		int _diceTimer;
	public:
		//プロパティ
		property int DiceTimer {
			int get() {
				return _diceTimer;
			}
			void set(int _newDiceTimer) {
				if (_newDiceTimer < 1) {
					throw gcnew Exception("Intervalは1以上を設定してください");

				}
				_diceTimer = _newDiceTimer;
			}
		}
	
	private: System::Void FormOption_Load(System::Object^  sender, System::EventArgs^  e) {
		//タイマーの設定をテキストボックスに表示
		this->textBox1->Text = Convert::ToString(this->DiceTimer);
	}
private: System::Void btnOK_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		//テキストを数値に変換してプロパティに設定
		this->DiceTimer = Convert::ToInt32(this->textBox1->Text);
		this->Close();
	}catch(Exception^ ex){
		MessageBox::Show("正しい数値を設定して下さい", "", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		System::Diagnostics::Debug::WriteLine("--エラーメッセージ---\n"+ex->Message);
	}
	finally{
		System::Diagnostics::Debug::WriteLine("------");
	}
}
private: System::Void btnCancel_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
