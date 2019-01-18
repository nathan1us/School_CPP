#include <iostream>

int factorial(int n)
{
	if (n == 0) return 1;

	return n * factorial(n - 1);
}

int sumToN(int n)
{
	if (n == 0) return 0;
	return n + sumToN(n - 1);
}

int main()
{
	int n;
	printf("Enter a number: ");
	std::cin >> n;

	std::cout << factorial(n) / (double) sumToN(n);
}