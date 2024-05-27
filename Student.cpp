#include "Student.h"


void Student::Vvod()
{
	cout << "Vvedit Fio:\t\t";
	gets_s(this->Fio);
	cout << "Vvedit vik:\t\t";
	cin >> this->Age;
	while (this->Age < 14 || this->Age>60)
	{
		cout << "Nekorectnui vik.Vvedit vik: ";
		cin >> this->Age;
	}
	cin.ignore();
}

void Student::Show()
{
	cout << "Fio:\t" << this->Fio << "\t\t" << "Vik:\t" << this->Age << "\n";
}

char* Student::Get_Fio()
{
	return this->Fio;
}