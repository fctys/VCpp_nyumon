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
	private: System::Windows::Forms::Button^  buttonOK;
	private: System::Windows::Forms::Button^  buttonCancel;
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
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"サイコロのころがる間隔（ミリ秒）";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(168, 26);
			this->textBox1->MaxLength = 4;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 19);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// buttonOK
			// 
			this->buttonOK->Location = System::Drawing::Point(14, 67);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(75, 23);
			this->buttonOK->TabIndex = 2;
			this->buttonOK->Text = L"OK";
			this->buttonOK->UseVisualStyleBackColor = true;
			this->buttonOK->Click += gcnew System::EventHandler(this, &FormOption::buttonOK_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->buttonCancel->Location = System::Drawing::Point(193, 67);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(75, 23);
			this->buttonCancel->TabIndex = 3;
			this->buttonCancel->Text = L"キャンセル";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &FormOption::buttonCancel_Click);
			// 
			// FormOption
			// 
			this->AcceptButton = this->buttonOK;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->buttonCancel;
			this->ClientSize = System::Drawing::Size(284, 111);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonOK);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"FormOption";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"環境設定";
			this->Load += gcnew System::EventHandler(this, &FormOption::FormOption_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
			// フィールド
			int _diceTimer;
		public:
			// プロパティ
			property int DiceTimer
			{
				int get() {
					return _diceTimer;
				}
				void set(int _newDiceTimer) {
					if (_newDiceTimer < 1) {
						throw gcnew Exception("Intervalは1以上を設定してください。");
					}
					_diceTimer = _newDiceTimer;
				}
			}
	private: System::Void FormOption_Load(System::Object^  sender, System::EventArgs^  e) {
		//タイマーの設定をテキストボックスに表示
		this->textBox1->Text = Convert::ToString(this->DiceTimer);
	}
private: System::Void buttonOK_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		//テキストを数値に変換してプロパティに設定
		this->DiceTimer = Convert::ToInt32(this->textBox1->Text);
		this->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("正しい数値を設定してください",
			"注意", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		System::Diagnostics::Debug::WriteLine("---エラーメッセージ---\n" + ex->Message);
	}
	finally {
		System::Diagnostics::Debug::WriteLine("------");
	}
}
private: System::Void buttonCancel_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
