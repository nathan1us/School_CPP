#include <iostream>

int factorial(int num)
{
	if (num == 0) return 1;

	return num * factorial(num - 1);
}

int main()
{
	int num;

	printf("Enter a number: ");
	std::cin >> num;

	printf("The factorial of %i is %i", num, factorial(num));
}