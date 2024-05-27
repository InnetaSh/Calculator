#include<iostream>
using namespace std;
#include<conio.h>
#include<Windows.h>

double Sum(double, double);
double Sub(double, double);
double Mult(double, double);
double Div(double, double);

int main()
{

	char ch;
	do {
		system("cls");
		cout << "Vvedit pershe chislo:\t" << endl;
		double num1;
		cin >> num1;
		cout << "Vvedit gruge chislo:\t" << endl;
		double num2;
		cin >> num2;
		cout << "Menu: vuberit operaciu:\n";
		cout << "1 - dodavannia.\n";
		cout << "2 - vidnimannia.\n";
		cout << "3 - mnogennia.\n";
		cout << "4 - dilennia.\n";
		cout << "0 - vuhid.\n";
		ch = _getch();
		Sleep(1000);
		switch (ch)
		{
		case '1':
		{
			cout << num1 << "+" << num2 << " = " << Sum(num1, num2) << endl;
			system("pause");
			break;
		}

		case '2':system("cls");
			cout << num1 << "-" << num2 << " = " << Sub(num1, num2) << endl;
			system("pause");
			break;

		case '3':
		{
			system("cls");
			cout << num1 << "*" << num2 << " = " << Mult(num1, num2) << endl;
			system("pause");
			break;

		}
		case '4':
		{
			system("cls");
			try
			{
				cout << num1 << "/" << num2 << " = " << Div(num1, num2) << endl;
			}
			catch(...)
			{
				cout << "Error"<<endl;
			}
			system("pause");
			break;

		}
		}
	} while (ch != '0');
}


double Sum(double num1, double num2)
{
	return num1 + num2;
}

double Sub(double num1, double num2)
{
	return num1 - num2;
}

double Mult(double num1, double num2)
{
	return num1 * num2;
}

double Div(double num1, double num2)
{
	if (num2 != 0)
		return num1 / num2;
	throw"Dilena na null.\n";
}

