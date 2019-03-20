#include <iostream>
#include "day2_6_add.h"

using namespace std;

#define MY_NUMBER "Hello World"

namespace Myspace1
{
	namespace InnerSpace 
	{
		int my_function() 
		{
			return 0;
		}
	}

	int doSomething(int a, int b) 
	{
		return a + b;
	}
}

namespace Myspace2
{
	int dosomething(int a, int b) 
	{
		return a * b;
	}
}

int doSomthing(int a, int b)
{
	return a * b;
}

int main() 
{
	using namespace Myspace1;

	Myspace1::InnerSpace::my_function();

	//cout << add(1, 2) << endl;

	//cout << Myspace1::doSomthing(3, 4) << endl;
	//cout << doSomthing(3, 4) << endl;

	doSomething(3, 4);

	cout << MY_NUMBER << endl;

	return 0;
}  