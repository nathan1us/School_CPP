#include <iostream>

void fibonacci(int n)
{
	int pred = 1;
	int curr = 1;
	int next;

	printf("1 1 ");

	for (int i = 1; i <= n - 2; i++)
	{
		next = pred + curr;
		printf("%i ", next);
		pred = curr;
		curr = next;
	}
}

int main()
{
	int n;
	printf("Enter a number: ");
	std::cin >> n;

	fibonacci(n);
}