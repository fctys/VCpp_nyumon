#include "MyForm.h"

using namespace DiceGame;

[STAThreadAttribute]
int main() {
	Application::Run(gcnew MyForm());
	return 0;
}