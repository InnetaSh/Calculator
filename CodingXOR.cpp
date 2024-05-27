//#include "CodingXOR.h"
//
//string CodingXOR::Coding(string& strText, const string& key)
//{
//    string newText;
//    for (size_t i = 0; i < strText.size(); ++i) {
//        newText += strText[i] ^ key[i % key.size()];
//    }
//    return newText;
//}
//
//string CodingXOR::Decoring(string&, const string&key)
//{
//    string lastText;
//    for (size_t i = 0; i < lastText.size(); ++i) {
//        lastText += lastText[i] ^ key[i % key.size()];
//    }
//    return lastText;
//}
