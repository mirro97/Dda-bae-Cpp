#include <iostream>

int main() 
{
	using namespace std;//std 굳이 안써도 되게 됨

	int x = 1024;

	int y;

	cin >> y;//내 입력을 기다리고 있음 

	cout << "Your input is  " << y << endl;

	std::cout << "어쩌구";
	std::cout << "x is " << x << " pi is"<<std::endl;

	std::cout << "abc" << "\t" << "def" << std::endl;

	std::cout << "ab" << "\t" << "cdef";

	cout << "\a";//띠로링~소리내게 함

	printf("I love you~~~");

	return 0;
}