#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	double a,b,c, avrg;
	cout << "Enter grade one: ";
	cin >> a;
	cout << "Enter grade two: ";
	cin >> b;
	cout << "Enter grade three: ";
	cin >> c;

	if(a > 6 || b > 6 || c > 6)
	{
		cout << "Grade can't be higher than 6." << endl;
	}
	else
	{
        avrg = ( a + b + c ) / 3;
		cout << "Average grade: " << avrg << endl;
	}

	system("pause");
	return 0;
}
