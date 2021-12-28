#include <iostream>
using namespace std;
// std::cout, std::cin

// 32λ sizeof(int) Ϊ 4
// 64λ sizeof(int) Ϊ 8 

int main()
{
	int nights = 1001;
	int * pt = new int;     // allocate space for an int;
	*pt = 1001;             // store a value three;
	
	cout << "nights value = ";
	cout << nights << ": location " << &nights << endl;
	cout << "int ";
	cout << "value = " << *pt << ": location = " << pt << endl;
	
	double * pd = new double;
	*pd = 10000001.0;
	
	cout << "double ";
	cout << "value = " << *pd << ": location = " << pd << endl;
	cout << "location of pointer pd " << &pd << endl;
	cout << "size of pt = " << sizeof(pt);
	cout << ": size of *pt = " << sizeof(*pt) << endl;
	cout << "size of pd = " << sizeof pd;
	cout << ": size of *pd = " << sizeof *pd << endl;
	
	return 0;
}

/*
	int * psome = new int [10];   // get a block of 10 ints.
	delete [] psome;              // free a dynamic array
	
	type_name * pointer_name = new type_name [num_elements];
	
*/

/*
	��Ҫʹ��delete���ͷŲ���new������ڴ�
	��Ҫʹ��delete�ͷ�ͬһ���ڴ������
	���ʹ��new[]Ϊ��������ڴ棬��Ӧʹ��delete[]���ͷ�
	���ʹ��new[]Ϊһ��ʵ������ڴ棬��Ӧʹ��delete(û�з�����)���ͷ�
	�Կ�ָ��Ӧ��delete�ǰ�ȫ��
	
	
	exmple:
	
	int * pt = new int;
	short * ps = new short [500];
	delete pt;
	delete [] ps; 
*/

/*
	��ָ�������1�������ӵ�ֵ����ָ�������ռ�õ��ֽ��� 
*/
