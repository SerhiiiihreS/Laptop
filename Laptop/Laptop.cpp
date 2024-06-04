#include "Laptop.h"
#include<iostream>
using namespace std;

Laptop::Laptop(const char* mod, HDD hdd, RAM ram):hdd(hdd),ram(ram)
{
	this->model = new char[strlen(mod) + 1];
	strcpy_s(this->model, strlen(mod) + 1, mod);
	price = hdd.GetPrice() + ram.GetPrice() + 2000;
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
	cout << "Laptop model -> " << model << "\tPrice - " << price << endl;
}
