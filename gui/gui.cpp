#include <wx/wx.h>
#include "Frame.h"

Frame::Frame(const wxString& title): wxFrame(nullptr, wxID_ANY, title){
	wxPanel* panel = new wxPanel(this);
wxButton* injectButton = new wxButton(panel, wxID_ANY, "Inject", wxPoint(150, 50) , wxSize(100,35));	
}

