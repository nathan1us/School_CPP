#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	int n;
	double biggest = 0, nums[10], num;

	cout << "How many numbers: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "Enter a number: ";
		cin >> num;
		nums[i] = num;
		if (nums[i] >= biggest) {
			biggest = nums[i];
		}
	}

	cout << "The biggest number is: " << biggest << endl;

	system("pause");
	return 0;
}
