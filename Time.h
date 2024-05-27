#pragma once
#include<iostream>
using namespace std;
class Time
{
	int hour;
	int minut;
	int sec;
public:
	Time();
	void Set_hour(int);
	int Get_hour();
	void Set_minut(int);
	int Get_minut();
	void Set_sec(int);
	int Get_sec();
};

