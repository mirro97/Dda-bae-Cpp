#include <iostream>

int main()
{
	using namespace std;

	bool bValue = true;//출력 1, false면 출력이 0

	cout << (bValue ? 1 : 0) << endl;

	char chValue = 'A';
	cout << (int)chValue << endl;// 출력65

	char chValue_1 = 65;
	cout << chValue_1 << endl;// 출력 A

	cout << "-----------" << endl;

	float fValue = 3.141592f;
	double dValue = 3.141592;

	cout << sizeof(bool) << endl; //sizeof 데이터 사이즈 
	cout << sizeof(bValue) << endl;

	cout << "-----------" << endl;

	int a(123);		// direct initialization;
	int b{ 123 };	//Uniform initialization;
	 
	int i = (int)3.1415;
	int a((int)3.14);
	
	int k = 0, l(456), m{ 123 };

	return 0;
}