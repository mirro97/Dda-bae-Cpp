#include <iostream>

using namespace std;

int addTwoNumbers(int num_a, int num_b)
{
	int sum = num_a + num_b;

	return sum;
}

int multiflyTwoNumbers(int num_a, int num_b) 
{
	int sum = num_a * num_b;

	return sum;
}

void  printHelloWorld() 
{
	cout << "Hello World!" << endl;

	return;
}

int main() 
{
	cout << addTwoNumbers(1, 2) << endl;
	cout << addTwoNumbers(3, 4) << endl;
	cout << addTwoNumbers (8, 13)<< endl;

	cout << multiflyTwoNumbers(8, 13) << endl;

	cout << "Hello World" << endl;
	printHelloWorld();

	return 0;
}