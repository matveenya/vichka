#pragma once

namespace clrlab3 {

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox6;
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(407, 149);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(339, 228);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(71, 490);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(224, 48);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Показать графики";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(74, 229);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(79, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(216, 229);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(82, 22);
			this->textBox2->TabIndex = 3;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(71, 149);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(317, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Показать графики на области опредения икса";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(71, 188);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"от:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(216, 188);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"до:";
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(407, 427);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(201, 48);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(216, 319);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 17);
			this->label4->TabIndex = 12;
			this->label4->Text = L"до:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(71, 319);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 17);
			this->label5->TabIndex = 11;
			this->label5->Text = L"от:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(71, 280);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(216, 17);
			this->label6->TabIndex = 10;
			this->label6->Text = L"На множестве значений игрека";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(74, 355);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(82, 22);
			this->textBox3->TabIndex = 9;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(216, 355);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(79, 22);
			this->textBox4->TabIndex = 8;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(68, 18);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(394, 81);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Представлены следующие графики:\r\ny = sin x + cos x\r\np= b + a*cos φ\r\n";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(74, 440);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(82, 22);
			this->textBox5->TabIndex = 14;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(71, 405);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(154, 17);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Для параметров a и b";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(216, 440);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(82, 22);
			this->textBox6->TabIndex = 16;
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);

			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(955, 561);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Построение графиков";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	//private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	//}
	private:

		int l, h, w;




	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || (e->KeyChar <= ',') || (e->KeyChar == 8) || (e->KeyChar == '-') || (e->KeyChar == ' ') ||
		(e->KeyChar == (char)Keys::Enter))  return;
	//Остальные символы запрещены
	e->Handled = true;
}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		button2->Enabled = true;
		double x1, x2, y1, y2, x, y, ymin, ymax, mx, my, dx;
		h = pictureBox1->Height;            // Ширина 

		w = pictureBox1->Width;             // Высота 
		if (textBox1->Text->Length && textBox2->Text->Length && textBox3->Text->Length && textBox4->Text->Length &&
			textBox5->Text->Length && textBox6->Text->Length) {
			x1 = System::Convert::ToDouble(textBox1->Text);    // from 

			x2 = System::Convert::ToDouble(textBox2->Text);    // to 



			dx = 0.001;     // step 



			y1 = System::Convert::ToDouble(textBox3->Text);

			y2 = System::Convert::ToDouble(textBox4->Text);
		}
		else {

			MessageBox::Show("Введите область опредедления и множество значений функции !\n",

				"Ошибка",

				MessageBoxButtons::OK,

				MessageBoxIcon::Error);

			return;
		}
		if (y1 >= y2 || x1 >= x2)

		{

			MessageBox::Show("Неверные область определения или множество значений функции !\n",

				"Ошибка",

				MessageBoxButtons::OK,

				MessageBoxIcon::Error);

			return;
		}


		// Osi 

		pictureBox1->CreateGraphics()->DrawLine(Pens::Black, 0, h / 2, w, h / 2);

		pictureBox1->CreateGraphics()->DrawLine(Pens::Black, w / 2, 0, w / 2, h);



		// Strelki 



		pictureBox1->CreateGraphics()->DrawLine(Pens::Black, w - 25, h / 2 + 8, w, h / 2);

		pictureBox1->CreateGraphics()->DrawLine(Pens::Black, w - 25, h / 2 - 8, w, h / 2);

		pictureBox1->CreateGraphics()->DrawLine(Pens::Black, w / 2 - 8, 25, w / 2, 0);

		pictureBox1->CreateGraphics()->DrawLine(Pens::Black, w / 2 + 8, 25, w / 2, 0);





		// Podpisi 

		pictureBox1->CreateGraphics()->DrawString("X", this->Font, Brushes::Black, w - 15, h / 2 - 25);

		pictureBox1->CreateGraphics()->DrawString("Y", this->Font, Brushes::Black, w / 2 - 25, 5);
		
	

		


		



		my = h/ 18;           // mashtab po osi y

		mx = w / 18;                 // mashtab po osi x 



		x = x1;

		// График 

		ymin = Math::Sin(x1) + Math::Cos(x1);

		while (x <= x2)

		{

			y = Math::Sin(x) + Math::Cos(x);
			if(y > y1 && y < y2 )
			pictureBox1->CreateGraphics()->DrawLine(Pens::Red, (int)(x1 * mx + w / 2), (int)(h / 2 - ymin * my), (int)(x * mx + w / 2), (int)(h / 2 - y * my));
			x1 = x;

			ymin = y;

			x += dx;

		}
		double dt = 0.001;
		double a = System::Convert::ToDouble(textBox5->Text);
		double b = System::Convert::ToDouble(textBox6->Text);
		double t = 0;
		double xmin = Math::Cos(t)*(b + a * Math::Cos(t));
		ymin = Math::Sin(t) * (b + a * Math::Cos(t));

		
		// График 

		x1 = System::Convert::ToDouble(textBox1->Text);    // from 

		x2 = System::Convert::ToDouble(textBox2->Text);

		
		while (t <= Math::PI * 2)

		{

			x  = Math::Cos(t) * (b + a * Math::Cos(t));
			y = Math::Sin(t) * (b + a * Math::Cos(t));
			
				pictureBox1->CreateGraphics()->DrawLine(Pens::Green, (int)(xmin * mx + w / 2), (int)(h / 2 - ymin * my), (int)(x * mx + w / 2), (int)(h / 2 - y * my));

			xmin = x;

			ymin = y;

			t += dt;

		}



	}
private: System::Void pictureBox1_Paint(System::Object ^ sender, System::Windows::Forms::PaintEventArgs ^ e) {

}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Invalidate();
	button2->Enabled = false;
}

private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
