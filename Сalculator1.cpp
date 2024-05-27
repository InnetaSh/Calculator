#include "Ñalculator1.h"

void Ñalculator::Set_Num1(double n1)
{
	this->num1 = n1;
}

void Ñalculator::Set_Num2(double n2)
{
	this->num2 = n2;
}

void Ñalculator::VvodNum()
{
	cout << "Vvedit pershe chislo:\t" << endl;
	double n1;
	cin >> n1;
	Set_Num1(n1);
	cout << "Vvedit gruge chislo:\t" << endl;
	double n2;
	cin >> n2;
	Set_Num2(n2)
}

double Ñalculator::Sum(double num1, double num2)
{
	return num1 + num2;
}

double Ñalculator::Sub(double num1, double num2)
{
	return num1 - num2;
}

double Ñalculator::Mult(double, double)
{
	return num1 * num2;
}

double Ñalculator::Div(double, double)
{
	if (num2!=0)
		return num1 / num2;
	throw"Dilena na null.\n";
}
