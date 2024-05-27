#pragma once
#include "Employer.h"
class Worker :
	public Employer
{
    string Name;
public:
    Worker(const string& name) :Name(name) {};
    void Print() const override {
        cout << "Posada: pracivnuk" << ".\n";
        cout << "Im\'ia: " << Name << "\n";
        cout << "-----------------------------------\n";

    }
};

