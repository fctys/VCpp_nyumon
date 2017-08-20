#include "MyForm.h"
#include "FormOption.h"


using namespace DiceGame;

[STAThreadAttribute]
int main() {
	Application::Run(gcnew MyForm());
	//Application::Run(gcnew FormOption());
	return 0;
}