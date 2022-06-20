#pragma once

#include "wx/wx.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"
#include "AddCommand.h"
#include "SubCommand.h"
#include "DivCommand.h"
#include "MultCommand.h"
#include <vector>

class CalculatorProcessor;
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
	AddCommand* plus = new AddCommand();
	SubCommand* minus = new SubCommand();
	DivCommand* div = new DivCommand();
	MultCommand* multy = new MultCommand();
	std::vector<IBaseCommand*> command;
	void OnButtonClicked(wxCommandEvent& evt);
	void Calculation();
	Processor* processor = Processor::GetInstance();
	wxDECLARE_EVENT_TABLE();

	
	
};

