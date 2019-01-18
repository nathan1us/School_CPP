#include <iostream>

int factorial(int number)
{
	if (number == 0) return 1;

	return number * factorial(number - 1);
}


bool isPrime(int number)
{
	if (number < 2) return false;

	for (int i = 2; i <= number / 2; i++)
	{
		if (number % i == 0) return false;
	}

	return true;
}

int main()
{

	int a = 1, b = 0, sum = 0;

	while (b < a)
	{
		printf("Enter a: ");
		std::cin >> a;

		printf("Enter b: ");
		std::cin >> b;

		printf("-----------\n");
	}

	for (int i = a; i <= b; i++)
	{
		if (isPrime(i))
		{
			sum += factorial(i);
		}
	}

	printf("Number range:  %i to %i\n", a, b);
	if (sum > 0) printf("The sum of factorials of every prime in the range is: %i", sum);
	else printf("There are no prime numbers in the range.");

}
