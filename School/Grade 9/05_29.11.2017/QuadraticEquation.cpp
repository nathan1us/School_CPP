#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main()
{
double a,b,c,d,x1,x2,x;
	cout << "Enter number a: ";
	cin >> a;
	cout << "Enter number b: ";
	cin >> b;
	cout << "Enter number c: ";
	cin >> c;

	d = b*b - 4*a*c;
	
	if (d > 0)
	{
		x1 = (-b+sqrt(d))/(2*a);
		x2 = (-b-sqrt(d))/(2*a);
		cout << "X1 is: " << x1 << endl;
		cout << "X2 is: " << x2 << endl;
	}
	else if (d == 0)
	{
		x=-b/(2*a);
		cout <<"X is: " << x << endl;
	}
	else 
		cout << "Cannot be solved" << endl;

	system("pause");
	return 0;
}
