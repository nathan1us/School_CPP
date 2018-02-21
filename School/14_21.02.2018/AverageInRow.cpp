#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{

	int i = 0, sum = 0, input;

    cin >> input;
	while (input != 0)
	{
		sum += input;
		i++;
		
        cin >> input;
	}

	cout << sum / i << endl;
	system("pause");
	return 0;

}
