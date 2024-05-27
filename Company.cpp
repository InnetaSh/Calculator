#include "Company.h"

//void Directory::setFirmName(string s)
//{
//	int lenght = s.size();
//	lenght = (lenght < 14) ? lenght : 14;
//	for (int i = 0; i < lenght; i++)
//		FirmName[i] = s[i];
//	FirmName[lenght] = '\0';
//}

string Company::getFirmName()
{
	return FirmName;
}

string Company::getFioOwner()
{
	return FioOwner;
}

int Company::getPhone()
{
	return Phone;
}

string Company::getAddress()
{
	return Address;
}

string Company::getTypeOfActivity()
{
	return TypeOfActivity;
}

ostream& operator<<(ostream& out, const Company& company)
{
	out << "Company Name: " << company.FirmName << endl;
	out << "Owner: " << company.FioOwner << endl;
	out << "Phone Number: " << company.Phone << endl;
	out << "Address: " << company.Address << endl;
	out << "Activity Type: " << company.TypeOfActivity << endl;
	return out;
}
