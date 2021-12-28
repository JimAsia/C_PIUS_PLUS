#include <iostream>
using namespace std;
// std::cout, std::cin

// 32位 sizeof(int) 为 4
// 64位 sizeof(int) 为 8 

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
	不要使用delete来释放不是new分配的内存
	不要使用delete释放同一个内存块两次
	如果使用new[]为数组分配内存，则应使用delete[]来释放
	如果使用new[]为一个实体分配内存，则应使用delete(没有方括号)来释放
	对空指针应用delete是安全的
	
	
	exmple:
	
	int * pt = new int;
	short * ps = new short [500];
	delete pt;
	delete [] ps; 
*/

/*
	将指针变量加1后，其增加的值等于指向的类型占用的字节数 
*/
