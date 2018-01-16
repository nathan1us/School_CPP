#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int n, k;
	cout << "Enter n:" << endl;
	cin >> n;
	cout << "Enter k: " << endl;
	cin >> k;

	int array[n];

	for (int i = 0; i < n; i++)
	{
	 array[i] = i + 1;
	}

	cout << "Before change: ";

 	for (int i = 0; i < n; i++)
	{
	 	cout << array[i] << " ";
	}

	cout << endl;
	cout << "After change: ";

	for (int i = 0; i < k; i++)
	{
		swap(array[i], array[n-1]);
  		n--;
	}

	for (int i = 0; i < n + k; i++)
	{
	 	cout << array[i] << " ";
	}

	cout << endl;
	
	system("pause");
	return 0;
}
