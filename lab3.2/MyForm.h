#pragma once

namespace clrlab32 {

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
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label10;



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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(525, 46);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(547, 415);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(192, 286);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 17);
			this->label4->TabIndex = 23;
			this->label4->Text = L"до:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(47, 286);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 17);
			this->label5->TabIndex = 22;
			this->label5->Text = L"от:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(47, 247);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(216, 17);
			this->label6->TabIndex = 21;
			this->label6->Text = L"На множестве значений игрека";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(50, 322);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(82, 22);
			this->textBox3->TabIndex = 20;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(192, 322);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(79, 22);
			this->textBox4->TabIndex = 19;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(192, 155);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 17);
			this->label3->TabIndex = 18;
			this->label3->Text = L"до:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(47, 155);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 17);
			this->label2->TabIndex = 17;
			this->label2->Text = L"от:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(47, 116);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(317, 17);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Показать графики на области опредения икса";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(192, 196);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(82, 22);
			this->textBox2->TabIndex = 15;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(50, 196);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(79, 22);
			this->textBox1->TabIndex = 14;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(50, 513);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(224, 48);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Показать поверхность";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(192, 403);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(28, 17);
			this->label7->TabIndex = 28;
			this->label7->Text = L"до:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(47, 403);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(27, 17);
			this->label8->TabIndex = 27;
			this->label8->Text = L"от:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(47, 364);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(179, 17);
			this->label9->TabIndex = 26;
			this->label9->Text = L"На множестве значений z";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(50, 439);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(82, 22);
			this->textBox5->TabIndex = 25;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(192, 439);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(79, 22);
			this->textBox6->TabIndex = 24;
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(525, 513);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(201, 48);
			this->button2->TabIndex = 29;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(45, 40);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(236, 54);
			this->label10->TabIndex = 30;
			this->label10->Text = L"Представлен график:\r\nz = xy/(x^2+y^2)";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1247, 671);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:

			static double x0 = 4, Y0 = -0.5, z0 = 3, alf = 4.31, bet = 4.92, A = -6.5, a = -6.5;

			static double Xmin = -1.5, Xmax = 1.5, Ymin = -1.5, Ymax = 1.5;

			static int Width = 170, Height = 170;

			static double h = 0.1, h0 = 0.25;

			static array<Point>^ ob = gcnew array<Point>(4);
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		pictureBox1->Invalidate();
		button2->Enabled = false;
	}
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			   if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || (e->KeyChar <= ',') || (e->KeyChar == 8) || (e->KeyChar == '-') || (e->KeyChar == ' ') ||
				   (e->KeyChar == (char)Keys::Enter))  return;
			   //Остальные символы запрещены
			   e->Handled = true;
	}
private: void IJ(double x, double y, double z, array<int>^ ar)

{

	double Xn, Yn, Zn;



	//Осуществляем перенос системы координат в т.(x0,Y0,z0) 

	Xn = (x - x0) * Math::Cos(alf) - (y - Y0) * Math::Sin(alf);

	Yn = ((x - x0) * Math::Sin(alf) + (y - Y0) * Math::Cos(alf)) * Math::Cos(bet) - (z - z0) * Math::Sin(bet);

	Zn = ((x - x0) * Math::Sin(alf) + (y - Y0) * Math::Cos(alf)) * Math::Sin(bet) + (z - z0) * Math::Cos(bet);



	//Делаем проекцию на плоскость 

	Xn /= Zn / A + 1;

	Yn /= Zn / a + 1;



	//Масштабируем оси x и y 

	ar[0] = Width * (Xn - Xmin) / (Xmax - Xmin);

	ar[1] = Height * (Yn - Ymax) / (Ymin - Ymax);

}
	   private: double F1(double x1, double y1)

	   {

		   return (x1 * y1) / (x1 * x1 + y1 * y1);

	   }
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	button2->Enabled = true;
	double x1, x2, y1, y2, z1, z2, p ,q;
	if (textBox1->Text->Length && textBox2->Text->Length && 
		textBox3->Text->Length && textBox4->Text->Length &&
		textBox5->Text->Length && textBox6->Text->Length
		) {
		x1 = System::Convert::ToDouble(textBox1->Text)*7;    // from 

		x2 = System::Convert::ToDouble(textBox2->Text)*7;    // to 

		y1 = System::Convert::ToDouble(textBox3->Text)*7;

		y2 = System::Convert::ToDouble(textBox4->Text)*7;

		z1 = System::Convert::ToDouble(textBox5->Text);

		z2 = System::Convert::ToDouble(textBox6->Text);

		
	}
	else {

		MessageBox::Show("Введите верные значения x ,y ,z!\n",

			"Ошибка",

			MessageBoxButtons::OK,

			MessageBoxIcon::Error);

		return;
	}
	if (y1 >= y2 || x1 >= x2 || z1 >= z2)

	{

		MessageBox::Show("Неверные x, y, z!\n",

			"Ошибка",

			MessageBoxButtons::OK,

			MessageBoxIcon::Error);

		return;
	}
	int i3, j3;

	int i1, j1, i2, j2;

	array<int>^ a1;

	array<int>^ a2;

	a1 = gcnew array<int>(2);

	a2 = gcnew array<int>(2);

	IJ(0, 0, 0, a1);



	//Рисуем и подписываем ось x 

	IJ(5, 0, 0, a2);

	pictureBox1->CreateGraphics()->DrawLine(Pens::Red, a1[0], a1[1], a2[0], a2[1]);

	pictureBox1->CreateGraphics()->DrawString("X", this->Font, Brushes::Red, a2[0] + 3, a2[1]);



	//Рисуем и подписываем ось y 

	IJ(0, 5, 0, a2);

	pictureBox1->CreateGraphics()->DrawLine(Pens::Red, a1[0], a1[1], a2[0], a2[1]);

	pictureBox1->CreateGraphics()->DrawString("Y", this->Font, Brushes::Red, a2[0] + 3, a2[1]);



	//Рисуем и подписываем ось z 

	IJ(0, 0, 4, a2);

	pictureBox1->CreateGraphics()->DrawLine(Pens::Red, a1[0], a1[1], a2[0], a2[1]);

	pictureBox1->CreateGraphics()->DrawString("Z", this->Font, Brushes::Red, a2[0]+5, a2[1]+4);

	for (j3 = y1; j3 <= y2; j3++)

	{

		for (i3 = x1; i3 < x2; i3++)

		{

			IJ(h0 + h * i3, h0 + h * j3, F1(h0 + h * i3, h0 + h * j3), a1);

			ob[0].X = a1[0];

			ob[0].Y = a1[1];

			IJ(h0 + h * i3, h0 + h * (j3 + 1), F1(h0 + h * i3, h0 + h * (j3 + 1)), a1);

			ob[1].X = a1[0];

			ob[1].Y = a1[1];

			IJ(h0 + h * (i3 + 1), h0 + h * (j3 + 1), F1(h0 + h * (i3 + 1), h0 + h * (j3 + 1)), a1);

			ob[2].X = a1[0];

			ob[2].Y = a1[1];

			IJ(h0 + h * (i3 + 1), h0 + h * j3, F1(h0 + h * (i3 + 1), h0 + h * j3), a1);

			ob[3].X = a1[0];

			ob[3].Y = a1[1];
			if(F1(h0 + h * i3, h0 + h * j3) >= z1 && F1(h0 + h * i3, h0 + h * j3) <= z2)
			pictureBox1->CreateGraphics()->DrawPolygon(Pens::Blue, ob);

		}

	}
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
