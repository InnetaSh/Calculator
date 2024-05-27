#include "Human.h"
#include<iostream>
char* Human::Gets()
{
    char ch;
    int n = 0;
    char* str = nullptr;
    while ((ch = getchar()) != '\n')
    {
        str = (char*)realloc(str, n + 1);
        str[n] = ch;
        n++;
    }
    str = (char*)realloc(str, n + 1);
    str[n] = 0;
    return str;
}

Human::Human()
{
    Fio = nullptr;
}
Human::Human(const Human& CopyHuman)
{
    this->Age = CopyHuman.Age;
    this->Fio = (char*)malloc(strlen(CopyHuman.Fio) + 1);
    strcpy_s(this->Fio, strlen(CopyHuman.Fio) + 1, CopyHuman.Fio);

}

Human& Human::operator=(const Human& CopyHuman)
{
    if (this != &CopyHuman)
    {
        if (this->Fio != nullptr)
            free(this->Fio);
        this->Age = CopyHuman.Age;
        this->Fio = (char*)malloc(strlen(CopyHuman.Fio) + 1);
        strcpy_s(this->Fio, strlen(CopyHuman.Fio) + 1, CopyHuman.Fio);
    }
    return *this;
}

void Human::Vvod()
{
    cout << "Vidit Fio:\n";
    if (this->Fio != nullptr)
        free(this->Fio);
    this->Fio = Gets();
    cout << "Vvedit vik:\n";
    cin >> this->Age;
    cin.ignore();
}

void Human::Show()
{
    cout << "Fio:\t" << this->Fio << "\nAge:\t" << this->Age << "\n";
}

char* Human::Get_Fio()
{
    return this->Fio;
}



Human::~Human()
{
    free(this->Fio);
}
