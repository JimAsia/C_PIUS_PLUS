#include <iostream>
#include <cstring> 
using namespace std;

/*
	word == "mate"   ----> �����ж������ַ����Ƿ���ͬ�����ǲ鿴�����Ƿ�洢����ͬ�ĵ�ַ��  
	strcmp�Ƚ��Ƿ���ͬ�� 
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

// ʹ��string�� 
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
