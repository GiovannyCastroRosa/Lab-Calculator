#pragma once

#include "wx/wx.h"

class ButtonFactory 
{
	
public:
	ButtonFactory() {};
	wxButton* btn = nullptr;
	wxButton* CreateAddButton(wxWindow* _main, wxWindowID _id, wxString _label);
	
};