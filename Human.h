#pragma once
#include<iostream>
#include<Windows.h>
#include<conio.h>
using namespace std;
class Human
{
	char* Fio;
	int Age;
	char* Gets();
public:
	Human();
	Human(const Human&);
	Human& operator=(const Human&);
	void Vvod();
	void Show();
	char* Get_Fio();
	~Human();
};

