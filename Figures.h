#pragma once
#include <iostream>
#include <string>
using namespace std;
class Figures
{
	string TypeOfFigure;
public:
	Figures(const string& type) :TypeOfFigure(type) {};
	virtual double Area() = 0;
	string getType()
	{
		return TypeOfFigure;
	}
};

