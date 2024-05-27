//#include"Array.h"
//#include "Point.h"
//
//#include<conio.h>
//#include <string.h>
//
//
//template<>
//class Array<const char*>
//{
//	const char*** mas;
//	int size_n;
//	int size_m;
//	char* Gets();
//public:
//	Array(int, int);
//	void Vvod();
//	void Print();
//	Array operator+(const Array&) const;
//	Array operator-(const Array&) const;
//	int MaxElem();
//	int MinElem();
//	~Array();
//
//};
//
//char* Array<const char*>::Gets()
//{
//	char ch;
//	int n = 0;
//	char* str = nullptr;
//	while ((ch = getchar()) != '\n')
//	{
//		str = (char*)realloc(str, n + 1);
//		str[n] = ch;
//		n++;
//	}
//	str = (char*)realloc(str, n + 1);
//	str[n] = 0;
//	return str;
//}
//
//inline Array<const char*>::Array(int n, int m)
//	{
//		this->size_n = n;
//		this->size_m = m;
//		this->mas = new const char** [this->size_n];
//		for (int i = 0; i < this->size_n; i++)
//		{
//			this->mas[i] = new const char* [this->size_m];
//			for (int j = 0; j < this->size_n; j++)
//			{
//				this->mas[i][j] = (char*)calloc(1, 1);
//			}
//		}
//}
//
//inline void Array<const char*>::Vvod()
//{
//	cout << "Vvedit znachennia elementiv char massuva:\n";
//	for (int i = 0; i < this->size_n; i++)
//	{
//		for (int j = 0; j < this->size_m; j++)
//		{
//			cout << "element: " << i << "-" << j << ":\t";
//			this->mas[i][j] = Gets();
//		}
//	}
//}
//
//inline void Array<const char*>::Print()
//{
//	for (int i = 0; i < this->size_n; i++)
//	{
//		for (int j = 0; j < this->size_m; j++)
//		{
//			if (strlen(this->mas[i][j]) == 0)
//				cout << setw(20) << '-' << "\t";
//			else
//				cout << setw(20) << this->mas[i][j] << "\t";
//		}
//		cout << "\n";
//	}
//	cout << "-----------------------------------------------------------\n";
//}
//
//inline Array<const char*> Array<const char*>::operator+(const Array<const char*>& ar) const
//{
//	if (this->size_n != ar.size_n || this->size_m != ar.size_m)
//	{
//		cout << "Dodavannia nemogluve.\n";
//		exit(1);
//	}
//	else
//	{
//		Array tmp(this->size_n, this->size_m);
//		for (int i = 0; i < this->size_n; i++)
//		{
//			for (int j = 0; j < this->size_m; j++)
//			{
//				char* buff = (char*)calloc(strlen(this->mas[i][j]) + strlen(ar.mas[i][j]) + 1,1);
//  				strcat_s(buff, strlen(this->mas[i][j]) + 1, this->mas[i][j]);
//				strcat_s(buff, strlen(buff) + strlen(ar.mas[i][j]) + 1, ar.mas[i][j]);
//				tmp.mas[i][j] = buff;
//			}
//		}
//		return tmp;
//	}
//}
//
//inline Array<const char*> Array<const char*>::operator-(const Array<const char*>& ar) const
//{
//	if (this->size_n != ar.size_n || this->size_m != ar.size_m)
//	{
//		cout << "Vudnimannia nemogluve.\n";
//		exit(1);
//	}
//	else
//	{
//		Array Tmp(this->size_n, this->size_m);
//		for (int i = 0; i < this->size_n; i++)
//		{
//			for (int j = 0; j < this->size_m; j++)
//			{
//				char* str = (char*)calloc(strlen(this->mas[i][j]) + 1, 1);
//				strcat_s(str, strlen(this->mas[i][j]) + 1, this->mas[i][j]);
//
//				char* tmp;
//				while ((tmp = strpbrk(str, ar.mas[i][j])) != NULL)
//				{
//					strcpy_s(tmp, strlen(tmp + 1) + 1, tmp + 1);
//					str = (char*)realloc(str, strlen(str) + 1);
//				}
//				Tmp.mas[i][j]=str;
//			}
//		}
//		return Tmp;
//	}
//}
//
//inline int Array<const char*>::MaxElem()
//{
//	int Max = strlen(this->mas[0][0]);
//	for (int i = 0; i < this->size_n; i++)
//	{
//		for (int j = 0; j < this->size_m; j++)
//		{
//			if (strlen(this->mas[i][j]) > Max)
//				Max = strlen(this->mas[i][j]);
//		}
//	}
//	return Max;
//}
//inline int Array<const char*>::MinElem()
//{
//	int Min = strlen(this->mas[0][0]);
//	for (int i = 0; i < this->size_n; i++)
//	{
//		for (int j = 0; j < this->size_m; j++)
//		{
//			if (strlen(this->mas[i][j]) < Min)
//				Min = strlen(this->mas[i][j]);
//		}
//	}
//	return Min;
//}
//
//inline Array<const char*>::~Array()
//{
//	for (int i = 0; i < this->size_n; i++)
//	{
//		for (int j = 0; j < this->size_m; j++)
//		{
//			free((char*)this->mas[i][j]);
//		}
//		delete[]this->mas[i];
//		this->mas[i] = nullptr;
//	}
//	delete[]this->mas;
//	this->mas = nullptr;
//}
//
//
//int main()
//{
//	Array<int> obj(3,3);
//	obj.Print();
//	system("pause");
//	char ch;
//	int f = 0;
//	do
//	{
//		system("cls");
//		cout << "Vuberit tup massuva:\n";
//		cout << "1 - int.\n";
//		cout << "2 - double.\n";
//		cout << "3 - char.\n";
//		cout << "4 - char*.\n";
//		cout << "5 - class Point.\n";
//		cout << "0 - vuhid.\n";
//		ch = _getch();
//		switch (ch)
//		{
//		case '1':
//			{
//				system("cls");
//				int n;
//				cout << "Vvedit kilkist strochok massuva:\n";
//				cin >> n;
//				int n1;
//				cout << "Vvedit kilkist stovbchukiv massuva:\n";
//				cin >> n1;
//				Array<int> obj1_int(n, n1);
//				obj1_int.Vvod();
//				obj1_int.Print();
//				int m;
//				cout << "Vvedit kilkist strochok massuva:\n";
//				cin >> m;
//				int m1;
//				cout << "Vvedit kilkist stovbchukiv massuva:\n";
//				cin >> m1;
//				Array<int> obj2_int(m, m1);
//				obj2_int.Vvod();
//				obj2_int.Print();
//				Array<int> obj3_int = obj1_int + obj2_int;
//				cout << "Dodavannia massuviv:\n";
//				obj3_int.Print();
//				Array<int> obj4_int = obj1_int - obj2_int;
//				cout << "Vidnimannia massuviv:\n";
//				obj4_int.Print();
//				cout << "Max element 1 massuva:\t" << obj1_int.MaxElem() << "\n";
//				cout << "Min element 1 massuva:\t" << obj1_int.MinElem() << "\n";
//				system("pause");
//				break;
//			}
//		case '2':
//			{
//				system("cls");
//				int n2;
//				cout << "Vvedit kilkist strochok massuva:\n";
//				cin >> n2;
//				int n3;
//				cout << "Vvedit kilkist stovbchukiv massuva:\n";
//				cin >> n3;
//				Array<double> obj1_double(n2, n3);
//				obj1_double.Vvod();
//				obj1_double.Print();
//				int m2;
//				cout << "Vvedit kilkist strochok massuva:\n";
//				cin >> m2;
//				int m3;
//				cout << "Vvedit kilkist stovbchukiv massuva:\n";
//				cin >> m3;
//				Array<double> obj2_double(m2, m3);
//				obj2_double.Vvod();
//				obj2_double.Print();
//				Array<double> obj3_double = obj1_double + obj2_double;
//				cout << "Dodavannia massuviv:\n";
//				obj3_double.Print();
//				Array<double> obj4_double = obj1_double - obj2_double;
//				cout << "Vidnimannia massuviv:\n";
//				obj4_double.Print();
//				cout << "Max element 1 massuva:\t" << obj1_double.MaxElem() << "\n";
//				cout << "Min element 1 massuva:\t" << obj1_double.MinElem() << "\n";
//				system("pause");
//				break;
//			}
//		case '3':
//			{
//				system("cls");
//				int n4;
//				cout << "Vvedit kilkist strochok massuva:\n";
//				cin >> n4;
//				int n5;
//				cout << "Vvedit kilkist stovbchukiv massuva:\n";
//				cin >> n5;
//				Array<char> obj1_char(n4, n5);
//				obj1_char.Vvod();
//				obj1_char.Print();
//				int m4;
//				cout << "Vvedit kilkist strochok massuva:\n";
//				cin >> m4;
//				int m5;
//				cout << "Vvedit kilkist stovbchukiv massuva:\n";
//				cin >> m5;
//				Array<char> obj2_char(m4, m5);
//				obj2_char.Vvod();
//				obj2_char.Print();
//				Array<char> obj3_char = obj1_char + obj2_char;
//				cout << "Dodavannia massuviv:\n";
//				obj3_char.Print();
//				Array<char> obj4_char = obj1_char - obj2_char;
//				cout << "Vidnimannia massuviv:\n";
//				obj4_char.Print();
//				cout << "Max element 1 massuva:\t" << obj1_char.MaxElem() << "\n";
//				cout << "Min element 1 massuva:\t" << obj1_char.MinElem() << "\n";
//				system("pause");
//				break;
//			}
//		case'4':
//			{
//				system("cls");
//				int n;
//				cout << "Vvedit kilkist strochok massuva:\n";
//				cin >> n;
//				int n1;
//				cout << "Vvedit kilkist stovbchukiv massuva:\n";
//				cin >> n1;
//				cin.ignore();
//				Array<const char*> obj1_str(n, n1);
//				obj1_str.Vvod();
//				obj1_str.Print();
//				int m;
//				cout << "Vvedit kilkist strochok massuva:\n";
//				cin >> m;
//				int m1;
//				cout << "Vvedit kilkist stovbchukiv massuva:\n";
//				cin >> m1;
//				cin.ignore();
//				Array<const char*> obj2_str(m, m1);
//				obj2_str.Vvod();
//				obj2_str.Print();
//				Array<const char*> obj3_str = obj1_str + obj2_str;
//				cout << "Dodavannia massuviv:\n";
//				obj3_str.Print();
//
//				Array<const char*> obj4_str = obj1_str - obj2_str;
//				cout << "Vudnimannia massuviv:\n";
//				obj4_str.Print();
//				cout << "Max element 1 massuva:\t" << obj1_str.MaxElem() << "\n";
//				cout << "Min element 1 massuva:\t" << obj1_str.MinElem() << "\n";
//				system("pause");
//				break;
//			}
//		case'5':
//		{
//			system("cls");
//			int n;
//			cout << "Vvedit kilkist strochok massuva:\n";
//			cin >> n;
//			int n1;
//			cout << "Vvedit kilkist stovbchukiv massuva:\n";
//			cin >> n1;
//			Array<Point> obj1_p(n, n1);
//			obj1_p.Vvod();
//			obj1_p.Print();
//			int m;
//			cout << "Vvedit kilkist strochok massuva:\n";
//			cin >> m;
//			int m1;
//			cout << "Vvedit kilkist stovbchukiv massuva:\n";
//			cin >> m1;
//			Array<Point> obj2_p(m, m1);
//			obj2_p.Vvod();
//			obj2_p.Print();
//			Array<Point> obj3_p = obj1_p + obj2_p;
//			cout << "Dodavannia massuviv:\n";
//			obj3_p.Print();
//			Array<Point> obj4_p = obj1_p - obj2_p;
//			cout << "Vidnimannia massuviv:\n";
//			obj4_p.Print();
//			cout << "Max element 1 massuva:\t" << obj1_p.MaxElem() << "\n";
//			cout << "Min element 1 massuva:\t" << obj1_p.MinElem() << "\n";
//			system("pause");
//			break;
//		}
//		}
//	} while (ch != '0');
//}