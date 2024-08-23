#include "calculadora.h"

using namespace Calculadora;

[STAThreadAttribute]

int main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew calculadora());
	return 0;
}

