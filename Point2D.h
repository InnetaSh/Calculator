#pragma once
#include <iostream>
namespace Point2D
{
	class Point
	{
	protected:
		double x;
		double y;
	public:
		Point() :x(0), y(0) {};
		Point(double a, double b) : x(a), y(b) {}
		double PointDistance(Point point)
		{
			return sqrt((x - point.x) * (x - point.x) + (y - point.y) * (y - point.y));
		}
		void print() {
			std::cout << "(" << x << ", " << y << ")" << std::endl;
		}
	};
}

