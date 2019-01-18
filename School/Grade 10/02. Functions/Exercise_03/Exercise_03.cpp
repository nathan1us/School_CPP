#include <iostream>

int **isPrimeNum(int n)
{
	int** primes = new int*[n + 1];

	for (int i = 2; i <= n; i++)
	{
		*primes[i] = 1;
	}
	

	return primes;
}

int main()
{
	int num;

	std::cin >> num;

	int** nums = isPrimeNum(num);


	std::cout << "The number " << *nums[2] << std::endl;
}

