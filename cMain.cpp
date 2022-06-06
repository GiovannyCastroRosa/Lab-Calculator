#include "cMain.h"






cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(490, 690))
{
	//numbers
	m_btn1[0] = new wxButton(this, wxID_ANY, "0", wxPoint(40, 575), wxSize(195, 85));
	m_btn1[1] = new wxButton(this, wxID_ANY, "1", wxPoint(40, 480), wxSize(95, 95));
	m_btn1[2] = new wxButton(this, wxID_ANY, "2", wxPoint(138, 480), wxSize(95, 95));
	m_btn1[3] = new wxButton(this, wxID_ANY, "3", wxPoint(235, 480), wxSize(95, 95));
	m_btn1[4] = new wxButton(this, wxID_ANY, "4", wxPoint(40, 380), wxSize(95, 95));
	m_btn1[5] = new wxButton(this, wxID_ANY, "5", wxPoint(138, 380), wxSize(95, 95));
	m_btn1[6] = new wxButton(this, wxID_ANY, "6", wxPoint(235, 380), wxSize(95, 95));
	m_btn1[7] = new wxButton(this, wxID_ANY, "7", wxPoint(40, 280), wxSize(95, 95));
	m_btn1[8] = new wxButton(this, wxID_ANY, "8", wxPoint(138, 280), wxSize(95, 95));
	m_btn1[9] = new wxButton(this, wxID_ANY, "9", wxPoint(235, 280), wxSize(95, 95));

	//functions
	m_btn1[10] = new wxButton(this, wxID_ANY, "=", wxPoint(238, 575), wxSize(195, 85));
	m_btn1[11] = new wxButton(this, wxID_ANY, "+", wxPoint(335, 480), wxSize(95, 95));
	m_btn1[12] = new wxButton(this, wxID_ANY, "-", wxPoint(335, 380), wxSize(95, 95));
	m_btn1[13] = new wxButton(this, wxID_ANY, "/", wxPoint(335, 280), wxSize(95, 95));
	m_btn1[14] = new wxButton(this, wxID_ANY, "*", wxPoint(335, 190), wxSize(95, 95));
	m_btn1[15] = new wxButton(this, wxID_ANY, "C", wxPoint(40, 193), wxSize(195, 85));
	m_btn1[16] = new wxButton(this, wxID_ANY, "mod", wxPoint(235, 193), wxSize(95, 85));
	m_btn1[17] = new wxButton(this, wxID_ANY, "Binary", wxPoint(110, 145), wxSize(90, 50));
	m_btn1[18] = new wxButton(this, wxID_ANY, "Hex", wxPoint(200, 145), wxSize(90, 50));
	m_btn1[19] = new wxButton(this, wxID_ANY, "decimal", wxPoint(290, 145), wxSize(90, 50));

	m_list1 = new wxListBox(this, wxID_ANY, wxPoint(50, 50), wxSize(390, 90));



}

cMain::~cMain()
{

}

