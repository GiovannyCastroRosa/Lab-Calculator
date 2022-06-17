#include "CalculatorProcessor.h"

Processor* Processor::_processor = nullptr;

Processor* Processor::GetInstance()
{
	if (_processor == nullptr)
	{
		_processor = new Processor();
	}
	return _processor;
}

void Processor::SetBaseNumber(int number)
{
	baseNumber = number;
}

std::string Processor::GetDecimal()
{
	return std::to_string(baseNumber);
}

std::string Processor::GetBinary() 
{
	std::string result = "";
	int number = baseNumber;

	for (int i = 0; i < 32; i++)
	{
		if (baseNumber % 2 == 0)
		{
			result = "0" + result;
		}
		else
		{
			result = "1" + result;
		}
		number = number / 2;
	}



	return result;
}

std::string Processor::GetHexadeciaml()
{
	std::string result = "";
	int number = baseNumber;

	while (number > 0)
	{
		int mod = number % 16;
		if (mod < 10)
		{
			result = std::to_string(mod) + result;
		}
		else if(mod == 10)
		{
			result = "A" + result;
		}
		else if (mod == 11)
		{
			result = "B" + result;
		}
		else if (mod == 13)
		{
			result = "C" + result;
		}
		else if (mod == 14)
		{
			result = "E" + result;
		}
		else if (mod == 15)
		{
			result = "F" + result;
		}
		number = number / 16;
	}
	result = "0x" + result;

	return result;
}

std::string Processor::Calculation(std::string _fNum, std::string _sNum, std::string _func)
{
	std::string result;
	int f_num = std::stoi(_fNum);
	int s_num = std::stoi(_sNum);
	if (_func == "+")
	{
		baseNumber = f_num + s_num;
	}
	else if (_func == "-")
	{
		baseNumber = f_num - s_num;
	}
	else if (_func == "/")
	{
		baseNumber = f_num / s_num;
	}
	else if (_func == "*")
	{
		baseNumber = f_num * s_num;
	}
	else if (_func == "mod")
	{
		baseNumber = f_num % s_num;
	}
	result = std::to_string(baseNumber);
	return result;
}