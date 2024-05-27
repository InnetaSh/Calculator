//#include"Tree.h"
//
//int main()
//{
//    Tree tmpTree;
//    int num;
//
//    while (true) {
//        cout << "Vvedit chislo:\n";
//        cin >> num;
//        if (num == 0) 
//        {
//            break;
//        }
//        else if (num > 0) {
//            tmpTree.insertNode(num);
//        }
//        else 
//        {
//            if (!tmpTree.FindNum(-num))
//                cout << "Takogo vid\'emnogo chisla nema.\n";
//            else
//                tmpTree.remove(-(num));
//        }
//    }
//    tmpTree.print();
//    cout << "\nMaxsumalne chislo:\t" << tmpTree.Max();
//}