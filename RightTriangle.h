#pragma once
#include "Figures.h"
class RightTriangle :
    public Figures
{
    double length;
    double width;
public:
    RightTriangle(const string& rightTriangle, const double& l, const double& w) : Figures(rightTriangle), length(l), width(w) {}

    double Area() override 
    {
        return 0.5 * length * width;
    }
};

