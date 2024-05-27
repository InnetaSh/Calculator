#pragma once
#include<iostream>
using namespace std;
class Point
{
	int x;
	int y;
public:
	Point();
	Point(int, int);
	//Point operator+(const Point&) const;
	//Point operator-(const Point&) const;
	
	friend ostream& operator<<(ostream&, const Point&);
	friend istream& operator>>(istream&, Point&);
	bool operator<(const Point&);
	//bool operator>(const Point&);
	bool operator==(const Point&) const;
	bool operator!=(const Point&) const;
};