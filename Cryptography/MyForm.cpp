#include "MyForm.h"
using namespace System;
[STAThreadAttribute]

int main() {

	Windows::Forms::Application::EnableVisualStyles();
	Windows::Forms::Application::Run(gcnew Cryptography::MyForm());
	return 0;
}