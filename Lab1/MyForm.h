#pragma once
#include "MyForm1.h"
#include <iostream>
namespace illaLab1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;


	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(63, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ввести массив";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(66, 120);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(358, 32);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(66, 197);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(358, 94);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Найти произведение элементов массива, расположенных между максимальным по модулю "
				L"и минимальным по модулю элементами";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(655, 359);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Операция с массивом";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || (e->KeyChar <= '-')|| (e->KeyChar == 8) || (e->KeyChar == ' ') ||

			(e->KeyChar == (char)Keys::Enter)) return;

		//Остальные символы запрещены

		e->Handled = true;

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//int number = System::Convert::ToInt32(textBox1->Text);
		
		if (textBox1->Lines->Length == 0)

		{

			MessageBox::Show("Введите массив !\n",

				"Ошибка",

				MessageBoxButtons::OK,

				MessageBoxIcon::Error);

			return;

		}
		array<int>^ A;
		array<Char>^ ar;
		ar = gcnew array<Char>(1);
		ar[0] = ' ';
		array<String^>^ as;
		as = textBox1->Lines[0]->Split(ar);
		int n = textBox1->Lines[0]->Split(ar)->Length;
		A = gcnew array<int>(n);
		for (int i = 0; i < n; i++) {
			A[i] = Convert::ToInt32(as[i]);
		}
		int one = 0, second = 0;// One=0 если максимальный элемент стоит первым
		int maxim, minim;
		maxim = abs(A[0]);
		minim = abs(A[0]);

		for (int i = 1; i < n; i++)
		{
			if (maxim < abs(A[i]))
			{
				maxim = abs(A[i]);//нашел максимум
				one = i;
			}

			if (minim >= abs(A[i]))
			{
				minim = abs(A[i]);//нашел минимум
				second = i;
			}
		}
		int s = 1;
		if (one < second)//если максимальный элемент первее минимального, то выполняется цикл под условием
		{
			
			for (int j = one + 1; j < second; j++)
			{
				s *= A[j];
			}//считаем сумму меж макс. и миним.

		}
		else
		{

			for (int j = second + 1; j < one; j++)
			{
				s *= A[j];
			}//считаем сумму меж макс. и миним.
		}
		if (s == 1)s = 0;
		MyForm1^ f2 = gcnew MyForm1();
		f2->textBox1->Text = Convert::ToString(s);
		f2->Show();
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
