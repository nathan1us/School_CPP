#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int a = 3, b;

	if (a > 4)
		b = 5;
	else if (a < 4)
		b = -5;
	else if (a == 8)
	{
		b = 8;
	}
	else
		b = 3;
		
		cout << a << b << endl;
	
	system("pause");

	return 0;
}
