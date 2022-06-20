#pragma once
#include "IBaseCommand.h"
class MultCommand : public IBaseCommand
{
public:
	std::string Execution()
	{
		return AddMulty();
	}

	std::string AddMulty()
	{
		std::string operand = "*";
		return operand;
	}

};

