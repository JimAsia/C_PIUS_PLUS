#include <iostream>
#include <cstring> 
using namespace std;

/*
	word == "mate"   ----> 不是判断两个字符串是否相同，而是查看它们是否存储在相同的地址上  
	strcmp比较是否相同， 
*/

int main()
{
	char word[5] = "?ate";
	
	for (char ch = 'a'; strcmp(word, "mate"); ch++) {
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends, word is " << word << endl;
	return 0;
}

// 使用string类 
/*
	#include <string>
	char word[5] = "?ate";
	for (char ch = 'a'; word != "mate"; ch++) {
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends, word is " << word << endl;
	return 0;
	
*/
