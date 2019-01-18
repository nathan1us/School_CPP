#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;

	if(number == 11)
	{
		cout << "Attacker" << endl;
	}
	else
	{
		switch(number % 10)
			{
				case 1: cout << "Goalkeeper" << endl; break;
				case 2: case 3: case 4: cout << "Defender" << endl; break;
				case 5: case 6: case 7: case 8: cout << "Half-back" << endl; break;
				default: cout << "Attacker" << endl; break;
			}
	}
   	system("pause");
	return 0;
}
