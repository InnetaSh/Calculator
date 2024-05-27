#include "String.h"

char* String::Gets()
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

String::String()
{
    this->str = nullptr;
}


String::String(const String& CopyStr)
{
    this->str = (char*)malloc(strlen(CopyStr.str) + 1);
    strcpy_s(this->str, strlen(CopyStr.str) + 1, CopyStr.str);

}

String& String::operator=(const String& CopyStr)
{
    if (this != &CopyStr)
    {
        if (this->str != nullptr)
            free(this->str);
        this->str = (char*)malloc(strlen(CopyStr.str) + 1);
        strcpy_s(this->str, strlen(CopyStr.str) + 1, CopyStr.str);
    }
    return *this;
}

void String::Vvod()
{
    cout << "Vidit text:\n";
    if (this->str != nullptr)
        free(this->str);
    this->str = Gets();
}

void String::Show()
{
    cout << this->str << "\n";
}

String& String::operator++()
{
    int len = strlen(this->str) + 1;
    this->str = (char*)realloc(this->str, len + 1);
    str[len - 1] = ' ';
    str[len] = '\0';
    return *this;
    
}

String String::operator++(int p)
{
    String tmp = *this;
    int len = strlen(this->str) + 1;
    this->str = (char*)realloc(this->str, len + 1);
    str[len - 1] = ' ';
    str[len] = '\0';
    return tmp;
}

String& String::operator--()
{
    int len = strlen(this->str);
    this->str[len - 1] = '\0';
    this->str = (char*)realloc(str, len + 1);
    return *this;
}

String String::operator--(int p)
{
    String tmp = *this;
    int len = strlen(this->str);
    this->str[len - 1] = '\0';
    this->str = (char*)realloc(str, len + 1);
    return tmp;
}

char& String::operator[](int i) const
{
    if (i < 0)
    {
        cout << "Indeks za megamu stroku. 1 element = ";
        return this->str[0];
    }
    if (i > strlen(this->str) - 1)
    {
        cout << "Indeks za megamu stroku. "<< strlen(this->str) - 1<<" element = ";
        return this->str[strlen(this->str) - 1];
    }
    return this->str[i];
}

int String::operator()(char ch, int l, int r)
{
    for (int i = l; i <= r; i++)
    {
        if (this->str[i] == ch)
            return i;
    }
    return -1;
}

String::operator int()
{
    return strlen(this->str);
}

String::~String()
{
        free(this->str);
        this->str = nullptr;
}
