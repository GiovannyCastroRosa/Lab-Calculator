#include "ButtonFactory.h"


wxButton* ButtonFactory::CreateAddButton(wxWindow* _main, wxWindowID _id, wxString _label) {
		

	switch (_id)
	{
	case 101:
		btn = new wxButton(_main, _id, _label, wxPoint(40, 575), wxSize(195, 85));
		
		break;
	case 102:
	{
		btn = new wxButton(_main, _id, _label, wxPoint(40, 480), wxSize(95, 95));
		break;
	}
	case 103:
	{
		btn = new wxButton(_main, _id, _label, wxPoint(138, 480), wxSize(95, 95));
		break;
	}
	case 104:
	{
		btn = new wxButton(_main, _id, _label, wxPoint(235, 480), wxSize(95, 95));
		break;
	}
	case 105:
	{
		btn = new wxButton(_main, _id, _label, wxPoint(40, 380), wxSize(95, 95));

		break;
	}
	case 106:
	{
		btn = new wxButton(_main, _id, _label, wxPoint(138, 380), wxSize(95, 95));

		break;
	}
	case 107:
	{
		btn = new wxButton(_main, _id, _label, wxPoint(235, 380), wxSize(95, 95));

		break;
	}
	case 108:
	{
		btn = new wxButton(_main, _id, _label, wxPoint(40, 280), wxSize(95, 95));

		break;

	}
	case 109:
	{
		btn = new wxButton(_main, _id, _label, wxPoint(138, 280), wxSize(95, 95));
		break;

	}
	case 110:
	{
		btn = new wxButton(_main, _id, _label, wxPoint(235, 280), wxSize(95, 95));
		break;

	}
	case 111:
	{
		btn = new wxButton(_main, _id, _label, wxPoint(238, 575), wxSize(195, 85));
		break;
	}
	case 112:
	{

		btn = new wxButton(_main, _id, _label, wxPoint(335, 480), wxSize(95, 95));
		break;
	}
	case 113:
	{
		btn = new wxButton(_main, _id, _label, wxPoint(335, 380), wxSize(95, 95));
		break;
	}
	case 114:
	{
		btn = new wxButton(_main, _id, _label, wxPoint(335, 280), wxSize(95, 95));
		break;
	}
	case 115:
	{
		btn = new wxButton(_main, _id, _label, wxPoint(335, 190), wxSize(95, 95));
		break;
	}
	case 116:
	{
		btn = new wxButton(_main, _id, _label, wxPoint(40, 193), wxSize(195, 85));
		break;
	}
	case 117:
	{
		btn = new wxButton(_main, _id, _label, wxPoint(235, 193), wxSize(95, 85));
		break;
	}
	case 118:
	{

		btn = new wxButton(_main, _id, _label, wxPoint(110, 145), wxSize(90, 50));
		break;
	}
	case 119:
	{
		btn = new wxButton(_main, _id, _label, wxPoint(200, 145), wxSize(90, 50));
		break;
	}
	case 120:
	{

		btn = new wxButton(_main, _id, _label, wxPoint(290, 145), wxSize(90, 50));
		break;
	}
	default:
		break;
	}
	return btn;
}
	


