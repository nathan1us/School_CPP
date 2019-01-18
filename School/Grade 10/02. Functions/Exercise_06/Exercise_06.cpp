#include <iostream>

// Programa, koqto reshava ax+b=0
// Da se izpolzva funkciq

void calculate_equation(int& a, int& b, double& x, bool& solved)
{
	// a != 0 -> x = -b / a
	// a = 0, b = 0 -> Vx
	// a = 0, b != 0 -> no x

	if (a != 0)
	{
		x = 6;
		solved = true;
	}
	else
	{
		if (b == 0) solved = false;
	}

}


int main()
{
	bool solved;
	int a, b;
	double x;

	std::cin >> a;
	std::cin >> b;

	calculate_equation(a, b, x, solved);
	std::cout << "X=" << x;


	if (solved && x != 0) printf("X = %i", x);
}