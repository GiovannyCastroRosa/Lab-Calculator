#pragma once

#include "wx/wx.h"


class cMain : public wxFrame
{

public:
	cMain();
	~cMain();
	wxButton* m_btn1[20];
	wxListBox* m_list1 = nullptr;

	
};

