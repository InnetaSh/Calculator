//#include "Train.h"
//#include <vector>
//#include<conio.h>
//#include<Windows.h>
//
//int main()
//{
//	vector<Train> trains;
//	
//	char ch;
//	do {
//		system("cls");
//		cout << "Menu:\n";
//		cout << "1 - dodatu poizd u rocklad.\n";
//		cout << "2 - drykyvatu informaciu pro vsi poizdu.\n";
//		cout << "3 - drykyvatu informaciu pro shykanui nomer poizda.\n";
//		cout << "4 - drykyvatu informaciu pro poiz, sho ide do shykanui stancii.\n";
//		cout << "0 - vuhid.\n";
//		ch = _getch();
//		Sleep(1000);
//		switch (ch)
//		{
//		case '1':
//		{
//			system("cls");
//			cout << "Vvedit nomer poizda: \n";
//			int numberTrain;
//			cin >> numberTrain;
//
//			cout << "Vvedit chas vidpravlennia: \n";
//			cout << "Godunu:\n";
//			int h;
//			cin >> h;
//			while (h < 0 || h>24)
//			{
//				cout << "Nevirnui vvod. Vvedit goduny vidpravlennia: \n";
//				cin >> h;
//			}
//			cout << "hvulunu:\n";
//			int min;
//			cin >> min;
//			while (min < 0 || min>60)
//			{
//				cout << "Nevirnui vvod. Vvedit hvulunu vidpravlennia: \n";
//				cin >> min;
//			}
//			cin.ignore();
//			cout << "Vvedit stanciiu: \n";
//			string strStation;
//			getline(cin, strStation);
//
//
//			Train train(numberTrain, h, min, strStation);
//			trains.push_back(train);
//
//			Sleep(000);
//			break;
//		}
//
//		case '2':system("cls");
//			if (trains.size() != 0)
//			{
//				for (auto& n : trains)
//				{
//					n.Print();
//					cout << "-------------------------------------------------\n";
//				}
//			}
//			else
//				cout << "Rozklad poizdiv pyst.\n";
//			system("pause");
//			break;
//
//		case '3':
//		{
//			system("cls");
//			if (trains.size() != 0)
//			{
//				bool f = false;
//				cout << "Vvedit nomer poizda dlyia poshuka: \n";
//				int findNumber;
//				cin >> findNumber;
//				for (auto& n : trains)
//				{
//					if (n.getNumber() == findNumber)
//					{
//						n.Print();
//						f = true;
//						break;
//					}
//				}
//				if (f == false)
//					cout << "Takogo poizda nema.\n";
//			}
//			else
//				cout << "Rozklad poizdiv pyst.\n";
//			system("pause");
//			break;
//
//		}
//		case '4':
//		{
//			system("cls");
//			if (trains.size() != 0)
//			{
//				bool f = false;
//				cout << "Vvedit nazvu stancii dlyia poshuka: \n";
//				string findStation;
//				getline(cin, findStation);
//				for (auto& n : trains)
//				{
//					if (n.getStation() == findStation)
//					{
//						n.Print();
//						f = true;
//						break;
//					}
//				}
//				if (f == false)
//					cout << "Takogo poizda nema.\n";
//			}
//			else
//				cout << "Rozklad poizdiv pyst.\n";
//			system("pause");
//			break;
//
//		}
//		}
//	} while (ch != '0');
//}
