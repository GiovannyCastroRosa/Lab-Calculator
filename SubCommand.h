#pragma once
#include "IBaseCommand.h"
class SubCommand : public IBaseCommand
{
public:
	std::string Execution()
	{
		return AddMinus();
	}

	std::string AddMinus()
	{
		std::string operand = "-";
		return operand;
	}
};

