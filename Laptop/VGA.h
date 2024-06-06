#pragma once
class VGA
{

	char* model = nullptr;
	double price;
	int memory;
public:
	VGA() = default;
	VGA(const char* mod);
	VGA(const char* mod, double pr);
	VGA(const char* mod, double pr, int memr);


	~VGA();
	VGA(const VGA& b);

	void SetModel(const char* mod);
	void SetPrice(double pr);
	void SetMemory(int memr);

	const char* GetModel()const;
	double GetPrice()const;
	int GetMemory()const;

	void Print()const;

};
