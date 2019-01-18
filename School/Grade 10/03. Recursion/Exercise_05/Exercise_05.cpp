#include <iostream>

void printReversed(int n)
{
	if (n < 10)
	{
		printf("%i", n);
		return;
	}

	printf("%i", n % 10);
	printReversed(n / 10);
}

int main()
{
	int n;

	printf("Enter a number: ");
	std::cin >> n;

	printReversed(n);
}
