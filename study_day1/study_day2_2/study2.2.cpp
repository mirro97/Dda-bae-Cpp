#include <iostream>

int main() 
{
	using namespace std;

	short s = 1; //2 bytes = 2 * 8bit = 16 bits
	int i = 1;	 //
	long l = 1;
	long long ll = 1;

	cout << sizeof(short) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;

	cout << std::pow(2, sizeof(short) * 8 - 1) -1 << endl;
	cout << std::numeric_limits<short>::max() << endl;
	cout << std::numeric_limits<short>::min() << endl;
	cout << std::numeric_limits<short>::lowest() << endl;

	cout << "------------" << endl;

	s = 32767;
	s = s + 1; //기대하는 값은 32768

	cout << s << endl;//값이 안나옴!! -> overflow



	return 0;
}