#pragma once
#include<iostream>
using namespace std;

class Ñalculator
{
	double num1;
	double num2;
public:
	void Set_Num1(double);
	void Set_Num2(double);
	void VvodNum();
	
	double Sum(double, double);
	double Sub(double, double);
	double Mult(double, double);
	double Div(double, double);
};

