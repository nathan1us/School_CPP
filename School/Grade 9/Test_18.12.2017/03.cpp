#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int day, month, year;

	cin >> day;
	cin >> month;
	cin >> year;

	switch(month)
	{
    case 1:
		if(day > 31)
			cout << "Invalid day" << endl;
		else if (day < 31)
		    cout << day + 1 << "." << month << "." << year << endl;
		else
		    cout << "1.2." << year << endl;
		break;
    case 2:
		if(year % 4)
			cout << "29.2." << year << endl;
		else
		{

		if(day > 28)
			cout << "Invalid day" << endl;
		else if (day < 28)
		    cout << day + 1 << "." << month << "." << year << endl;
		else
		    cout << "1.3." << year << endl;
		}
		break;
    case 3:
		if(day > 31)
			cout << "Invalid day" << endl;
		else if (day < 31)
		    cout << day + 1 << "." << month << "." << year << endl;
		else
		    cout << "1.4." << year << endl;
		break;
    case 4:
		if(day > 30)
			cout << "Invalid day" << endl;
		else if (day < 30)
		    cout << day + 1 << "." << month << "." << year << endl;
		else
		    cout << "1.5." << year << endl;
		break;
    case 5:
		if(day > 31)
			cout << "Invalid day" << endl;
		else if (day < 31)
		    cout << day + 1 << "." << month << "." << year << endl;
		else
		    cout << "1.6." << year << endl;
		break;
    case 6:
		if(day > 30)
			cout << "Invalid day" << endl;
		else if (day < 30)
		    cout << day + 1 << "." << month << "." << year << endl;
		else
		    cout << "1.7." << year << endl;
		break;
    case 7:
		if(day > 31)
			cout << "Invalid day" << endl;
		else if (day < 31)
		    cout << day + 1 << "." << month << "." << year << endl;
		else
		    cout << "1.8." << year << endl;
		break;
    case 8:
		if(day > 31)
			cout << "Invalid day" << endl;
		else if (day < 31)
		    cout << day + 1 << "." << month << "." << year << endl;
		else
		    cout << "1.9." << year << endl;
		break;
     case 9:
		if(day > 30)
			cout << "Invalid day" << endl;
		else if (day < 30)
		    cout << day + 1 << "." << month << "." << year << endl;
		else
		    cout << "1.10." << year << endl;
		break;
      case 10:
		if(day > 31)
			cout << "Invalid day" << endl;
		else if (day < 31)
		    cout << day + 1 << "." << month << "." << year << endl;
		else
		    cout << "1.11." << year << endl;
		break;
    case 11:
		if(day > 30)
			cout << "Invalid day" << endl;
		else if (day < 30)
		    cout << day + 1 << "." << month << "." << year << endl;
		else
		    cout << "1.12." << year << endl;
		break;
    case 12:

		if(day > 31)
			cout << "Invalid day" << endl;
		else if (day < 31)
		    cout << day + 1 << "." << month << "." << year << endl;
		else if (day == 31)
		    cout << "1.1." << year + 1 << endl;
		break;
	default: cout << "Invalid month" << endl;
}
   	system("pause");
	return 0;

}

