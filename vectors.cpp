#include <iostream>
#include <vector>
#include <array>

/*
#include <vector>
	
	vector<int> vi;              // creat a zero-size array of int
	int n;
	cin >> n;
	vecotr<double> vd(n);        // creat an array of n doubles
	
	vector<typename> vt(n_elem);
*/

/*
#include <array>

	array<int, 5> ai;               // creat array object of 5 ints
	array<double, 4> ad = {1.2, 2.1, 3.43, 4.3};
	
	
	array<typeName, n_elem> arr;   // n_elem不能是变量 

*/


int main()
{
	using namespace std;
	// C, original C++
	double a1[4] = {1.2, 2.4, 3.6, 4.8};
	// C++98 STL
	vector<double> a2(4);               // creat vector witn 4 elements
	// no simple way to initialize in C98
	a2[0] = 1.0 / 3.0;
	a2[1] = 1.0 / 5.0;
	a2[2] = 1.0 / 7.0;
	a2[3] = 1.0 / 9.0;
	// C++11 -- creat and initialize array object
	array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
	array<double, 4> a4;
	a4 = a3;                  // valid for array object of same size
	
	// use array notation
	cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
	cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
	
	// misdead 
	a1[-2] = 20.2;
	cout << "a1[-2] " << a1[-2] << " at " << &a1[-2] << endl;
	cout << "a3[2] " << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2] " << a4[2] << " at " << &a4[2] << endl;
	return 0;
	
}
