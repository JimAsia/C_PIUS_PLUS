#include <iostream>
#include <climits>       // <limits.h>

int main()
{
	using namespace std;
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;
	
	int emus{7};
	cout << emus << endl;
	
	cout << "int is " << sizeof (int) << " bytes." << endl;
	cout << "short is " << sizeof n_short << " bytes." << endl;
	cout << "long is " << sizeof n_long << " bytes." << endl;
	cout << "long long is " << sizeof n_llong << " bytes." << endl;
	cout << endl;
	
	cout << "Maximum values: " << endl;
	cout << "int: " << n_int << endl;
	cout << "short: " << n_short << endl;
	
	cout << "long: " << n_long << endl;
	cout << "llong: " << n_llong << endl;
	
	cout << "Maximun int value = " << INT_MIN <<endl;
	cout << "Bits per byte = " << CHAR_BIT << endl;
	return 0;
}
