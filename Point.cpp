#include "Point.h"

Point::Point()
{
	this->x = 0;
	this->y = 0;
}

Point::Point(int a, int b)
{
	this->x = a;
	this->y = b;
}


bool Point::operator<(const Point& obj)
{
	double d1 = sqrt(this->x * this->x + this->y * this->y);
	double d2 = sqrt(obj.x * obj.x + obj.y * obj.y);
	return d1 < d2;
}
//bool Point::operator > (const Point& obj)
//{
//	double d1 = sqrt(this->x * this->x + this->y * this->y);
//	double d2 = sqrt(obj.x * obj.x + obj.y * obj.y);
//	return d1 > d2;
//}

bool Point::operator==(const Point& obj) const
{
	if (this->x != obj.x || this->y != obj.y)
		return false;
	return true;
}

bool Point::operator!=(const Point& obj) const
{
	if (this->x == obj.x && this->y == obj.y)
		return false;
	return true;
}


ostream& operator<<(ostream& out, const Point& obj)
{
	out << "(" << obj.x << "," << obj.y << ")";
	return out;
}

istream& operator>>(istream& in, Point& obj)
{
	in>> obj.x >> obj.y;
	return in;
}
//Point Point::operator+(const Point& obj) const
//{
//	Point tmp;
//	tmp.x = this->x + obj.x;
//	tmp.y = this->y + obj.y;
//	return tmp;
//}
//
//Point Point::operator-(const Point& obj) const
//{
//	Point tmp;
//	tmp.x = this->x - obj.x;
//	tmp.y = this->y - obj.y;
//	return tmp;
//}


