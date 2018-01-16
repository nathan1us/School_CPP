#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	double num1, num2, num3;
	cout << "Enter number one: ";
	cin >> num1;
	cout << "Enter number two: ";
	cin >> num2;
	cout << "Enter number three: ";
	cin >> num3;

	int numbers[3] = {num1, num2, num3};

	for(int i = 1; i < 3; i++)
	{
		if(numbers[0] < numbers[i])
		{
			numbers[0] = numbers[i];
		}
	}
	cout << numbers[0] << endl;

	system("pause");

	return 0;
}
