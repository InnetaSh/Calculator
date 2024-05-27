//#include "CodingCaesar.h"
//
//string CodingCaesar::Coding(string& str, int key)
//{
//    string newText;
//    key = key % 28;
//    for (int i = 0; i < str.length(); i++)
//    {
//        if (isalpha(str[i]))
//        {
//            
//            if (str[i] >= 65 && str[i] <= 90)
//            {
//                str[i] += key;
//                if (str[i] > 90)
//                    str[i] = str[i] - 27;
//            }
//            if (str[i] >= 97 && str[i] <= 122)
//            {
//                str[i] += key;
//                if (str[i] > 122)
//                    str[i] = str[i] - 27;
//            }
//        }
//        newText.push_back(str[i]);
//    }
//    return newText;;
//}
//
//string CodingCaesar::Decoring(string& str, int& key)
//{
//    string newText;
//    key = key % 28;
//    for (int i = 0; i < str.length(); i++)
//    {
//        if (str[i] >= 65 && str[i] <= 90)
//        {
//            str[i] += key;
//            if (str[i] < 65)
//                str[i] = str[i] + 27;
//        }
//        if (str[i] >= 97 && str[i] <= 122)
//        {
//            str[i] += key;
//            if (str[i] < 97)
//                str[i] = str[i] + 27;
//        }
//    }
//}
