#include <iostream>
#include <cstring>
using namespace std;

char * getname(void);

int main()
{
	char * name;           // create pointer but no storage
	
	name = getname();            // assign address of string to name
	cout << name << " at " << (int *) name << endl;
	delete [] name;
	
	name = getname();
	cout << name << " at " << (int *) name << endl;
	delete [] name;
	
	return 0;
}

char * getname()
{
	char temp[80];
	cout << "Enter last name: ";
	cin >> temp;
	char * pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);               // copy string into smaller space
	
	return pn;               // temp lost when function ends
}
