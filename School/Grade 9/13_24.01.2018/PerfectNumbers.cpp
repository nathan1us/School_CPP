#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{

	int n, i = 1, dsum = 0;
	cin >> n;
	do
	{
		if (n % i == 0)
		{
			dsum += i;
		}
		
		i++;
	} while(i<n);
	
	if (dsum == n)
		cout << "The number" << n << "is perfect." << endl;
	else
	    cout << "The number is not perfect." << endl;
	
	system("pause");
	return 0;

}
