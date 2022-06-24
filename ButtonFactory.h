#pragma once

#include "wx/wx.h"
#include <string>
class ButtonFactory 
{
	
public:
	ButtonFactory() {};
	wxButton* btn = nullptr;
	wxButton* CreateAddButton(wxWindow* _main, wxWindowID _id, wxString _label);
	
};