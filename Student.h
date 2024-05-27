#pragma once
#include<iostream>
#include<Windows.h>
using namespace std;
class Student
{
	char Fio[25];
	int Age;
public:
	void Vvod();
	void Show();
	char* Get_Fio();
};

