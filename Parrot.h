#pragma once
#include "Animal.h"

class Parrot :public Animal
{
	string Color;
public:
	Parrot(const string& kind, const string& name, const int& vik, const string& color) :Animal(kind, name, vik), Color(color) {}
	void Say()
	{
		cout << "Hello!\n";
	}
	void Show()
	{
		Animal::Show();
		cout << "kolir: " << Color << "\n";
	}
};
