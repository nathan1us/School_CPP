#include <iostream>

int sumDigits(int n)
{
	if (n == 0) return 0;

	return (n % 10 + sumDigits(n / 10));
}

int main()
{
	int n;
	printf("Enter a number: ");
	std::cin >> n;

	printf("%i", sumDigits(n));
}
