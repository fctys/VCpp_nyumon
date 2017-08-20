#include "MyForm.h"

using namespace Hello;

[STAThreadAttribute]
int main() {
	Application::Run(gcnew MyForm());
	return 0;
}