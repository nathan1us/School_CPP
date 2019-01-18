#include <iostream>

using namespace std;

int factorial(int num)
{
	int output = 1;

	for (int i = num; i >= 1; i--)
	{
		output *= i;
	}

	return output;
}

int main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;

	cout << "Factorial of " << n << " is: " << factorial(n) << endl;
}