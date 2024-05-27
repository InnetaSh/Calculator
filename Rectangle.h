#pragma once
#include "Figures.h"
class Rectangle :
    public Figures
{
    double length;
    double width;
public:
    Rectangle(const string& rectangle, const double& l, const double& w) :Figures(rectangle), length(l), width(w) {};
    double Area() override
    {
        return length * width;
    };
};

