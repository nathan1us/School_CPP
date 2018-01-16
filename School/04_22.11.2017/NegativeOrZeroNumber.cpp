#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int num1;
	cout << "Enter number: ";
	cin >> num1;

	if (num1 < 0)
		cout << "Negative number" << endl;
	else if (num1 == 0)
		cout << "Number is zero" << endl;
	else
		cout << "Positive number" << endl;
	
	system("pause");

	return 0;
}
