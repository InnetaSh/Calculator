#pragma once
#include <iostream>
using namespace std;
class TestItem
{
	int Num;
public:
    TestItem( int num):Num(num)
    {
        cout << "TestItem unique_ptr constructed." << endl;
    }
    void Print()
    {
        cout << "Num = " << Num << "\n";
    }

    ~TestItem() {
        cout << "TestItem unique_ptr destructed." << endl;
    }
};

