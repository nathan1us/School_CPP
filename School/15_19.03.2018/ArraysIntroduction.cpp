#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{

	int arr[10];
	double sum = 0, average;
	
	for (int i = 0; i < 10; i++) {
		cout <<
		"Enter element No." << i+1 << ": ";
		cin >> arr[i];
	}
	
	cout << "The array's elements are: ";
	
	for (int j = 0; j < 10; j++) {
		cout << arr[j] << ", ";
		sum += arr[j];
	}
	
	cout << "\b\b" << " " << endl;
	cout << "Sum of array: " << sum << endl;
	
	average = sum / 10;
	cout << "Average of the array: " << average << endl;
	
	system("pause");
	return 0;

}
