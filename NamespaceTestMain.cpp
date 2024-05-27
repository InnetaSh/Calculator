//#include "Fraction.h"
//#include "Point2D.h"
//#include "Point3D.h"
//int main()
//{
//	Point2D::Point obj1;
//	std::cout << "Point2D 1:\t";
//	obj1.print();
//	Point2D::Point obj2(3,4);
//	std::cout << "Point2D 2:\t";
//	obj2.print();
//	std::cout<<"Vidstan\' Point2D 1-Point2D 2: " << obj1.PointDistance(obj2) << "\n";
//	std::cout << "Point3D 1:\t";
//	Point3D::Point obj3;
//	obj3.print();
//	std::cout << "Point3D 2:\t";
//	Point3D::Point obj4(4, 3, 6);
//	obj4.print();
//	std::cout << "Vidstan\' Point3D 1-Point3D 2: " << obj3.PointDistance(obj4) << "\n";
//	std::cout << "\n";
//	Drib::Fraction num;
//	std::cout << "Drib za ymovchyvanniam:\t";
//	num.print();
//	std::cout << "--------------------------\n";
//
//	num.Vvod();
//	std::cout << "Vvedenui 1 drib:\t";
//	num.print();
//
//	std::cout << "--------------------------\n";
//	Drib::Fraction ObjNum;
//	ObjNum.Vvod();
//	std::cout << "Vvedenui 2 drib:\t";
//	ObjNum.print();
//	std::cout << "Syma:  \t\t\t" << num.Get_numerator() << "/" << num.Get_denominator() << " + " << ObjNum.Get_numerator() << "/" << ObjNum.Get_denominator() << " = ";
//	Drib::Fraction sum = num.operator+(ObjNum);
//	sum.print();
//	std::cout << "--------------------------\n";
//	std::cout << "Riznicia:\t\t" << num.Get_numerator() << "/" << num.Get_denominator() << " - " << ObjNum.Get_numerator() << "/" << ObjNum.Get_denominator() << " = ";
//	Drib::Fraction sub = num.operator-(ObjNum);
//	sub.print();
//	std::cout << "--------------------------\n";
//	std::cout << "Dobutok:\t\t" << num.Get_numerator() << "/" << num.Get_denominator() << " * " << ObjNum.Get_numerator() << "/" << ObjNum.Get_denominator() << " = ";
//	Drib::Fraction dob = num.operator*(ObjNum);
//	dob.print();
//	std::cout << "--------------------------\n";
//	std::cout << "Dilennia:\t\t" << num.Get_numerator() << "/" << num.Get_denominator() << " / " << ObjNum.Get_numerator() << "/" << ObjNum.Get_denominator() << " = ";
//	Drib::Fraction div = num.operator/(ObjNum);
//	div.print();
//	std::cout << "--------------------------\n";
//}