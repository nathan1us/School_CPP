#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
	double sum, n, index;
	sum = 0;
	index = 2;
	
	cin >> n;
	
	while (index <= n)
	{
		sum += 1/index;
		index += 2;
	}
	
	cout << sum << endl;


	system("pause");
	return 0;
	
}
