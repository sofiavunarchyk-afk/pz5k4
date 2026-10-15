#pragma once
#include <string>
#using <Microsoft.VisualBasic.dll>
namespace pz5k4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox4;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1581, 913);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button9);
			this->tabPage1->Controls->Add(this->button8);
			this->tabPage1->Controls->Add(this->button7);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->listBox2);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1573, 880);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завдання3";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(655, 546);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(329, 122);
			this->button9->TabIndex = 5;
			this->button9->Text = L"Обчислити";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(948, 360);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(321, 120);
			this->button8->TabIndex = 4;
			this->button8->Text = L"Видалити елементи стеку";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(948, 215);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(321, 114);
			this->button7->TabIndex = 3;
			this->button7->Text = L"Додати елементи стеку";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(555, 97);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(304, 26);
			this->textBox4->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(188, 87);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(337, 37);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Введіть розмір стеку";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 20;
			this->listBox2->Location = System::Drawing::Point(98, 182);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(498, 384);
			this->listBox2->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->listBox1);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1573, 880);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завдання 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(599, 567);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(297, 133);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Обчислити";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(913, 376);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(304, 135);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Видалити елементи стеку";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(913, 176);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(304, 125);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Додати значення стеку";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(581, 67);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(352, 26);
			this->textBox3->TabIndex = 2;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(81, 176);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(490, 364);
			this->listBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(168, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(317, 37);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Введіть розмір стеку";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->textBox2);
			this->tabPage3->Controls->Add(this->button2);
			this->tabPage3->Controls->Add(this->checkedListBox1);
			this->tabPage3->Controls->Add(this->button1);
			this->tabPage3->Controls->Add(this->label1);
			this->tabPage3->Controls->Add(this->textBox1);
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1573, 880);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Завдання 1";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabPage3->Click += gcnew System::EventHandler(this, &MyForm::tabPage3_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(729, 559);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(323, 82);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Очистити текст";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(962, 452);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(240, 26);
			this->textBox2->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(601, 413);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(292, 104);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Додати нові значення";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Верхній елемент стеку", L"Кількість елементів в стеці",
					L"pop"
			});
			this->checkedListBox1->Location = System::Drawing::Point(615, 76);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(587, 280);
			this->checkedListBox1->TabIndex = 3;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::checkedListBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(115, 545);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(247, 77);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Ввести стек";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(684, 738);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 20);
			this->label1->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(116, 32);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(246, 458);
			this->textBox1->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1581, 913);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		System::Collections::Generic::Stack<int>numbersStack;
		System::Collections::Generic::Stack<int>myStack1;
		System::Collections::Generic::Stack<String^>StrStack;
	private: System::Void tabPage3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	numbersStack.Push(10);
	numbersStack.Push(20);
	numbersStack.Push(30);

	textBox1->Clear();
	for each (int number in numbersStack) {
		textBox1->AppendText(number.ToString() + "\r\n");
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int number;
	number = Convert::ToInt32(textBox2->Text);

	numbersStack.Push(number);

	textBox1->Clear();

	for each (int num in numbersStack) {
		textBox1->AppendText(num.ToString() + "\r\n");
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	numbersStack.Clear();

	textBox1->Clear();

	if (numbersStack.Count == 0) {
		MessageBox::Show("Стек порожній.");
	}
	else {
		MessageBox::Show("Стек не порожній.");
	}
}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkedListBox1->GetItemChecked(0)) { // "Верхній елемент стеку"
		if (numbersStack.Count > 0) {
			MessageBox::Show("Поточний верхній елемент: " + numbersStack.Peek().ToString());
		}
		else {
			MessageBox::Show("Стек пустий.");
		}
	}
	else if (checkedListBox1->GetItemChecked(1)) { // "Кількість елементів в стеці"
		int count = numbersStack.Count;
		MessageBox::Show("Кількість елементів у стеку: " + count.ToString());
	}
	else if (checkedListBox1->GetItemChecked(2)) { // "pop"
		if (numbersStack.Count > 0) {
			int removedElement = numbersStack.Pop();
			MessageBox::Show("Видалено верхній елемент: " + removedElement.ToString());
		}
		else {
			MessageBox::Show("Не можна видалити, стек пустий.");
		}
	}

	textBox1->Clear();

	for each (int num in numbersStack) {
		textBox1->AppendText(num.ToString() + "\r\n");
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int size = Convert::ToInt32(textBox3->Text);

	for (int i = 0; i < size; ++i) {

		int inputValue = Convert::ToInt32(Microsoft::VisualBasic::Interaction::InputBox("Елемент стеку", "Введіть значення елементів стеку", "", 200, 200));

		myStack1.Push(inputValue);

		listBox1->Items->Insert(0, inputValue.ToString());
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (myStack1.Count > 0) {
		myStack1.Pop();
		listBox1->Items->Clear();
		for each (int value in myStack1)
		{
			listBox1->Items->Add(value.ToString());
		}
	}
	else
	{
		listBox1->Items->Add(" Стек порожній");
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	int count = 0;
	int sum = 0;
	int evenCount = 0;

	for each (int value in myStack1) {

		if (value % 2 == 0 && value >= 10 && value <= 20) {
			sum += value;
			evenCount++;
		}
	}

	if (evenCount > 0) {
		double average = (double)sum / evenCount;
		MessageBox::Show("Середнє значення парних чисел у діапазоні від 10 до 20: " + average.ToString(), "Результат");
	}
	else {
		MessageBox::Show("Немає парних чисел у діапазоні від 10 до 20.", "Результат");
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	int size = Convert::ToInt32(textBox4->Text);

	for (int i = 0; i < size; ++i) {

		String^ inputValue = Microsoft::VisualBasic::Interaction::InputBox("Елемент стеку", "Введіть значення елементів стеку", "", 200, 200);

		StrStack.Push(inputValue);

		listBox2->Items->Insert(0, inputValue);
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (StrStack.Count > 0) {
		StrStack.Pop();
		listBox2->Items->Clear();
		for each (String ^ value in StrStack)
		{
			listBox2->Items->Add(value);
		}
	}
	else
	{
		listBox2->Items->Add(" Стек порожній");
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	int totalChars = 0;

	for each (String ^ str in StrStack) {
		totalChars += str->Length;
	}

	MessageBox::Show("Загальна кількість символів у всіх рядках: " + totalChars.ToString(), "Результат");
}
};
}
