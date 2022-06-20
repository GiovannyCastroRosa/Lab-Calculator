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
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	// This function call will set a breakpoint at the location of a leaked block
	// Set the parameter to the identifier for a leaked block
	_CrtSetBreakAlloc(-1);
	
	
	command.push_back(plus);
	command.push_back(minus);
	command.push_back(div);
	command.push_back(multy);

	//numbers
	m_btn1[0] = factory.CreateAddButton(this, 101, "0");
	m_btn1[1] = factory.CreateAddButton(this, 102, "1");
	m_btn1[2] = factory.CreateAddButton(this, 103, "2");
	m_btn1[3] = factory.CreateAddButton(this, 104, "3");
	m_btn1[4] = factory.CreateAddButton(this, 105, "4");
	m_btn1[5] = factory.CreateAddButton(this, 106, "5");
	m_btn1[6] = factory.CreateAddButton(this, 107, "6");
	m_btn1[7] = factory.CreateAddButton(this, 108, "7");
	m_btn1[8] = factory.CreateAddButton(this, 109, "8");
	m_btn1[9] = factory.CreateAddButton(this, 110, "9");

	//functions
	m_btn1[10] = factory.CreateAddButton(this, 111, "=");
	m_btn1[11] = factory.CreateAddButton(this, 112, "+");
	m_btn1[12] = factory.CreateAddButton(this, 113, "-");
	m_btn1[13] = factory.CreateAddButton(this, 114, "/");
	m_btn1[14] = factory.CreateAddButton(this, 115, "*");
	m_btn1[15] = factory.CreateAddButton(this, 116, "C");
	m_btn1[16] = factory.CreateAddButton(this, 117, "mod");
	m_btn1[17] = factory.CreateAddButton(this, 118, "Binary");
	m_btn1[18] = factory.CreateAddButton(this, 119, "Hex");
	m_btn1[19] = factory.CreateAddButton(this, 120, "Decimal");



	m_txt1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(50, 50), wxSize(390, 90));


	processor->GetRemove();
}

cMain::~cMain()
{
	delete plus;
	delete minus;
	delete div;
	delete multy;
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
		sNum = m_txt1->GetLineText(0);
		if (func == "+")
		{
			sNum.erase(0, sNum.find_first_of("+") + 1);
		}
		else if (func == "-")
		{
			sNum.erase(0, sNum.find_first_of("-") + 1);
		}
		else if (func == "/")
		{
			sNum.erase(0, sNum.find_first_of("/") + 1);
		}
		else if (func == "*")
		{
			sNum.erase(0, sNum.find_first_of("*") + 1);
		}

		m_txt1->AppendText(m_btn1[10]->GetLabel());
		
		Calculation();

		break;
	}
	case 112:
	{

		fNum = m_txt1->GetLineText(0);
		m_txt1->AppendText(m_btn1[11]->GetLabel());
	
		 func = command[0]->Execution();
		break;
	}
	case 113:
	{
		fNum = m_txt1->GetLineText(0);
		m_txt1->AppendText(m_btn1[12]->GetLabel());
		func = command[1]->Execution();
		break;
	}
	case 114:
	{
		fNum = m_txt1->GetLineText(0);
		m_txt1->AppendText(m_btn1[13]->GetLabel());
		func = command[2]->Execution();
		break;
	}
	case 115:
	{
		fNum = m_txt1->GetLineText(0);
		m_txt1->AppendText(m_btn1[14]->GetLabel());
		func = command[3]->Execution();
		break;
	}
	case 116:
	{
		m_txt1->AppendText(m_btn1[15]->GetLabel());

		break;
	}
	case 117:
	{
		fNum = m_txt1->GetLineText(0);
		m_txt1->AppendText(m_btn1[16]->GetLabel());
		
		func = m_txt1->GetLineText(0);
		func.erase(0, func.find_last_of("mod"));
		
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

void cMain::Calculation()
{
	//Processor* processor = Processor::GetInstance();
	
	m_txt1->Clear();
	m_txt1->AppendText(processor->Calculation(fNum, sNum, func));
}


