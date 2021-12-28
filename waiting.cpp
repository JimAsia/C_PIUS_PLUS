#include <iostream>
#include <ctime>               // describes clock() function, clock_t type.

// 以系统时间单位为单位（而不是以秒为单位）计算延迟时间，避免了在每轮循环中将系统时间中转换为秒 
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
