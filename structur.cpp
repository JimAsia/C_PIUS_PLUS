// a simple structure
#include <iostream>

// 如果结构标识符是结构名，则使用句点运算符；如果标识符是指向结构的指针，则使用箭头运算符 

struct inflatable {
	char name[20];
	float volume;
	double price;
};

// 位字段
struct torgle_reister {
	unsigned int SN : 4;       // 4 bits for SN value
	unsigned int : 4;          // 4 bits unused
	bool gooIn : 1;            // valid input (1 bit)
	bool goodTorgle: 1;        // successful torgling
}; 

// 共用体 
union one4all {
	int int_val;
	long long_val;
	double double_val;
};

// 枚举
enum spectrum {red, orange, yellow, green, blue, violet, indigo, ultraviolot}; 

int main()
{
	using namespace std;
	spectrum band;       // 枚举声明, 枚举没有算术运算 
	inflatable guest= 
	{
		"Glorious Gloria",
		1.88,
		29.99	
	};        // guest is a structure variable of type inflatable
	inflatable pal= 
	{
		"Audacious Arthur",
		3.12,
		32.99	
	}; // pal is a second variable of type inflatable 
	
	cout << "Expand your guest list with " << guest.name;
	cout << " and " << pal.name << "!\n";
	
	cout << "You can have both for $";
	cout << guest.price + pal.price << "!\n";
	return 0;
}
