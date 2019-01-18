#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	char a;
	cout << "Enter a letter: ";
	cin >> a;

	if ( a >= 59 && a <= 90)
		cout << "Yes, upper-cased letter." << endl;
	else
	    cout << "No, lower-cased letter." << endl;

	system("pause");

	return 0;
}
