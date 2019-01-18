#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
	int n, index, sum;
	index = 1;

	cin >> n;

	while (index <= n)
	{
		sum += index * (index + 1);
		index++;
	}

	cout << sum << endl;

	system("pause");
	return 0;

}
