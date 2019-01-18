#include <iostream>

int step(int num, int n)
{
	if (n == 0) return 1;

	return num * step(num, n - 1);
}

int main()
{
	int n, x;

	printf("Enter x: ");
	std::cin >> x;
	printf("Enter n: ");
	std::cin >> n;

	printf("%i powered by %i is %i", x, n, step(x, n));
}

