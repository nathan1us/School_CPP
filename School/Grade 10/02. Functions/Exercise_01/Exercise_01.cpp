#include <iostream>

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
	double sum = 0;

	sum = (factorial(8) + factorial(7) + factorial(6) + factorial(5)) / (factorial(4) + factorial(3));

	std::cout << "Sum = " << sum << std::endl;
}
