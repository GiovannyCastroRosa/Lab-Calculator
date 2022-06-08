#pragma once

#include "wx/wx.h"


class cMain : public wxFrame
{

public:
	cMain();
	~cMain();
	wxButton* m_btn1[20];
	wxTextCtrl* m_txt1 = nullptr;
	//wxListBox* m_list1 = nullptr;
	//wxButton* m_btn2 = nullptr;
	void OnButtonClicked0(wxCommandEvent& evt);
	void OnButtonClicked1(wxCommandEvent& evt);
	void OnButtonClicked2(wxCommandEvent& evt);
	void OnButtonClicked3(wxCommandEvent& evt);
	void OnButtonClicked4(wxCommandEvent& evt);
	void OnButtonClicked5(wxCommandEvent& evt);
	void OnButtonClicked6(wxCommandEvent& evt);
	void OnButtonClicked7(wxCommandEvent& evt);
	void OnButtonClicked8(wxCommandEvent& evt);
	void OnButtonClicked9(wxCommandEvent& evt);
	void OnButtonClickedEqual(wxCommandEvent& evt);
	void OnButtonClickedPlus(wxCommandEvent& evt);
	void OnButtonClickedMinus(wxCommandEvent& evt);
	void OnButtonClickedDot(wxCommandEvent& evt);
	void OnButtonClickedDiv(wxCommandEvent& evt);
	void OnButtonClickedC(wxCommandEvent& evt);
	void OnButtonClickedMod(wxCommandEvent& evt);
	void OnButtonClickedBi(wxCommandEvent& evt);
	void OnButtonClickedHe(wxCommandEvent& evt);
	void OnButtonClickedDec(wxCommandEvent& evt);
	wxDECLARE_EVENT_TABLE();

	
	
};

