#include "Fraction.h"
using namespace Drib;

int Fraction::NCD(int num, int den) const
{
	if (num == 0) return 1;
	while (num != 0 && den != 0)
	{
		if (abs(num) > abs(den)) num = abs(num) % abs(den);
		else
			den = abs(den) % abs(num);
	}
	return abs(den + num);

}

void Drib::Fraction::Set_numerator(int n)
{
	this->numerator = n;
}

void Drib::Fraction::Set_denominator(int d)
{
	this->denominator = d;
}

int Drib::Fraction::Get_numerator()
{
	return this->numerator;
}

int Drib::Fraction::Get_denominator()
{
	return this->denominator;;
}

void Drib::Fraction::Vvod()
{
	int n;
	std::cout << "Vvedit chiselnuk:\t";
	std::cin >> n;
	std::cin.ignore();
	Set_numerator(n);
	int d;
	std::cout << "Vvedit znamennuk:\t";
	std::cin >> d;
	if (d == 0)
	{
		std::cout << "znamennuk ne = 0.Vvedit znamennuk:\t";
		std::cin >> d;
	}
	std::cin.ignore();
	Set_denominator(d);
}

void Drib::Fraction::print()
{
	std::cout << numerator << "/" << denominator << std::endl;
}

Fraction Drib::Fraction::operator+(const Fraction& drib_obj)
{
	Fraction tmp;
	int num = this->numerator * drib_obj.denominator + drib_obj.numerator * this->denominator;
	int den = this->denominator * drib_obj.denominator;
	int nsd = NCD(num, den);
	if (nsd > 0)
	{
		num /= nsd;
		den /= nsd;
	}
	tmp.numerator = num;
	tmp.denominator = den;

	return tmp;
}

Drib::Fraction Drib::Fraction::operator-(const Fraction& drib_obj)
{
	Fraction tmp;
	int num = this->numerator * drib_obj.denominator - drib_obj.numerator * this->denominator;
	int den = this->denominator * drib_obj.denominator;
	int nsd = NCD(num, den);
	if (nsd > 0)
	{
		num /= nsd;
		den /= nsd;
	}
	tmp.numerator = num;
	tmp.denominator = den;

	return tmp;
}

Drib::Fraction Drib::Fraction::operator*(const Fraction& drib_obj)
{
	Fraction tmp;
	int num = this->numerator * drib_obj.numerator;
	int den = this->denominator * drib_obj.denominator;
	int nsd = NCD(num, den);
	if (nsd > 0)
	{
		num /= nsd;
		den /= nsd;
	}
	tmp.numerator = num;
	tmp.denominator = den;

	return tmp;
}

Drib::Fraction Drib::Fraction::operator/(const Fraction& drib_obj)
{
	Fraction tmp;
	if (drib_obj.numerator != 0)
	{
		int num = this->numerator * drib_obj.denominator;
		int den = this->denominator * drib_obj.numerator;
		int nsd = NCD(num, den);
		if (nsd > 0)
		{
			num /= nsd;
			den /= nsd;
		}
		tmp.numerator = num;
		tmp.denominator = den;
	}
	else
	{
		tmp.numerator = this->numerator;
		tmp.denominator = this->denominator;
		std::cout << "(Dilutu na 0 nemojna.)";
	}
	return tmp;
}

