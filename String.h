#pragma once
#include<iostream>
#include<Windows.h>

using namespace std;
class String
{
	char* str;
	char* Gets();
public:
	String();
	String(const String&);
	String& operator=(const String&);
	void Vvod();
	void Show();
	String& operator++();
	String operator++(int);
	String& operator--();
	String operator--(int);
	char& operator[](int) const;
	int operator()(char, int, int);
	explicit operator int();
	~String();
};

