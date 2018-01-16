#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;

	if (num > 999999999)
		cout << "Invalid number" << endl;
	else
	{
		int lenght = 1;
		
		while(num /= 10)
			lenght++;
			
		cout << lenght << endl;
	}
   	system("pause");
	return 0;

}

