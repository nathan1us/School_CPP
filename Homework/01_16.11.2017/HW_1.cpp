#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
	double num1, num2;
	cout << "Enter number one: ";
	cin >> num1;
	cout << "Enter number two: ";
	cin >> num2;

	if (num1 > num2)
	{
		cout << "First number" << endl;
	}
	else
	{
		cout << "Second number" << endl;
	}

	system("pause");

	return 0;
}
