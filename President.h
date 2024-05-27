#pragma once
#include "Employer.h"
class President :
    public Employer
{
    string Name;
    int Stag;
public:
    President(const string& name, const int& stag) :Name(name),Stag(stag) {};
    void Print() const override {
        cout << "Posada: presudent" << ".\n";
        cout << "Im\'ia: " << Name << "\n";
        cout << "Stag robotu na posadi: " << Stag << " rokiv.\n";
        cout << "Obov\'iazku: keruiychui companieiy.\n";
        cout << "-----------------------------------\n";
    }
};

