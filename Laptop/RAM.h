#pragma once
class RAM
{
	char* model=nullptr;
	double price;
	int memory;
public:
	RAM() = default;
	RAM(const char* mod);
	RAM(const char* mod, double pr);
	RAM(const char* mod, double pr, int memr);


	~RAM();
	RAM(const RAM& b);

	void SetModel(const char* mod);
	void SetPrice(double pr);
	void SetMemory(int memr);

	const char* GetModel()const;
	double GetPrice()const;
	int GetMemory()const;

	void Print()const;
};

