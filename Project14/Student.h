#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student
{
	string name;
	string surname;
	int age;
	double Average;
	int year; 
public:
	Student();
	Student(string n, string s, int a, double Av, int y);
	void Print();
	void Input();
	void SetYear(int y);
	void SetAge(int a);
	void SetAverage(double Av);
	int GetYear();
	int GetAge();
	double GetAverage();
};

Student::Student() {
	age = 0;
	Average = 0.0;
	year = 0;
}

Student::Student(string n, string s, int a, double Av, int y)
{
	name = n;
	surname = s;
	if (a < 17 || a > 65)
	{
		throw "Age exception!!";
	}
	age = a;
	if (Av < 0)
	{
		throw "Average exception!!";
	}
	Average = Av;
	if (y < 1 || y > 5)
	{
		throw "Age exception!!";
	}
	year = y;
}

void Student::Print()
{
	cout << "Name: " << name << "\t"
		<< "Surname: " << surname << "\t"
		<< "Age: " << age << "\t"
		<< "Average: " << Average << "\t"
		<< "Year: " << year << endl << endl;
}

void Student::Input()
{
	cout << "Name: " << endl;
	cin >> name;
	cout << "Surname: " << endl;
	cin >> surname;
	cout << "Age: " << endl;
	int a;
	cin >> age;
	if (a < 17 || a > 65)
	{
		throw "Age exception!!";
	}
	age = a;
	cout << "Average: " << endl;
	double Av;
	cin >> Average;
	if (Av < 0)
	{
		throw "Average exception!!";
	}
	Average = Av;
	cout << "Year: " << endl;
	int y;
	cin >> year;
	if (y < 1 || y > 5)
	{
		throw "Age exception!!";
	}
	year = y;
}

void Student::SetYear(int y)
{
	if (y < 1 || y > 5)
	{
		throw "Error\n";
	}
	year = y;
}


void Student::SetAge(int a)
{
	if (a < 17 || a > 65)
	{
		throw "Error\n";
	}
	age = a;
}

void Student::SetAverage(double Av)
{
	if (Av < 0)
	{
		throw "Error\n";
	}
	Average = Av;
}

int Student::GetYear()
{
	return year;
}

inline int Student::GetAge()
{
	return age;
}

inline double Student::GetAverage()
{
	return Average;
}
