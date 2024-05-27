#pragma once
#include "Point2D.h"
#include <iostream>
namespace Point3D
{
	class Point :public Point2D::Point
	{
		double z;
	public:
		Point() :Point2D::Point(), z(0) {};
		Point(double  a, double b, double c) : Point2D::Point(a, b), z(c) {}
		double PointDistance(Point point)
		{
			return sqrt((x - point.x) * (x - point.x) + (y - point.y) * (y - point.y) + (z - point.z) * (z - point.z));
		}
		void print() {
			std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
		}
	};
}

