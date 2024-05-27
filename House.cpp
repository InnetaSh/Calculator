#include "House.h"

House::House(int n)
{
	this->size = n;

	this->mas = new Flat[this->size];
	for (int i = 0; i < this->size; i++)
	{
		this->mas[i].SetNumber(i + 1);
	}
	cout << "Vvedit adress:\n";
	cout << "nazva vuluci:\t";
	gets_s(this->Adress_Street);
	cout << "nomer doma:\t";
	cin >> this->numHouse;
	cin.ignore();
}

void House::Zaselenie()
{
	int num;
	cout << "Vvedit nomer kvartiru:\t";
	cin >> num;
	cin.ignore();
	if (num > 0 && num < this->size)
		this->mas[num - 1].AddHuman();
	else
		cout << "Takogo nomera kvartiu net.\n";
}

void House::Vuselenie()
{
	int num;
	cout << "Vvedit nomer kvartiru:\t";
	cin >> num;
	cin.ignore();
	if (num > 0 && num < this->size)
	{
		if (this->mas[num - 1].GetSize() != 0)
			this->mas[num - 1].DelHuman();
		else
			cout << "Kvartira pysta.\n";
	}
	else
		cout << "Takogo nomera kvartiu net.\n";
}

void House::Show()
{
	cout << "Adress:\n";
	cout<<"Vulucia:\t"<< this->Adress_Street << "\n";
	cout << "Nomer doma:\t" << this->numHouse << "\n";
	int f = 0;
	for (int i = 0; i < this->size; i++)
	{
		if (this->mas[i].GetSize() != 0)
		{
			this->mas[i].Show();
			f = 1;
		}
	}
	if (f == 0)
		cout << "Dom pyst.\n";
}

void House::ShowFlat()
{
	int num;
	cout << "Vvedit nomer kvartiru:\t";
	cin >> num;
	cin.ignore();
	if (num > 0 && num < this->size)
	{
		if (this->mas[num - 1].GetSize() != 0)
			this->mas[num - 1].Show();
		else
			cout << "Cia kvartira pysta\n.";
	}
	else
		cout << "Takogo nomera kvartiu net.\n";
}

void House::FindGulca()
{
	char str[20];
	cout << "Vvedit Fio:\n";
	gets_s(str);
	int f = 0;
	for (int i = 0; i < this->size; i++)
	{
		if (this->mas[i].FindFioByHuman(str) == 1)
			f = 1;
	}
	if (f == 0)
		cout << "Taka liuduna ne zaselena do kvartiru.\n";
}
House::~House()
{
	delete[] this->mas;
}

