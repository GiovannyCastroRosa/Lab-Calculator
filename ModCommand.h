#pragma once
class ModCommand : public IBaseCommand
{

public:
	std::string Execution()
	{
		return AddMod();
	}

	std::string AddMod()
	{
		std::string operand = "mod";
		return operand;
	}


};

