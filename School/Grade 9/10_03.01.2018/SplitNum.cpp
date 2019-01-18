#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	
	int num, lenght, sum;
	cin >> num;
	lenght = 0;
	while (num > 0)
	{
		num = num / 10;
		lenght++;
	}
	cout << lenght << endl;
   	system("pause");
	return 0;
}
