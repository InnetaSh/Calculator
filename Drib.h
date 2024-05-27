#pragma once
#include<iostream>
#include<Windows.h>
using namespace std;
class Drib
{
	int numerator;
	int denominator;
	int NCD(int, int) const;
public:
	Drib();
	Drib(int, int);
	void Set_numerator(int);
	void Set_denominator(int);
	int Get_numerator();
	int Get_denominator();
	void Vvod();
	void Show();
	Drib operator+(const Drib&);
	Drib operator-(const Drib&);
	Drib operator*(const Drib&);
	Drib operator/(const Drib&);
	bool operator>(const Drib&);
	bool operator==(const Drib&);
	operator bool();
	Drib operator+(const int&) const;
	Drib operator-(const int&) const;
	Drib operator*(const int&) const;
	Drib operator/(const int&) const;

};

