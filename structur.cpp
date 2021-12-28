// a simple structure
#include <iostream>

// ����ṹ��ʶ���ǽṹ������ʹ�þ��������������ʶ����ָ��ṹ��ָ�룬��ʹ�ü�ͷ����� 

struct inflatable {
	char name[20];
	float volume;
	double price;
};

// λ�ֶ�
struct torgle_reister {
	unsigned int SN : 4;       // 4 bits for SN value
	unsigned int : 4;          // 4 bits unused
	bool gooIn : 1;            // valid input (1 bit)
	bool goodTorgle: 1;        // successful torgling
}; 

// ������ 
union one4all {
	int int_val;
	long long_val;
	double double_val;
};

// ö��
enum spectrum {red, orange, yellow, green, blue, violet, indigo, ultraviolot}; 

int main()
{
	using namespace std;
	spectrum band;       // ö������, ö��û���������� 
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
