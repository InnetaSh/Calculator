#pragma once
#include "Student.h"

class Grupa
{
	char Name[15];
	Student mas[10];
	int size;
public:
	Grupa(char*);
	void Add();
	void Print();
	void Vudalennia();
	void FindStydent();
	void SortByStudent();
	~Grupa();
};

