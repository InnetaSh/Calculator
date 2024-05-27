//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//void Rand_100(int* mas, int n)
//{
//    for (int i = 0; i < n; i++)
//        mas[i] = -100 + rand() % 201;
//}
//
//void Print(int* mas, int n)
//{
//
//    for (int i = 0; i < n; i++)
//    {
//        cout << mas[i] << "\t";
//    }
//    cout << "\n";
//}
//
//void PrintBilsheNum(int* mas, int n, int num)
//{
//
//    for (int i = 0; i < n; i++)
//    {
//        if (mas[i] > num)
//            cout << mas[i] << "\t";
//    }
//    cout << "\n";
//}
//
//int main()
//{
//    cout << "----------Zavdannia 1------------\n";
//    //1. Сгенеруйте масив довжиною 20 цілих чисел і заповніть його випадковими числами від - 100 до 100.  Використовуючи лямбду, відсортуйте значення > 10 .
//    srand(time(0));
//    const int n = 20;
//    int mas1[n];
//    Rand_100(mas1, n);
//    Print(mas1, n);
//    sort(mas1, mas1 + n, [](int a, int b) {
//        return (a > 10 && b > 10) ? a < b : (a > 10);
//       /* if (a > 10 && b > 10)
//        {
//            return  a < b;
//        }
//        else 
//        {
//            return a > 10;
//        }*/
//    });
//    cout << "Vidsortovani elementu massuvy (>10):\n";
//    Print(mas1, n);
//    PrintBilsheNum(mas1, n, 10);
//
//    cout << "----------Zavdannia 2------------\n";
//    //2. Сгенеруйте масив довжиною 20 цілих чисел і заповніть його випадковими числами від - 10 до 10. Використовуючи лямбду, виведіть квадрати цих чисел.
//    int mas2[n];
//    Rand_100(mas2, n);
//    Print(mas2, n);
//    cout << "Kvadratu elementiv massuvy:\n";
//    for_each(mas2, mas2 + n, [](int num) {
//        cout << num * num << " ";
//    });
//}