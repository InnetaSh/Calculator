//#include"Directory.h"
//#include<conio.h>
//#include<Windows.h>
//int main()
//{
//	Directory directory("data.txt");
//	directory.readFile();
//
//
//	char ch;
//	do {
//		system("cls");
//		cout << "Menu:\n";
//		cout << "1 - dodatu companiiu do dovidnuka.\n";
//		cout << "2 - drykyvatu vsi companii z dovidnuka.\n";
//		cout << "3 - poshyk companii za nazvoiiu.\n";
//		cout << "4 - poshyk companii za vlasnukom.\n";
//		cout << "5 - poshyk companii za nomerom telephona.\n";
//		cout << "6 - poshyk companii za rodom diialnosti.\n";
//		cout << "0 - vuhid.\n";
//		ch = _getch();
//		Sleep(1000);
//		switch (ch)
//		{
//		case '1':
//		{
//			system("cls");
//			cout << "Vidit nazvy companii:\n";
//			string name;
//			cin >> name;
//			if (directory.findName(name))
//			{
//				cout << "Taka companiia vge zaselena do dovidnuka.\n";
//				Sleep(1000);
//				break;
//			}
//
//			cout << "Vidit Fio vlasnuka:\n";
//			string Fio;
//			cin >> Fio;
//
//			cout << "Vidit telephon companii:\n";
//			string phone;
//			cin >> phone;
//
//			cout << "Vidit addessy companii:\n";
//			string address;
//			cin >> address;
//
//			cout << "Vidit pid diialnosti companii:\n";
//			string activity;
//			cin >> activity;
//			cin.ignore();
//
//			cout << directory.addCompany(name, Fio, phone, address, activity);
//			cout << "Zberigtu danni pro companiiu ? (tak / ni)\n";
//			string flag;
//			cin >> flag;
//			if (flag == "tak")
//			{
//				directory.saveToFile();
//				cout << "Companiia dodana do dovidnuka.\n";
//			}
//
//			Sleep(1000);
//			break;
//		}
//
//		case '2':system("cls");
//			if (directory.getSize() != 0)
//			{
//				directory.ShowCompany();
//				system("pause");
//				break;
//			}
//			else
//			{
//				cout << "Dovidnuk pyst.\n";
//				Sleep(1000);
//			}
//			break;
//
//		case '3':system("cls");
//			if (directory.getSize() != 0)
//			{
//				cout << "Vidit nazvy companii:\n";
//				string companyName;
//				getline(cin, companyName);
//				directory.searchByName(companyName);
//				system("pause");
//			}
//			else
//			{
//				cout << "Dovidnuk pyst.\n";
//				Sleep(1000);
//			}
//			break;
//
//		case '4':system("cls");
//			if (directory.getSize() != 0)
//			{
//				cout << "Vidit Fio vlasnuka companii:\n";
//				string companyOwnerFio;
//			
//				getline(cin,companyOwnerFio);
//				directory.searchByOwnerFio(companyOwnerFio);
//				system("pause");
//			}
//			else
//			{
//				cout << "Dovidnuk pyst.\n";
//				Sleep(1000);
//			}
//			break;
//
//
//		case '5':system("cls");
//			if (directory.getSize() != 0)
//			{
//				cout << "Vidit telephone companii:\n";
//				string companyPhone;
//				getline(cin, companyPhone);
//				directory.searchByCompanyPhone(companyPhone);
//				system("pause");
//			}
//			else
//			{
//				cout << "Dovidnuk pyst.\n";
//				Sleep(1000);
//			}
//			break;
//
//
//		case '6':system("cls");
//			if (directory.getSize() != 0)
//			{
//				cout << "Vidit rod diialnosti companii:\n";
//				string companyTypeOfActivity;
//				getline(cin, companyTypeOfActivity);
//				directory.searchByCompanyTypeOfActivity(companyTypeOfActivity);
//				system("pause");
//			}
//			else
//			{
//				cout << "Dovidnuk pyst.\n";
//				Sleep(1000);
//			}
//			break;
//
//		}
//	} while (ch != '0');
//		directory.saveToFile();
//}