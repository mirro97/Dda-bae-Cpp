#include <iostream>
#include <algorithm>
using namespace std;

#define Max(a, b) (((a)>(b)) ? (a): (b)) //매크로 정의

#define LIKE_APPLE

int main() 
{
	//cout << Max(1+3, 2) << endl;
	cout << max(3 + 4, 2) << endl; //메소드 -> #include <alforithm> 추가해서 사용

#ifdef LIKE_APPLE
	cout << "APPLE" << endl;
#else
	cout << "Orage" << endl;
#endif


	return 0;
}