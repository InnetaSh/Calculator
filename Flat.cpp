#include "Flat.h"

Flat::Flat()
{
	this->size = 0;
	this->mas = nullptr;
	this->Number = 0;
}

Flat::Flat(const Flat& FlatCopy)
{
	this->size = FlatCopy.size;
	this->Number = FlatCopy.Number;
	this->mas = new Human[this->size];
	for (int i = 0; i < this->size; i++)
	{
		this->mas[i] = FlatCopy.mas[i];
	}
}

Flat& Flat::operator=(const Flat& FlatCopy)
{
	if (this != &FlatCopy)
	{
		if (this->mas != nullptr)
		{
			delete[] mas;
		}

		this->size = FlatCopy.size;
		this->Number = FlatCopy.Number;
		this->mas = new Human[this->size];
		for (int i = 0; i < this->size; i++)
		{
			this->mas[i] = FlatCopy.mas[i];
		}
		return *this;
	}
}

void Flat::AddHuman()
{
	Human tmp;
	tmp.Vvod();
	int flag = 0;
	for (int i = 0; i < size; i++)
	{
		if (strcmp(tmp.Get_Fio(), this->mas[i].Get_Fio()) == 0)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		Human* New = new Human[size + 1];
		for (int i = 0; i < size; i++)
		{
			New[i] = mas[i];
		}
		New[size] = tmp;
		delete[] mas;
		mas = New;
		size++;
		cout << "Liuduna zaselena do kvartiru.\n";
	}
	else
		cout << "Taka liuduna vge zaselena do kvartiru.\n";
}

void Flat::DelHuman()
{
	char str[20];
	cout << "Vvedit Fio: \n";
	gets_s(str);
	int flag = 0;
	
	for (int i = 0; i < this->size; i++)
	{
		if (strcmp(str, this->mas[i].Get_Fio()) == 0)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		Human* New = new Human[this->size - 1];
		int j = 0;
		for (int i = 0; i < this->size; i++)
		{
			if (strcmp(str, this->mas[i].Get_Fio()) != 0)
			{
				New[j] = mas[i];
				j++;
			}
		}
		delete[] this->mas;
		this->mas = New;
		size--;
		cout << "Liuduna vuselena z kvartiru.\n";
	}
	else
		cout << "Taka liuduna ne zaselena do kvartiru.\n";
}

void Flat::Show()
{
	cout << "Nomer kvartiru:\t" << this->Number << "\n";
	cout << "Proguvaiut "<<this->size<<" liudunu:\n";
	for (int i = 0; i < this->size; i++)
	{
		cout << i + 1 << ":\n";
		this->mas[i].Show();
	}
}

void Flat::SetNumber(int n)
{
	this->Number = n;
}

int Flat::FindFioByHuman(const char* str)
{

	int flag = 0;

	for (int i = 0; i < this->size; i++)
	{
		if (strcmp(this->mas[i].Get_Fio(),str) == 0)
		{
			cout << "Liuduna " << str << " give v kvartiru : " << this->Number << "\n";
			this->mas[i].Show();
			flag = 1;
		}
	}
	return flag;
}

int Flat::GetSize()
{
	return this->size;
}

Flat::~Flat()
{
	delete[] this->mas;
}


