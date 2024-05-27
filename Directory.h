#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Directory
{
    struct Company {
        string CompanyName;
        string CompanyOwnerFio;
        string CompanyPhone;
        string CompanyAddress;
        string CompanyTypeOfActivity;
    };
    string FileName;
    Company* mas;
    int size;
    void Print(int);
public:
    Directory(const string&);
    string addCompany(const string&, const string&, const string&, const string&, const string&);
    void searchByName(const string&);
    bool findName(const string&);
    void searchByOwnerFio(const string&);
    void searchByCompanyPhone(const string&);
    void searchByCompanyTypeOfActivity(const string&);
    void readFile();
    void saveToFile();
    void ShowCompany();
    int getSize();
    ~Directory();
};