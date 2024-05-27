#pragma once
#include<iostream>
#include<Windows.h>
#include <iomanip>
using namespace std;
template<typename T>
class Array
{
	
	int size_n;
	int size_m;
	T** mas;
public:
	Array();
	Array(int,int);
	Array(const Array&);
	Array& operator=(const Array&) const;
	void Vvod();
	void Print();
	Array operator+(const Array&) const;
	Array operator-(const Array&) const;
	T MaxElem();
	T MinElem();
	~Array();
};

template<typename T>
inline Array<T>::Array()
{
	this->size_n = 0;
	this->size_m = 0;
	this->mas = nullptr;
}

template<typename T>
inline Array<T>::Array(int n, int m)
{
	this->size_n = n;
	this->size_m = m;
	this->mas = new T * [this->size_n] {};
	for (int i = 0; i < this->size_n; i++)
	{
		this->mas[i] = new T[this->size_m]{};
	}
}

template<typename T>
inline Array<T>::Array(const Array& ArCopy)
{
	this->size_n = ArCopy.size_n;
	this->size_m = ArCopy.size_m;
	this->mas = new T * [this->size_n];
	for (int i = 0; i < this->size_n; i++)
	{
		this->mas[i] = new T[this->size_m];
	}
	for (int i = 0; i < this->size_n; i++)
	{
		for (int j = 0; j < this->size_m; j++)
		{
			this->mas[i][j] = ArCopy.mas[i][j];
		}
	}
}

template<typename T>
inline Array<T>& Array<T>::operator=(const Array<T>& ArCopy) const
{
	if (*this != &ArCopy)
	{
		if (this != nullptr)
		{
			for (int i = 0; i < this->size_n; i++)
				if (this->mas[i] != nullptr)
					delete[] this->mas[i];
			delete[] this->mas;
		}
		this->size_n = ArCopy.size_n;
		this->size_m = ArCopy.size_m;
		this->mas = new T * [this->size_n];
		for (int i = 0; i < this->size_n; i++)
		{
			this->mas[i] = new T[this->size_m];
		}
		for (int i = 0; i < this->size_n; i++)
		{
			for (int j = 0; j < this->size_m; j++)
			{
				this->mas[i][j] = ArCopy.mas[i][j];
			}
		}
	}
	return Array();
}

template<typename T>
inline void Array<T>::Vvod()
{
	cout << "Vvedit znachennia elementiv massuva:\n";
	for (int i = 0; i < this->size_n; i++)
	{
		for (int j = 0; j < this->size_m; j++)
		{
			cout << "element: " << i << "-" << j << ":\t";
			cin >>this-> mas[i][j];
		}
	}
}

template<typename T>
inline void Array<T>::Print()
{
	for (int i = 0; i < this->size_n; i++)
	{
		for (int j = 0; j < this->size_m; j++)
		{
			cout << setw(6) << this->mas[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "-----------------------------------------------------------\n";
}


template<typename T>
inline Array<T> Array<T>::operator+(const Array<T>& ar) const
{
	if (this->size_n != ar.size_n || this->size_m != ar.size_m)
	{
		cout << "Dodavannia nemogluve.\n";
		exit(1);
	}

	else
	{
		Array tmp(this->size_n, this->size_m);
		for (int i = 0; i < this->size_n; i++)
		{
			for (int j = 0; j < this->size_m; j++)
			{
				tmp.mas[i][j] = this->mas[i][j] + ar.mas[i][j];
			}
		}
		return tmp;
	}
}



template<typename T>
inline Array<T> Array<T>::operator-(const Array<T>& ar) const
{
	if (this->size_n != ar.size_n && this->size_m != ar.size_m)
	{
		cout << "Vidnimannia nemogluve.\n";
		exit(1);
	}
	else
	{
		Array tmp(this->size_n, this->size_m);
		for (int i = 0; i < this->size_n; i++)
		{
			for (int j = 0; j < this->size_m; j++)
			{
				tmp.mas[i][j] = this->mas[i][j] - ar.mas[i][j];
			}
		}
		return tmp;
	}
}

template<typename T>
inline T Array<T>::MaxElem()
{
	T Max = this->mas[0][0];
	for (int i = 0; i < this->size_n; i++)
	{
		for (int j = 0; j < this->size_m; j++)
		{
			if (this->mas[i][j] > Max)
				Max = this->mas[i][j];
		}
	}
	return Max;
}
template<typename T>
inline T Array<T>::MinElem()
{
	T Min = this->mas[0][0];
	for (int i = 0; i < this->size_n; i++)
	{
		for (int j = 0; j < this->size_m; j++)
		{
			if (this->mas[i][j] < Min)
				Min = this->mas[i][j];
		}
	}
	return Min;
}

template<typename T>
inline Array<T>::~Array()
{
	for (int i = 0; i < this->size_n; i++)
	{
		delete []this->mas[i];
		this->mas[i] = nullptr;
	}
	delete[]this->mas;
	this->mas = nullptr;
}


