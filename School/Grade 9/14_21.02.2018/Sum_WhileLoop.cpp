#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{

	int i = 1, n, sum = 0;

	cin >> n;

	if (n <= 0 || n >= 100)
	    cout << "Greshka" << endl;
	else {
        while (i <= n) {
			sum += i * (i + 1);
			i++;
		}
		
	cout << sum << endl;
	}
	system("pause");
	return 0;

}
