#include <iostream>
using namespace std;
const int ArSize = 20;
int main()
{
	char name[ArSize];
	cout << "Your first name, please: ";
	cin >> name;
	cout << "Here is your name, verticalized and ASCIIized: \n";
	int i = 0;
	while (name[i]) {          //   == while (name[i] != '\0')
		cout << name[i] << ": " << int(name[i]) << endl;
		i++;
	}
	return 0;
}


/*	forѭ��������ѭ��������while�޷�Ԥ��֪��ѭ��ִ�еĴ��� 
			
	for (init-expression; test-expression; update-expression)
	{
		statement(s)
	}
	
	init-expression;
	while (test-expression) {
		statement(s)
		update-expression;
	}
	
	while (test-expression)
		body
		
	for ( ; test-expression; )
		body
		
	for ( ; ; )           // ����ѭ�� 
		body          

*/
