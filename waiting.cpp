#include <iostream>
#include <ctime>               // describes clock() function, clock_t type.

// ��ϵͳʱ�䵥λΪ��λ������������Ϊ��λ�������ӳ�ʱ�䣬��������ÿ��ѭ���н�ϵͳʱ����ת��Ϊ�� 
int main()
{
	using std::cout;
	using std::cin;
	cout << "Enter the delay time, in seconds: ";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;       // convert to clock ticks
	
	cout << "starting\a\n";
	clock_t start = clock();
	while (clock() - start < delay)            // wait until time elapses
		;                                      // note the semicolon
	cout << "Done\a\n";
	return 0;
}
