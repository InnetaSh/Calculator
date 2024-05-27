//#include "TestItem.h"
//#include "TestItem2.h"
//int main()
//{
//	unique_ptr<TestItem>ptr_uniq(new TestItem(25));
//	ptr_uniq->Print();
//	//помилка, якщо спробуємо призначити два одночасно існуючі покажчики на ту саму адресу:
//	//unique_ptr<TestItem>ptr_uniq2 = ptr_uniq;
//	//unique_ptr<TestItem>ptr_uniq3;
//	//ptr_uniq3 = ptr_uniq;
//	unique_ptr<TestItem>ptr_uniq4 = move(ptr_uniq);
//	ptr_uniq4->Print();
//
//	cout << "\n";
//	shared_ptr<TestItem2> ptr_shared(new TestItem2(15));
//	shared_ptr<TestItem2> ptr_shared2 = ptr_shared;
//	shared_ptr<TestItem2> ptr_shared3;
//	ptr_shared3 = ptr_shared;
//	cout << "ptr_shared3:\t";
//	ptr_shared3->Print();
//	cout << ptr_shared.use_count() << "\n";
//	shared_ptr<TestItem2> ptr_shared4(new TestItem2(5));
//	ptr_shared3 = ptr_shared4;
//	cout << ptr_shared.use_count() << "\n";
//	cout << ptr_shared3.use_count() << "\n";
//	cout << "ptr_shared3:\t";
//	ptr_shared3->Print();
//
//
//}
