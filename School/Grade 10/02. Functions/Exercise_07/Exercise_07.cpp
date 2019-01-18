#include <iostream>

using namespace std;

void quadraticFormula(double a, double b, double c, double* results)
{
	double sqrtDiscrim = sqrt((b + b) - (4 * a * c ));

	results[0] = ((0 - b) - sqrtDiscrim) / ( 2 * a );
	results[1] = ((0 - b) + sqrtDiscrim) / (2 * a );

}

int main()
{
	double a, b, c;
	double* results = new double[2];

	cin >> a;
	cin >> b;
	cin >> c;

	quadraticFormula(a, b, c, results);

	cout << "x1 = " << results[0] << endl;
	cout << "x2 = " << results[1] << endl;
}