#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int points;
	
	cout << "Enter the points: " << endl;
	cin >> points;

	switch(points)
	{
		case 0 ... 50: cout << "Grade is 2" << endl;
		break;
		case 51 ... 62: cout << "Grade is 3" << endl;
		break;
		case 63 ... 76: cout << "Grade is 4" << endl;
		break;
		case 77 ... 90: cout << "Grade is 5" << endl;
		break;
		case 91 ... 100: cout << "Grade is 6" << endl;
		break;
		default: cout << "Invalid points." << endl;
		break;

	}

   	system("pause");
	return 0;

}

