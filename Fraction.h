#pragma once
#include <iostream>
namespace Drib
{
	class Fraction
	{
		int numerator;
		int denominator;
		int NCD(int, int) const;
	public:
		Fraction() :numerator(0), denominator(1) {};
		void Set_numerator(int);
		void Set_denominator(int);
		int Get_numerator();
		int Get_denominator();
		void Vvod();
		void print();
		Fraction operator+(const Fraction&);
		Fraction operator-(const Fraction&);
		Fraction operator*(const Fraction&);
		Fraction operator/(const Fraction&);
	};
}
