#pragma once
#include<iostream>
#include<string>
using namespace std;
class Company
{
	string FirmName;
	string FioOwner;
	int Phone;
	string Address;
	string TypeOfActivity;
public:
	Company();
	Company(string name, string owner, int phone, string address, string activity)
		: FirmName(name), FioOwner(owner), Phone(phone), Address(address), TypeOfActivity(activity) {}
	string getFirmName();
	string getFioOwner();
	int getPhone();
	string getAddress();
	string getTypeOfActivity();
	friend ostream& operator<<(ostream&, const Company&);
};

