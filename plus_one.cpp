#include <iostream>
int main()
{
	using std::cout;
	using std::endl;
	int a = 20;
	int b = 20;
	
	cout << "a = " << a << ":   b = " << b << endl;
	cout << "a++ = " << a++ << ": ++b = " << ++b << endl;
	cout << "a = " << a << ":   b = " << b << endl;
	
	return 0;
}

/*
	int k = 5;     
	k += 3;            // ok, k set to 8
	int *pa = new int [10];      // pa points to pa[0]
	pa[4] = 12;                   
	pa[4] += 6;               //  pa[4] set to 18
	*(pa + 4) += 7;           // pa[4] set to 25
	pa += 2;                    // pa points to the former pa[2]
	34 += 10;                 // quite wrong

*/


/*
	int x = 20;
	{                             // block starts
		cout << x << endl;        // use oringal x
		int x = 100;              // new x
		cout << x << end;         // use new x
	}                             // block end
	cout << x << endl;            // use original x
	return 0;	
*/


/*
	word == "mate"   ----> 不是判断两个字符串是否相同，而是查看它们是否存储在相同的地址上  
	strcmp比较是否相同， 
*/
