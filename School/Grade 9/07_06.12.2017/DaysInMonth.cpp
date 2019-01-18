#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int month;
	char inputLeap;
	bool leapYear;
	cout << "enter a month: ";
	cin >> month;
	cout << "Leap year? Y/N: ";
	cin >> inputLeap;

	switch(inputLeap)
	{
		case 'Y': case 'y':
			leapYear = true;
			break;
		case 'N': case 'n':
			leapYear = false;
			break;
	}
		switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: cout << "31 days." << endl; break;
        case 4:
        case 6:
        case 9:
		case 11: cout << "30 days." << endl; break;
  		case 2:
			if(leapYear == true)
			    cout << "29 days." << endl;
			else
			    cout << "28 days." << endl;
		break;
		default: cout << "Invalid month." << endl; break;
   		}
   	system("pause");
	return 0;

}
