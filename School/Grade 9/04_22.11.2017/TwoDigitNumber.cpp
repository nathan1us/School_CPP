#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int a;
	cout << "Enter a number: ";
	cin >> a;

	if ( a > 9 && a < 100)
		cout << "Yes, the number has two digits." << endl;
	else
	    cout << "No, the number has more or less than two digits." << endl;

	system("pause");

	return 0;
}
