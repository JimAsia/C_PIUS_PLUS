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

// &���������õ�ַ(int ����)�� *����������ֵ(ָ�����) 

/*

#include <iostream>
int main()
{
	using namespace std;
	int updates = 6;
	int * p_updates;         // declare pointer to an int    , p_updates��ָ��(��ַ), *p_updates��int 
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


// ָ���ʼ��λһ����ַ
/*
	int higgens = 5;
	int* pt = &higgens;
*/


// !!!!! wrong exmple:
/*
	long* fellow;
	*fellow = 223323;
*/


// ʹ��new�������ڴ�
// just see use_new.cpp.
/*
	typeName * pointer_name = new typeName;
*/ 
