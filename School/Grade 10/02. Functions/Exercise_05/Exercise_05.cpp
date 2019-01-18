#include <iostream>

void swap_numbers(int& a, int& b)
{
	a ^= b;
	b ^= a;
	a ^= b;
}

int main()
{
	int x, y;

	printf("Enter X: ");
	std::cin >> x;
	printf("Enter Y: ");
	std::cin >> y;

	swap_numbers(x, y);

	printf("%i - %i", x, y);
}
