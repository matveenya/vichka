#include "MyForm.h"
#include "MyForm1.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	illaLab1::MyForm form;
	Application::Run(% form);
}
