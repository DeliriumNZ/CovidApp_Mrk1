#include "Login.h"
#include "Register.h"
#include <fstream>
#include <iostream>

using namespace System;

using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args)

{

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    TaxiApp::Login form;

    Application::Run(% form);

}