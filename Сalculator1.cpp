#include "�alculator1.h"

void �alculator::Set_Num1(double n1)
{
	this->num1 = n1;
}

void �alculator::Set_Num2(double n2)
{
	this->num2 = n2;
}

void �alculator::VvodNum()
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

double �alculator::Sum(double num1, double num2)
{
	return num1 + num2;
}

double �alculator::Sub(double num1, double num2)
{
	return num1 - num2;
}

double �alculator::Mult(double, double)
{
	return num1 * num2;
}

double �alculator::Div(double, double)
{
	if (num2!=0)
		return num1 / num2;
	throw"Dilena na null.\n";
}
