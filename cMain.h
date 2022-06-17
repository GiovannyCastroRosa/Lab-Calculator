#pragma once

#include "wx/wx.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"

class cMain : public wxFrame
{

public:
	cMain();
	~cMain();
	std::string fNum;
	int tLine;
	std::string func;
	std::string sNum;
	wxButton* m_btn1[20];
	wxTextCtrl* m_txt1 = nullptr;
	ButtonFactory factory;
	void OnButtonClicked(wxCommandEvent& evt);
	void Calculation();
	wxDECLARE_EVENT_TABLE();

	
	
};

