#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	double a, b, x;
	cout << "Enter number a: ";
	cin >> a;
	cout << "Enter number b: ";
	cin >> b;
	
	if (a == 0)
	{
		if (b == 0)
			cout << "Every x is accepted";
		else
		    cout << "Cannot be solved";
	}
	else
		cout << -b / a;

	system("pause");
	return 0;
}
