#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	int arr[5], temp, sum = 0, negativeCounter = 0;
	
	// Input
	for (int i = 0; i < 5; i++) {
		cout << "Enter a number: ";
		cin >> arr[i];
	}
	
	// Check for a 0
	for (int i = 0; i < 5; i++) {
		if (arr[i] == 0) {
			cout << "Yes, there is a zero." << endl;
			break;
		}
	}
	
	// Find the sum of the numbers
    for (int i = 0; i < 5; i++) {
		sum += arr[i];
	}
	
	cout << "The sum of the array's elements is: " << sum << endl;
	
	// Find the amount of negative numbers
	for (int i = 0; i < 5; i++) {
		if (arr[i] < 0) {
			negativeCounter++;
		}
	}
	
	if (negativeCounter >= 1) {
		cout << negativeCounter << " negative numbers." << endl;
	}
	
	// Sort the array ( select method )
	for (int i = 0; i < 5 - 1; i++) {
        for (int j = i + 1; j < 5; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	cout << "The array's elements are: ";
	
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	system("pause");
	return 0;

}
