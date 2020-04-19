#include "MyForm.h"

#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:main")
using namespace System;
using namespace System::Windows::Forms;
int main()
{
	Projeto_OpenCV::MyForm form;
	Application::Run(%form);
}