#include "cMain.h"


wxBEGIN_EVENT_TABLE(cMain, wxFrame)

EVT_BUTTON(10001, OnButtonClicked0)
EVT_BUTTON(10002, OnButtonClicked1)
EVT_BUTTON(10003, OnButtonClicked2)
EVT_BUTTON(10004, OnButtonClicked3)
EVT_BUTTON(10005, OnButtonClicked4)
EVT_BUTTON(10006, OnButtonClicked5)
EVT_BUTTON(10007, OnButtonClicked6)
EVT_BUTTON(10008, OnButtonClicked7)
EVT_BUTTON(10009, OnButtonClicked8)
EVT_BUTTON(10010, OnButtonClicked9)
EVT_BUTTON(10011, OnButtonClickedEqual)
EVT_BUTTON(10012, OnButtonClickedPlus)
EVT_BUTTON(10013, OnButtonClickedMinus)
EVT_BUTTON(10014, OnButtonClickedDiv)
EVT_BUTTON(10015, OnButtonClickedDot)
EVT_BUTTON(10016, OnButtonClickedC)
EVT_BUTTON(10017, OnButtonClickedMod)
EVT_BUTTON(10018, OnButtonClickedBi)
EVT_BUTTON(10019, OnButtonClickedHe)
EVT_BUTTON(10020, OnButtonClickedDec)


wxEND_EVENT_TABLE()



cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(490, 690))
{
	//numbers
	m_btn1[0] = new wxButton(this, 10001, "0", wxPoint(40, 575), wxSize(195, 85));
	m_btn1[1] = new wxButton(this, 10002, "1", wxPoint(40, 480), wxSize(95, 95));
	m_btn1[2] = new wxButton(this, 10003, "2", wxPoint(138, 480), wxSize(95, 95));
	m_btn1[3] = new wxButton(this, 10004, "3", wxPoint(235, 480), wxSize(95, 95));
	m_btn1[4] = new wxButton(this, 10005, "4", wxPoint(40, 380), wxSize(95, 95));
	m_btn1[5] = new wxButton(this, 10006, "5", wxPoint(138, 380), wxSize(95, 95));
	m_btn1[6] = new wxButton(this, 10007, "6", wxPoint(235, 380), wxSize(95, 95));
	m_btn1[7] = new wxButton(this, 10008, "7", wxPoint(40, 280), wxSize(95, 95));
	m_btn1[8] = new wxButton(this, 10009, "8", wxPoint(138, 280), wxSize(95, 95));
	m_btn1[9] = new wxButton(this, 10010, "9", wxPoint(235, 280), wxSize(95, 95));

	//functions
	m_btn1[10] = new wxButton(this, 10011, "=", wxPoint(238, 575), wxSize(195, 85));
	m_btn1[11] = new wxButton(this, 10012, "+", wxPoint(335, 480), wxSize(95, 95));
	m_btn1[12] = new wxButton(this, 10013, "-", wxPoint(335, 380), wxSize(95, 95));
	m_btn1[13] = new wxButton(this, 10014, "/", wxPoint(335, 280), wxSize(95, 95));
	m_btn1[14] = new wxButton(this, 10015, "*", wxPoint(335, 190), wxSize(95, 95));
	m_btn1[15] = new wxButton(this, 10016, "C", wxPoint(40, 193), wxSize(195, 85));
	m_btn1[16] = new wxButton(this, 10017, "mod", wxPoint(235, 193), wxSize(95, 85));
	m_btn1[17] = new wxButton(this, 10018, "Binary", wxPoint(110, 145), wxSize(90, 50));
	m_btn1[18] = new wxButton(this, 10019, "Hex", wxPoint(200, 145), wxSize(90, 50));
	m_btn1[19] = new wxButton(this, 10020, "Decimal", wxPoint(290, 145), wxSize(90, 50));

	
	m_txt1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(50, 50), wxSize(390, 90));

	

}

cMain::~cMain()
{

}
		
void cMain::OnButtonClicked0(wxCommandEvent& evt)
{
	
	m_txt1->AppendText(m_btn1[0]->GetLabel());
	evt.Skip();
}

	
void cMain::OnButtonClicked1(wxCommandEvent& evt)
{

	m_txt1->AppendText(m_btn1[1]->GetLabel());
	evt.Skip();
}


void cMain::OnButtonClicked2(wxCommandEvent& evt)
{

	m_txt1->AppendText(m_btn1[2]->GetLabel());
	evt.Skip();
}

void cMain::OnButtonClicked3(wxCommandEvent& evt)
{

	m_txt1->AppendText(m_btn1[3]->GetLabel());
	evt.Skip();
}

void cMain::OnButtonClicked4(wxCommandEvent& evt)
{

	m_txt1->AppendText(m_btn1[4]->GetLabel());
	evt.Skip();
}

void cMain::OnButtonClicked5(wxCommandEvent& evt)
{

	m_txt1->AppendText(m_btn1[5]->GetLabel());
	evt.Skip();
}

void cMain::OnButtonClicked6(wxCommandEvent& evt)
{

	m_txt1->AppendText(m_btn1[6]->GetLabel());
	evt.Skip();
}

void cMain::OnButtonClicked7(wxCommandEvent& evt)
{

	m_txt1->AppendText(m_btn1[7]->GetLabel());
	evt.Skip();
}

void cMain::OnButtonClicked8(wxCommandEvent& evt)
{

	m_txt1->AppendText(m_btn1[8]->GetLabel());
	evt.Skip();
}

void cMain::OnButtonClicked9(wxCommandEvent& evt)
{

	m_txt1->AppendText(m_btn1[9]->GetLabel());
	evt.Skip();
}

void cMain::OnButtonClickedEqual(wxCommandEvent& evt)
{

	m_txt1->AppendText(m_btn1[10]->GetLabel());
	evt.Skip();
}
void cMain::OnButtonClickedPlus(wxCommandEvent& evt)
{

	m_txt1->AppendText(m_btn1[11]->GetLabel());
	evt.Skip();
}

void cMain::OnButtonClickedMinus(wxCommandEvent& evt)
{

	m_txt1->AppendText(m_btn1[12]->GetLabel());
	evt.Skip();
}

void cMain::OnButtonClickedDot(wxCommandEvent& evt)
{

	m_txt1->AppendText(m_btn1[14]->GetLabel());
	evt.Skip();
}

void cMain::OnButtonClickedDiv(wxCommandEvent& evt)
{

	m_txt1->AppendText(m_btn1[13]->GetLabel());
	evt.Skip();
}

void cMain::OnButtonClickedC(wxCommandEvent& evt)
{

	m_txt1->AppendText(m_btn1[15]->GetLabel());
	evt.Skip();
}

void cMain::OnButtonClickedMod(wxCommandEvent& evt)
{

	m_txt1->AppendText(m_btn1[16]->GetLabel());
	evt.Skip();
}

void cMain::OnButtonClickedBi(wxCommandEvent& evt)
{

	m_txt1->AppendText(m_btn1[17]->GetLabel());
	evt.Skip();
}
void cMain::OnButtonClickedHe(wxCommandEvent& evt)
{

	m_txt1->AppendText(m_btn1[18]->GetLabel());
	evt.Skip();
}
void cMain::OnButtonClickedDec(wxCommandEvent& evt)
{

	m_txt1->AppendText(m_btn1[19]->GetLabel());
	evt.Skip();
}


