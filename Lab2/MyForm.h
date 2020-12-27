#pragma once

namespace IllaLab2 {

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
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;


	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;





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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(59, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Размерность матрицы";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(59, 156);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Рабочее поле";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(394, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Результаты";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(62, 188);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(218, 126);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(62, 84);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(115, 30);
			this->textBox3->TabIndex = 5;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(397, 133);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(210, 131);
			this->textBox4->TabIndex = 6;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(62, 452);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(286, 63);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Заполнить диагональ матрицы максимальными элементами";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(62, 339);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(153, 55);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(397, 299);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(139, 46);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Очистить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(781, 28);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->openToolStripMenuItem,
					this->toolStripSeparator1, this->saveToolStripMenuItem, this->toolStripSeparator2, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::O));
			this->openToolStripMenuItem->Size = System::Drawing::Size(177, 26);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(174, 6);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(177, 26);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(174, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(177, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(781, 538);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Матрицы";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

			if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || (e->KeyChar == 8)|| (e->KeyChar == '-') || (e->KeyChar == ' ') ||

				(e->KeyChar == (char)Keys::Enter)) return;

			//Остальные символы запрещены

			e->Handled = true;

		}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}

private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = "";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox4->Text = "";
}
	   //-Реализация пункта меню "Открыть"

private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	System::Windows::Forms::DialogResult dr;

	String^ fn;

	openFileDialog1->FileName = String::Empty;

	// отобразить диалог Открыть

	dr = openFileDialog1->ShowDialog();

	if (dr == System::Windows::Forms::DialogResult::OK)

	{

		fn = openFileDialog1->FileName;

		try

		{

			// считываем данные из файла

			System::IO::StreamReader^ sr =

				gcnew System::IO::StreamReader(fn);

			textBox2->Text = sr->ReadToEnd();

			sr->Close();

		}

		catch (System::IO::FileLoadException ^ e)

		{

			MessageBox::Show("Ошибка ввода:\n" + e->Message,

				"Матрицы",

				MessageBoxButtons::OK,

				MessageBoxIcon::Error);

		}

	}

}

	   //-Реализация пункта меню "Сохранить"

private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	System::Windows::Forms::DialogResult dr;

	String^ fn;

	// отобразить диалог Сохранить

	dr = saveFileDialog1->ShowDialog();

	if (dr == System::Windows::Forms::DialogResult::OK)

	{

		fn = saveFileDialog1->FileName;

		// сохранить файл

		try

		{

			// получим информацию о файле fn

			System::IO::FileInfo^ fi =

				gcnew System::IO::FileInfo(fn);

			// поток для записи

			System::IO::StreamWriter^ sw =

				fi->CreateText();

			sw->Write(textBox2->Text);

			sw->Close(); // закрываем поток

		}

		catch (System::IO::IOException ^ e)

		{

			MessageBox::Show(e->ToString(),

				"Матрицы",

				MessageBoxButtons::OK,

				MessageBoxIcon::Error);

		}

	}

}

	   //-Реализация пункта меню "Выход"

private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Close();

}
	//Кнопка
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int n, m, i, j;

	String^ s = "";

	array<Char>^ ar;

	ar = gcnew array<Char>(1);

	ar[0] = ' ';
	if (textBox2->Lines->Length == 0)

	{

		MessageBox::Show("Введите матрицу !\n",

			"Ошибка",

			MessageBoxButtons::OK,

			MessageBoxIcon::Error);

		return;
	}
	array<int, 2>^ A;
	array<int>^ B;
	array<int, 2>^ C;
	bool check = true;

	
	if (textBox3->Text->Length)
		n = Convert::ToInt32(textBox3->Text);
	else {
		n = textBox2->Lines->Length;
		textBox3->Text = Convert::ToString(n);
	}
	for (int i = 0; i < n; i++) {
		if (textBox2->Lines[i]->Split(ar)->Length != n)
		{
			check = false;
			break;
		}
	}
	

	//Проверяем, что размеры матрицы из рабочего поля совпадают с размерами,

//введёнными в поля textBox2 и textBox3.

	if (textBox2->Lines->Length != n || !check)

	{

		MessageBox::Show("Матрица должна быть квадратной и размерность должна быть верной!\n",

			"Ошибка",

			MessageBoxButtons::OK,

			MessageBoxIcon::Error);

		return;

	}

	//Создаём динамическую вспомагательную матрицу А[n][m]

	A = gcnew array<int, 2>(n, n);
	C = gcnew array<int, 2>(n, n);
	//Заполняем матрицу А элементами рабочего поля (textBox1).

	array<String^>^ as;

	for (i = 0; i < n; i++)

	{

		as = textBox2->Lines[i]->Split(ar);

		for (j = 0; j < n; j++)

			A[i, j] = Convert::ToInt32(as[j]);

	}
	//Кнопка работы с матрицей
	int max, i_max, j_max;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (((!i) && (!j)) || (A[i,j] > max))
			{
				max = A[i,j];
				i_max = i;
				j_max = j;
			}
		}
	}
	A[i_max,j_max] = A[0,0];
	A[0,0] = max;
	for (int count = 1; count < n; ++count)
	{
		max = A[0,1];
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < n; ++j)
				if (((i != j) || ((i >= count) && (j >= count))) && (A[i,j] > max))
				{
					max = A[i,j];
					i_max = i;
					j_max = j;
				}
		A[i_max,j_max] = A[count,count];
		A[count,count] = max;
	}

	

	textBox4->Text = "";

	as = gcnew array<String^>(n);

	//Преобразованную матрицу А выводим в поле вывода результата (Memo2)

	//s="";

	for (i = 0; i < n; i++)

	{

		s = "";

		for (j = 0; j < n; j++)

			s += A[i, j].ToString() + " ";

		//s+="\n";

		//textBox2->Lines[i]=s;

		as[i] = s;

	}

	// textBox2->Text=s;

	textBox4->Lines = as;
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
