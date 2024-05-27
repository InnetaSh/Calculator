#include "Drib.h"

Drib::Drib()
{
	this->numerator = 0;
	this->denominator = 1;
}

Drib::Drib(int n, int d)
{
	this->numerator = n;
	this->denominator = d;
}

void Drib::Set_numerator(int n)
{
	this->numerator = n;
}

void Drib::Set_denominator(int d)
{
	this->denominator = d;
}
int Drib::Get_numerator()
{
	return this->numerator;
}

int Drib::Get_denominator()
{
	return this->denominator;
}
void Drib::Vvod()
{
	int n;
	cout << "Vvedit chiselnuk:\t";
	cin >> n;
	cin.ignore();
	Set_numerator(n);
	int d;
	cout << "Vvedit znamennuk:\t";
	cin >> d;
	if (d == 0)
	{
		cout << "znamennuk ne = 0.Vvedit znamennuk:\t";
		cin >> d;
	}
	cin.ignore();
	Set_denominator(d);
}

void Drib::Show()
{
	cout << numerator << " / " << denominator << "\n";
}



int Drib::NCD(int num, int den) const
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

Drib Drib::operator+(const Drib& drib_obj)
{
	Drib tmp;
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
Drib Drib::operator-(const Drib& drib_obj)
{
	Drib tmp;
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
Drib Drib::operator*(const Drib& drib_obj)
{
	Drib tmp;
	int num = this->numerator * drib_obj.numerator ;
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
Drib Drib::operator/(const Drib& drib_obj)
{

	Drib tmp;
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
		cout << "(Dilutu na 0 nemojna.)";
	}
	return tmp;
}

bool Drib::operator>(const Drib& drib_obj)
{
	double num1 = double(this->numerator) / double(this->denominator);
	double num2 = double(drib_obj.numerator) / double(drib_obj.denominator);
	
	if (num1 <=  num2)
		return false;
	return true;
}
bool Drib::operator==(const Drib& drib_obj)
{
	double num1 = double(this->numerator) / double(this->denominator);
	double num2 = double(drib_obj.numerator) / double(drib_obj.denominator);
	if (num1 != num2)
		return false;
	return true;
}

//abo
//bool Drib::operator==(const Drib& drib_obj)
//{
//	int num_1;
//	int den_1;
//	int num_2;
//	int den_2;
//	int nsd = NCD(this->numerator, this->denominator);
//	if (nsd > 0)
//	{
//		num_1 = this->numerator / nsd;
//		den_1 = this->denominator / nsd;
//	}
//	int nsd_2 = NCD(drib_obj.numerator, drib_obj.denominator);
//	if (nsd_2 > 0)
//	{
//		num_2 = drib_obj.numerator / nsd_2;
//		den_2 = drib_obj.denominator / nsd_2;
//	}
//	
//	if (num_1 != num_2 || den_1 != den_2)
//		return false;
//	return true;
//}

Drib::operator bool()
{
	if (this->numerator == 0)
		return false;
	return true;
}

Drib Drib::operator+(const int& n) const
{
	Drib tmp;
	int num = this->numerator + n * this->denominator;
	int den = this->denominator;
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
Drib Drib::operator-(const int& n) const
{
	Drib tmp;
	int num = this->numerator - n * this->denominator;
	int den = this->denominator;
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

Drib Drib::operator*(const int& n) const
{
	Drib tmp;
	int num = this->numerator * n ;
	int den = this->denominator;
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
Drib Drib::operator/(const int& n) const
{
	Drib tmp;
	int num = this->numerator;
	int den = this->denominator * n;
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

