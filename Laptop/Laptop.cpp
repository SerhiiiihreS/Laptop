#include "Laptop.h"
#include<iostream>
using namespace std;

Laptop::Laptop(const char* mod, HDD hdd, RAM ram, CPU cpu, VGA vga):hdd(hdd),ram(ram),cpu(cpu),vga(vga) 
{
	this->model = new char[strlen(mod) + 1];
	strcpy_s(this->model, strlen(mod) + 1, mod);
	price = hdd.GetPrice() + ram.GetPrice() + cpu.GetPrice() + vga.GetPrice()+2000;
}

Laptop::~Laptop()
{
	delete[]model;
}

double Laptop::GetPrice() const
{
	return price;
}

void Laptop::Print() const
{
	this->hdd.Print();
	this->ram.Print();
	this->cpu.Print();
	this->vga.Print();
	cout << "Laptop model -> " << model << "\tPrice - " << price << endl;
}
