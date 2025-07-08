#include "App.h"
#include "Frame.h"
#include <wx/wx.h>

wxIMPLEMENT_APP(App);
bool App::OnInit(){
	Frame* mainFrame = new Frame("Brodens DLL injector");
	mainFrame->Show();
	return true;

}
