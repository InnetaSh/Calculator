#pragma once
#include "Human.h"
class Flat
{
	Human* mas;
	int size;
	int Number;
public:
	Flat();
	Flat(const Flat&);
	Flat& operator=(const Flat&);
	void AddHuman();
	void DelHuman();
	void Show();
	void SetNumber(int);
	int FindFioByHuman(const char*);
	int GetSize();
	~Flat();
};

