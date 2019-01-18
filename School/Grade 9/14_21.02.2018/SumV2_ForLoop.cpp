#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{

	int n, sum = 0;

	cin >> n;

	if (n <= 0 || n >= 100)
	    cout << "Greshka" << endl;
	else {
		for (int i = 1; i <= n; i+=2)
		{
			sum += i * (i + 1);
		}
	}

	cout << sum << endl;

	system("pause");
	return 0;

}
