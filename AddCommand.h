#pragma once
#include "IBaseCommand.h"
class AddCommand : public IBaseCommand
{

public:
	std::string Execution()
	{
		return AddPlus();
	}

	std::string AddPlus()
	{ 
		std::string operand = "+";
		
		return operand;
	}
};

