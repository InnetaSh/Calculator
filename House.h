#pragma once
#include "Flat.h"

class House
{
	Flat* mas;
	int size;
	char Adress_Street[25];
	int numHouse;
public:
	House(int);
	void Zaselenie();
	void Vuselenie();
	void Show();
	void ShowFlat();
	void FindGulca();
	~House();
};

