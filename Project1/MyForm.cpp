#include "MyForm.h"
#include "Figure.h"
#include "FigureList.h"
#include <Windows.h>
#include "Line.h"
//#include <stdio.h>

#pragma comment(lib, "user32.lib")

using namespace System;
using namespace System::Windows::Forms;

void ListCreate();

[STAThreadAttribute]
void main() { //void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project1::MyForm form;
	Application::Run(% form);

	
}

void ListCreate()
{
	FigureList newList;
	Line theLine;
	newList.AddFigure(&theLine);


}

