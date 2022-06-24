#pragma once

#include <string>
#include <vector>
#include <bitset>
class Processor  
{

private:
	static Processor* _processor;
	int baseNumber;
	int fNum;
	int sNum;
	Processor() {};
	~Processor() {};
public:
	
	static Processor* GetInstance();
	void GetRemove();
	void SetBaseNumber(int number);
	std::string Calculation(std::string _fNum, std::string sNum, std::string _funt);
	Processor(Processor& other) = delete;
	void operator=(const Processor& other) = delete;

	
	std::string GetDecimal();
	std::string GetHexadeciaml();
	std::string GetBinary();
};

