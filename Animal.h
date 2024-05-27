#pragma once
#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
	string Kind;
	string Name;
	int Vik;
public:
	Animal(const string& kind, const string& name, const int& vik) : Kind(kind),Name(name), Vik(vik>0 && vik<25 ? vik:0) {}

	void Show()
	{
			cout << Kind << " z im\'iam: " << Name << ",\nvikom: " << Vik << " rokiv,\n";
	}
};



