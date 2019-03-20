#include <iostream>

using namespace std;

void doSomething(int x) 
{
	x = 123;
	cout << x << endl;
}

int main() 
{
	int x = 0;
	
	/*cout << x << " " << &x << endl;

	{//영역을 분리해줌
		int x = 1;
		cout << x << " " << &x << endl;
	}

	{
		int x = 2;
	}
	//int x(0);// x = 0;
	*/

	cout << x << endl;
	doSomething(x);
	cout << x << endl;
	return 0;

} 