#pragma once
#include "Animal.h"

class Cat :public Animal
{
	string Breed;
public:
	Cat(const string& kind, const string& name, const int& vik, const string& breed) :Animal(kind, name, vik), Breed(breed) {}
	void Say()
	{
		cout << "Miay-miay!\n";
	}
	void Show()
	{
		Animal::Show();
		cout << "poroda: " << Breed << "\n";
	}
};
