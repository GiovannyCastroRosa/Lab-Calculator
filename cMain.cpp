#include "cMain.h"


wxBEGIN_EVENT_TABLE(cMain, wxFrame)

EVT_BUTTON(101, OnButtonClicked)
EVT_BUTTON(102, OnButtonClicked)
EVT_BUTTON(103, OnButtonClicked)
EVT_BUTTON(104, OnButtonClicked)
EVT_BUTTON(105, OnButtonClicked)
EVT_BUTTON(106, OnButtonClicked)
EVT_BUTTON(107, OnButtonClicked)
EVT_BUTTON(108, OnButtonClicked)
EVT_BUTTON(109, OnButtonClicked)
EVT_BUTTON(110, OnButtonClicked)
EVT_BUTTON(111, OnButtonClicked)
EVT_BUTTON(112, OnButtonClicked)
EVT_BUTTON(113, OnButtonClicked)
EVT_BUTTON(114, OnButtonClicked)
EVT_BUTTON(115, OnButtonClicked)
EVT_BUTTON(116, OnButtonClicked)
EVT_BUTTON(117, OnButtonClicked)
EVT_BUTTON(118, OnButtonClicked)
EVT_BUTTON(119, OnButtonClicked)
EVT_BUTTON(120, OnButtonClicked)


wxEND_EVENT_TABLE()



cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(490, 690))
{
	//numbers
	m_btn1[0] = new wxButton(this, 101, "0", wxPoint(40, 575), wxSize(195, 85));
	m_btn1[1] = new wxButton(this, 102, "1", wxPoint(40, 480), wxSize(95, 95));
	m_btn1[2] = new wxButton(this, 103, "2", wxPoint(138, 480), wxSize(95, 95));
	m_btn1[3] = new wxButton(this, 104, "3", wxPoint(235, 480), wxSize(95, 95));
	m_btn1[4] = new wxButton(this, 105, "4", wxPoint(40, 380), wxSize(95, 95));
	m_btn1[5] = new wxButton(this, 106, "5", wxPoint(138, 380), wxSize(95, 95));
	m_btn1[6] = new wxButton(this, 107, "6", wxPoint(235, 380), wxSize(95, 95));
	m_btn1[7] = new wxButton(this, 108, "7", wxPoint(40, 280), wxSize(95, 95));
	m_btn1[8] = new wxButton(this, 109, "8", wxPoint(138, 280), wxSize(95, 95));
	m_btn1[9] = new wxButton(this, 110, "9", wxPoint(235, 280), wxSize(95, 95));

	//functions
	m_btn1[10] = new wxButton(this, 111, "=", wxPoint(238, 575), wxSize(195, 85));
	m_btn1[11] = new wxButton(this, 112, "+", wxPoint(335, 480), wxSize(95, 95));
	m_btn1[12] = new wxButton(this, 113, "-", wxPoint(335, 380), wxSize(95, 95));
	m_btn1[13] = new wxButton(this, 114, "/", wxPoint(335, 280), wxSize(95, 95));
	m_btn1[14] = new wxButton(this, 115, "*", wxPoint(335, 190), wxSize(95, 95));
	m_btn1[15] = new wxButton(this, 116, "C", wxPoint(40, 193), wxSize(195, 85));
	m_btn1[16] = new wxButton(this, 117, "mod", wxPoint(235, 193), wxSize(95, 85));
	m_btn1[17] = new wxButton(this, 118, "Binary", wxPoint(110, 145), wxSize(90, 50));
	m_btn1[18] = new wxButton(this, 119, "Hex", wxPoint(200, 145), wxSize(90, 50));
	m_btn1[19] = new wxButton(this, 120, "Decimal", wxPoint(290, 145), wxSize(90, 50));


	m_txt1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(50, 50), wxSize(390, 90));



}

cMain::~cMain()
{

}

void cMain::OnButtonClicked(wxCommandEvent& evt)
{
	int id = evt.GetId();
	switch (id)
	{
	case 101:
	{
		m_txt1->AppendText(m_btn1[0]->GetLabel());
		break;
	}
	case 102:
	{
		m_txt1->AppendText(m_btn1[1]->GetLabel());
		break;
	}
	case 103:
	{
		m_txt1->AppendText(m_btn1[2]->GetLabel());
		break;
	}
	case 104:
	{
		m_txt1->AppendText(m_btn1[3]->GetLabel());
		break;
	}
	case 105:
	{
		m_txt1->AppendText(m_btn1[4]->GetLabel());
		break;
	}
	case 106:
	{
		m_txt1->AppendText(m_btn1[5]->GetLabel());
		break;
	}
	case 107:
	{
		m_txt1->AppendText(m_btn1[6]->GetLabel());
		break;
	}
	case 108:
	{
		m_txt1->AppendText(m_btn1[7]->GetLabel());
		break;

	}
	case 109:
	{
		m_txt1->AppendText(m_btn1[8]->GetLabel());
		break;

	}
	case 110:
	{
		m_txt1->AppendText(m_btn1[9]->GetLabel());
		break;

	}
	case 111:
	{
		m_txt1->AppendText(m_btn1[10]->GetLabel());
		break;
	}
	case 112:
	{

		m_txt1->AppendText(m_btn1[11]->GetLabel());
		break;
	}
	case 113:
	{
		m_txt1->AppendText(m_btn1[12]->GetLabel());
		break;
	}
	case 114:
	{
		m_txt1->AppendText(m_btn1[13]->GetLabel());
		break;
	}
	case 115:
	{
		m_txt1->AppendText(m_btn1[14]->GetLabel());
		break;
	}
	case 116:
	{
		m_txt1->AppendText(m_btn1[15]->GetLabel());
		break;
	}
	case 117:
	{
		m_txt1->AppendText(m_btn1[16]->GetLabel());
		break;
	}
	case 118:
	{

		m_txt1->AppendText(m_btn1[17]->GetLabel());
		break;
	}
	case 119:
	{
		m_txt1->AppendText(m_btn1[18]->GetLabel());
		break;
	}
	case 120:
	{

		m_txt1->AppendText(m_btn1[19]->GetLabel());
		break;
	}
	default:
		break;
	}

	evt.Skip();
}


