#pragma once

#include "wx/wx.h"
#include "ButtonFactory.h"

class cMain : public wxFrame
{

public:
	cMain();
	~cMain();
	wxButton* m_btn1[20];
	wxTextCtrl* m_txt1 = nullptr;
	ButtonFactory factory;
	void OnButtonClicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();

	
	
};

