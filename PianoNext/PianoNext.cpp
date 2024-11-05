#include "PianoNext.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ mega) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PianoNext::PianoNext form;
	Application::Run(% form);
}
