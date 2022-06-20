#pragma once
#include "IBaseCommand.h"
class DivCommand : public IBaseCommand
{
public:
	std::string Execution()
	{
		return AddMinus();
	}

	std::string AddMinus()
	{
		std::string operand = "/";
		return operand;
	}

};

