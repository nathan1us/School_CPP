#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
	double num;
	cout << "Enter number n: ";
	cin >> num;
	
	if (num == sqrt(num) * sqrt(num))
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	
	system("pause");
	
	return 0;
}
