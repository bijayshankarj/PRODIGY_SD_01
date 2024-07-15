#include "TempConversion.h"

using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TemperatureConverter::TempConversion form;
	Application::Run(% form);
}
