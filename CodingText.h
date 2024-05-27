#pragma once
#pragma once
#include <iostream>
#include <string>
using namespace std;
class CodingText
{
protected:
	string Text;
public:
	CodingText(string& str) :Text(str) {};
	void Print()
	{
		cout << Text << "\n";
	}
	virtual string Coding() = 0;
	virtual string Decoring()  = 0;
};


