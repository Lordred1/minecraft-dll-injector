#pragma once
#include <wx/wx.h>
class Frame : public wxFrame
{
public:
	Frame(const wxString& title);
private:
	void OnButtonClick(wxCommandEvent& evt);
};
