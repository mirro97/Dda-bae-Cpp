#include <iostream>
#include <algorithm>
using namespace std;

#define Max(a, b) (((a)>(b)) ? (a): (b)) //��ũ�� ����

#define LIKE_APPLE

int main() 
{
	//cout << Max(1+3, 2) << endl;
	cout << max(3 + 4, 2) << endl; //�޼ҵ� -> #include <alforithm> �߰��ؼ� ���

#ifdef LIKE_APPLE
	cout << "APPLE" << endl;
#else
	cout << "Orage" << endl;
#endif


	return 0;
}