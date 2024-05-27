#pragma once
#include <iostream>
using namespace std;
class TestItem2
{
    int Num;
public:
    TestItem2(int num) :Num(num)
    {
        cout << "TestItem shared_ptr constructed." << endl;
    }
    void Print()
    {
        cout << "Num2 = " << Num << "\n";
    }

    ~TestItem2() {
        cout << "TestItem shared_ptr destructed." << endl;
    }
};

