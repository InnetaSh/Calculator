#include "Grupa.h"

Grupa::Grupa(char* str)
{
	strcpy_s(this->Name, str);
	this->size = 0;
}

void Grupa::Add()
{
	if (this->size < 10)
	{
		this->mas[size].Vvod();
		this->size++;
	}
	else
	{
		cout << "Grupa zapovnena.\n";
	}
}

void Grupa::Print()
{
	if (this->size > 0)
	{
		cout << "Grupa:\t" << this->Name << "\n\n";
		for (int i = 0; i < this->size; i++)
		{
			cout << i + 1 << " - student:\n";
			this->mas[i].Show();
			cout << "--------------------------------------\n";
		}
	}
	else
	{
		cout << "Grupa pysta.\n";
	}
}

void Grupa::Vudalennia()
{
	char str[25];
	cout << "Vvedit Fio studenta: ";
	gets_s(str);
	int f = 0;
	for (int i = 0; i < this->size; i++)
	{
		if (_stricmp(str, this->mas[i].Get_Fio()) == 0)
		{
			f = 1;
			for (int j = i; j < this->size - 1; j++)
			{
				this->mas[j] = this->mas[j + 1];
			}
			this->size--;
		}
	}
	if (f == 0)
	{
		cout << "Student vidsutniy.\n";
	}
	else
	{
		cout << "Student vidaleniy.\n";
	}
}

void Grupa::FindStydent()
{
	if (this->size > 0)
	{
		char str[25];
		cout << "Vvedit Fio studenta: ";
		gets_s(str);
		int f = 0;
		for (int i = 0; i < this->size; i++)
		{
			if (_stricmp(str, this->mas[i].Get_Fio()) == 0)
			{
				f = 1;
				this->mas[i].Show();
			}
		}
		if (f == 0)
		{
			cout << "Studenta ne znaideno.\n";

		}
	}
	else
	{
		cout << "Grupa pysta.\n";
	}
	
}
void Grupa::SortByStudent()
{
	if (this->size > 0)
	{
		for (int i = 0; i < this->size; i++)
		{
			for (int j = this->size - 1; j > i; j--)
			{
				if (_stricmp(this->mas[j].Get_Fio(), this->mas[j - 1].Get_Fio()) < 0)
				{
					Student tmp = this->mas[j];
					this->mas[j] = this->mas[j - 1];
					this->mas[j - 1] = tmp;
				}
			}
		}
	}
	else
	{
		cout << "Grupa pysta.\n";
	}
}

Grupa::~Grupa()
{
	
	free(this->mas);
	
}
