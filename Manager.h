#pragma once
#include "Employer.h"
class Manager :
    public Employer
{
    string Name;
    int Stag;
    string Vitdil;
public:
    Manager(const string& name,const int& stag, const string& vitdil) :Name(name), Stag(stag), Vitdil(vitdil){};
    void Print() const override {
        cout << "Posada: menedger" << ".\n";
        cout << "Im\'ia: "<< Name << "\n";
        cout << "Stag robotu na posadi: " << Stag << " rokiv.\n";
        cout << "Obov\'iazku: keruiychui vitdilom companii: " << Vitdil << ".\n";
        cout << "-----------------------------------\n";

    }
};

