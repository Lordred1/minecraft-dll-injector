#include <wx/wx.h>
#include "Frame.h"
enum IDs{
	injectBUTTON_ID = 2
};
int a;
int b;
wxBEGIN_EVENT_TABLE(Frame, wxFrame)
	EVT_BUTTON(injectBUTTON_ID, Frame::OnButtonClick)
wxEND_EVENT_TABLE()

Frame::Frame(const wxString& title): wxFrame(nullptr, wxID_ANY, title){
	wxPanel* injectButtonPanel = new wxPanel(this);
	wxButton* injectButton = new wxButton(injectButtonPanel, injectBUTTON_ID, "Inject", wxPoint(150, 50) , wxSize(100,35));	
}

void Frame::OnButtonClick(wxCommandEvent& evt){
	wxExecute("./testfile.sh");
}

