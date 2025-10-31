#include <iostream>
#include"Student.h"
using namespace std;

int main()
{
	try
	{
		Student obj((string)"Ivan", (string)"Petrov", 19, 11.7, 2);
		obj.Print();
		obj.SetYear(4);
		obj.GetYear();
		obj.SetAge(29);
		obj.GetAge();
		obj.SetAverage(6.9);
		obj.GetAverage();
		obj.Print();

		Student obj1;
		obj1.Input();
		obj1.Print();
	}
	catch (...)
	{
		cout << "Error\n";
	}
}