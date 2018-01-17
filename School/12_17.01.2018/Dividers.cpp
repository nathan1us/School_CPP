#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{

	int num, i;
	i = 2;
	cout << "Enter a number: ";
	cin >> num;
	cout << 1 << " ";
	do {

	if (num % i == 0)
	    cout << i << " ";

	i++;
	} while (i <= num / 2);
	
	cout << num << endl;
	
	system("pause");
	return 0;

}
