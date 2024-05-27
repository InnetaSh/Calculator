#pragma once
#include "Animal.h"

class Dog :public Animal
{
	string Breed;
public:
	Dog(const string& kind, const string& name, const int& vik, const string& breed) :Animal(kind, name, vik)
	{ 
		Breed = breed;
	}

	void Say()
	{
		cout << "Gav-gav!\n";
	}
	void Show()
	{
		Animal::Show();
		cout <<"poroda: " << Breed << "\n";
	}
};

