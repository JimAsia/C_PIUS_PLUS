#include <iostream>
int main()
{
	using namespace std;
	int donuts = 6;
	double cups = 4.5;
	
	cout << "donuts value = " << donuts;
	cout << " and dounts address " << &donuts << endl;
	
	cout << "cups value = " << cups;
	cout << " and cups address " << &cups << endl;
	
	return 0;
}


// pointer.cpp

// &运算符来获得地址(int 变量)， *运算符来获得值(指针变量) 

/*

#include <iostream>
int main()
{
	using namespace std;
	int updates = 6;
	int * p_updates;         // declare pointer to an int    , p_updates是指针(地址), *p_updates是int 
	p_updates = &updates;   //
	
	cout << "Values: updates = " << updates;
	cout << ", *p_updates = " << p_updates << endl;
	
	cout << "Address: &updates = " << &updates;
	cout << ", p_updates = " << p_updates << endl;
	
	*p_updates = *p_updates + 1;
	cout << "New updates = " << updates << endl;
	return 0;
}

*/


// 指针初始化位一个地址
/*
	int higgens = 5;
	int* pt = &higgens;
*/


// !!!!! wrong exmple:
/*
	long* fellow;
	*fellow = 223323;
*/


// 使用new来分配内存
// just see use_new.cpp.
/*
	typeName * pointer_name = new typeName;
*/ 
