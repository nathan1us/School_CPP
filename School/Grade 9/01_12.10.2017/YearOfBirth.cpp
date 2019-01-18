#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int inputYear, years;
	cout << "Year of birth: ";
	cin >> inputYear;
	years = 2017 - inputYear;
	if(inputYear > 2017)
	{
		cout << "Enter valid year!";
	}
	cout << "The student is " << years << " years old." << endl;

	system("pause");
	return 0;
}
