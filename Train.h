#pragma once
#include <iostream>
#include <string>
using namespace std;
class Train
{
	int NumberTrain;
	struct Time
	{
		int Hour;
		int Minut;
	};
	Time time;
	string Station;
public:
	Train(const int&, const int& , const int& , const string& );
	void Print();
	int getNumber();
	string getStation();
};

