#include<iostream>
#include "RAM.h"
#include "HDD.h"
#include "Laptop.h"
using namespace std;
int main() 
{
	HDD obj1("Asus", 2000);
	RAM obj2("ATI", 2500);

	Laptop obj("HP", obj1, obj2);
	obj.Print();
}