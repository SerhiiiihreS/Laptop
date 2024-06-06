#pragma once
#include "HDD.h"
#include "RAM.h"
#include "CPU.h"
#include "VGA.h"

class Laptop
{
	HDD hdd;
	RAM ram;
	CPU cpu;
	VGA vga;
	double price;
	char* model;

	static int NСompot;
public:
	Laptop() = default;
	Laptop(const char* mod, HDD hdd, RAM ram, CPU cpu,VGA vga);
	~Laptop();
	double GetPrice()const;
	void Print()const;

	static void ShowNC();

};

