//#include "AreaOfFigures.h"
//
//int AreaOfFigures::kol = 0;
//int main()
//{
//	char ch;
//	do
//	{
//		system("cls");
//		cout << "1 - znaitu ploshy trukutnuka za osnovoiy i vusotoiy.\n";
//		cout << "2 - znaitu ploshy trukutnuka za 2 storonamu i kytom.\n";
//		cout << "3 - znaitu ploshy trukutnuka za 3 storonamu.\n";
//		cout << "4 - znaitu ploshy kvadrata.\n";
//		cout << "5 - znaitu ploshy priamokytnuka.\n";
//		cout << "6 - znaitu ploshy romba za diagonaliamu.\n";
//		cout << "7 - znaitu ploshy romba za storonoiy i kytom.\n";
//		cout << "8 - kilkist pidahynkiv ploshi.\n";
//		cout << "0 - vihid.\n";
//		ch = _getch();
//		switch (ch)
//		{
//		case '1':system("cls");
//			double stor;
//			cout << "Vvedit dovguny osnovu trukutnuka:\t";
//			cin >> stor;
//			double height;
//			cout << "Vvedit dovguny vusotu trukutnuka:\t";
//			cin >> height;
//			cin.ignore();
//			cout << "plosha trukutnuka za osnovoiy i vusotoiy:\t";
//			cout << AreaOfFigures::AreaOfTriacut_byHeight(stor, height) << "kv.od";
//			cout << "\n";
//			system("pause");
//			break;
//		case '2':system("cls");
//			double stor_1;
//			cout << "Vvedit dovguny 1 storonu trukutnuka:\t";
//			cin >> stor_1;
//			double stor_2;
//			cout << "Vvedit dovguny 2 storonu trukutnuka:\t";
//			cin >> stor_2;
//			double alpha;
//			cout << "Vvedit dovguny kyta mig storonamu trukutnuka:\t";
//			cin >> alpha;
//			cin.ignore();
//			cout << "plosha trukutnuka za 2 storonamu i kytomu:\t";
//			cout << AreaOfFigures::AreaOfTriacut_bySin(stor_1, stor_2, alpha) << "kv.od";
//			cout << "\n";
//			system("pause");
//			break;
//		case '3':system("cls");
//			double stor1;
//			cout << "Vvedit dovguny 1 storonu trukutnuka:\t";
//			cin >> stor1;
//			cin.ignore();
//			double stor2;
//			cout << "Vvedit dovguny 2 storonu trukutnuka:\t";
//			cin >> stor2;
//			cin.ignore();
//			double stor3;
//			cout << "Vvedit dovguny 3 storonu trukutnuka:\t";
//			cin >> stor3;
//			cin.ignore();
//			cout << "plosha trukutnuka za 3 storonamu:\t";
//			cout << AreaOfFigures::AreaOfTriacut_bySide(stor1, stor2, stor3) << "kv.od";
//			cout << "\n";
//			system("pause");
//			break;
//		case '4':system("cls");
//			double stKv;
//			cout << "Vvedit dovguny kvadrata:\t";
//			cin >> stKv;
//			cin.ignore();
//			cout << "plosha kvadrata:\t";
//			cout << AreaOfFigures::AreaOfSquare(stKv) << "kv.od";
//			cout << "\n";
//			system("pause");
//			break;
//		case '5':system("cls");
//			double stPr;
//			cout << "Vvedit dovguny 1 storonu priamokytnuka:\t";
//			cin >> stPr;
//			cin.ignore();
//			double stPr2;
//			cout << "Vvedit dovguny 2 storonu priamokytnuka:\t";
//			cin >> stPr2;
//			cin.ignore();
//			cout << "plosha priamokytnuka:\t";
//			cout << AreaOfFigures::AreaOfRectangle(stPr, stPr2) << "kv.od";
//			cout << "\n";
//			system("pause");
//			break;
//		case '6':system("cls");
//			double d1;
//			cout << "Vvedit dovguny 1 diagonali romba:\t";
//			cin >> d1;
//			cin.ignore();
//			double d2;
//			cout << "Vvedit dovguny 2 diagonali romba:\t";
//			cin >> d2;
//			cin.ignore();
//			cout << "plosha romba za diagonaliamu:\t";
//			cout << AreaOfFigures::AreaOfRhombus(d1, d2) << "kv.od";
//			cout << "\n";
//			system("pause");
//			break;
//		case '7':system("cls");
//			double storR;
//			cout << "Vvedit dovguny 1 storonu romba:\t";
//			cin >> storR;
//			cin.ignore();
//			double alphaR;
//			cout << "Vvedit dovguny kyta mig storonamu romba:\t";
//			cin >> alphaR;
//			cin.ignore();
//			cout << "plosha romba za  storonoiy i kytomu:\t";
//			cout << AreaOfFigures::AreaOfRhombus_bySin(storR, alphaR) << "kv.od";
//			cout << "\n";
//			system("pause");
//			break;
//		case '8':system("cls");
//			cout << "kilkist pidrahynkiv ploshi: \t";
//			cout << AreaOfFigures::GetKol() << "\n";
//			system("pause");
//			break;
//		default:
//			break;
//		}
//	} while (ch != '0');
//	cout << "vsia kilkist pidahynkiv ploshi: \t";
//	cout << AreaOfFigures::GetKol() << "\n";
//}