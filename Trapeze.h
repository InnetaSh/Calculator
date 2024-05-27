#pragma once
#include "Figures.h"
class Trapeze :
    public Figures
{
    double basis1;
    double basis2;
    double height;
public:
    Trapeze(const string& trapeze, const double& a, const double& b, const double& h) : Figures(trapeze), basis1(a), basis2(b), height(h) {}

    double Area() override 
    {
        return 0.5 * (basis1 + basis2) * height;
    }
};

