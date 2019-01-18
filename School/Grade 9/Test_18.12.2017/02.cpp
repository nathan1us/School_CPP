#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;

	if (number < 300)
	cout << "Nothing" << endl;
	else
	{
		switch(number % 10)
		{
			case 0: cout << "Nothing"; break;
			case 1: case 2: case 3: cout << "100 BGN"; break;
			case 4: case 5: case 6: cout << "200 BGN"; break;
			case 7: case 8: cout << "300 BGN"; break;
			case 9: cout << "1000 BGN" << endl;
		}
	}
   	system("pause");
	return 0;

}

