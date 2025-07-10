#include <wx/wx.h>
#include "Frame.h"

Frame::Frame(const wxString& title): wxFrame(nullptr, wxID_ANY, title){
	wxPanel* injectButtonPanel = new wxPanel(this);
	wxButton* injectButton = new wxButton(injectButtonPanel, wxID_ANY, "Inject", wxPoint(150, 50) , wxSize(100,35));
	injectButton->Bind(wxEVT_BUTTON, &Frame::OnButtonClick, this);
	CreateStatusBar();
}

void Frame::OnButtonClick(wxCommandEvent& evt){
	//wxExecute("./testfile.sh");
    long exitCode = wxExecute("./testfile.sh", wxEXEC_SYNC);
    if (exitCode != 0) {
        wxLogStatus("FAILED TO INJECT");
	}
}

