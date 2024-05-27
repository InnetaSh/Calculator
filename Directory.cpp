#include"Directory.h"

void Directory::Print(int index)
{
	cout << "Compania nomer: " << index + 1 << "\n";
	cout << "Nazva: " << mas[index].CompanyName<<"\n";
	cout << "Fio vlasnuka: " << mas[index].CompanyOwnerFio << "\n";
	cout << "Nomer telephona: " << mas[index].CompanyPhone << "\n";
	cout << "Addressa: " << mas[index].CompanyAddress << "\n";
	cout << "Pid diialnosti: " << mas[index].CompanyTypeOfActivity << "\n";
}

Directory::Directory(const string& fileName)
{
	FileName = fileName;
	this->size = 0;
	this->mas = nullptr;
}

string Directory::addCompany(const string& name, const string& owner, const string& phone, const string& address, const string& activity)
{
	string resalt;
	Company tmp;
	tmp.CompanyName = name;
	tmp.CompanyOwnerFio = owner;
	tmp.CompanyPhone = phone;
	tmp.CompanyAddress = address;
	tmp.CompanyTypeOfActivity = activity;
	int flag = 0;
	for (int i = 0; i <size; i++)
	{
		if (name == this->mas[i].CompanyName)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		Company* New = new Company[size + 1];
		for (int i = 0; i < size; i++)
		{
			New[i] = mas[i];
		}
		New[size] = tmp;
		delete[] mas;
		mas = New;
		size++;
		resalt = "Companiia zaselena do dovidnuka.\n";
	}
	else
		resalt = "Taka companiia vge zaselena do dovidnuka.\n";
	return resalt;
}

void Directory::searchByName(const string& name)
{
	bool flag = false;
	for (int i = 0; i < this->size; ++i) {
		if (mas[i].CompanyName == name) 
		{
			Print(i);
			flag = true;
		}
	}
	if (!flag) {
		std::cout << "Ne znaideno companii z im\'iam: " << name << endl;
	}
}

bool Directory::findName(const string& name)
{
	for (int i = 0; i < this->size; ++i) {
		if (mas[i].CompanyName == name)
		{
			return true;
		}
	}
	return false;
}

void Directory::searchByOwnerFio(const string& Fio)
{
	bool flag = false;
	for (int i = 0; i < this->size; ++i) {
		if (mas[i].CompanyOwnerFio == Fio) 
		{
			Print(i);
			flag = true;
		}
	}
	if (!flag) {
		std::cout << "Ne znaideno companii z vlasnukom: " << Fio << endl;
	}
}

void Directory::searchByCompanyPhone(const string& phone)
{
	bool flag = false;
	for (int i = 0; i < this->size; ++i) {
		if (mas[i].CompanyPhone == phone)
		{
			Print(i);
			flag = true;
		}
	}
	if (!flag) {
		std::cout << "Ne znaideno companii z telephonom: " << phone << endl;
	}
}

void Directory::searchByCompanyTypeOfActivity(const string& activity)
{
	bool flag = false;
	for (int i = 0; i < this->size; ++i) {
		if (mas[i].CompanyTypeOfActivity == activity)
		{
			Print(i);
			flag = true;
		}
	}
	if (!flag) {
		std::cout << "Ne znaideno companii z rodom diialnosti: " << activity << endl;
	}
}

void Directory::readFile()
{
	ifstream f("data.txt", ios::in);
	string CompanyName;
	string CompanyOwnerFio;
	string  CompanyPhone;
	string CompanyAddress;
	string CompanyTypeOfActivity;
	if (f)
	{
		while(getline(f, CompanyName, ';') &&
			getline(f, CompanyOwnerFio, ';') &&
			getline(f, CompanyPhone, ';') &&
			getline(f, CompanyAddress, ';') &&
			getline(f, CompanyTypeOfActivity)) 
		{
			addCompany(CompanyName, CompanyOwnerFio, CompanyPhone, CompanyAddress, CompanyTypeOfActivity);
		}
		
	}
}

void Directory::saveToFile()
{
	ofstream f(FileName, ios::out);
	if (f)
	{
		for (int i = 0; i < size; i++) 
		{
			f << mas[i].CompanyName << ";" << mas[i].CompanyOwnerFio << ";" << mas[i].CompanyPhone << ";" << mas[i].CompanyAddress << ";" << mas[i].CompanyTypeOfActivity << '\n';
		}
		cout << "Companii zapusani u fail.\n";
	}
	else
	{
		cout << "Error.\n";
	}
}

void Directory::ShowCompany()
{
	for (int i = 0; i < size; i++)
	{
		Print(i);
		cout << "----------------------------------------\n";
	}
}

int Directory::getSize()
{
	return size;
}

Directory::~Directory()
{
	delete[]this->mas;
	this->mas = nullptr;
}
