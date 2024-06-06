#include<iostream>
#include "HDD.h"
#include "RAM.h"
#include "CPU.h"
#include "VGA.h"
#include "Laptop.h"
using namespace std;
int main() 
{
	HDD obj1("Asus", 2000);
	RAM obj2("ATI", 2500,8);
	CPU obj3("ERT", 3000);
	VGA obj4("WEGA", 1500, 12);



	Laptop obj("HP", obj1, obj2,obj3,obj4);
	obj.Print();
}