#pragma once
#include "Figures.h"
#define _USE_MATH_DEFINES
#include <math.h>
class Circle :
    public Figures
{
    double radius;
public:
    Circle(const string& circle,double r) :Figures(circle), radius(r) {}

    double Area() override 
    {
        return M_PI * radius * radius;
    }
};

