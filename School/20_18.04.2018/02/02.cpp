#include <iostream>
#include "stdafx.h"

using namespace std;

int main()
{
	int arr[10], number, n = 25;

	for (int i = 0; i < 10; i++) {
		cout << "Enter a number: ";
		cin >> arr[i];
	}

	for (int i = 0; i < n /2; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] < arr[j]) {
				number = arr[i];
				arr[i] = arr[j];
				arr[j] = number;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << "Element " << i << " is: " << arr[i] << endl;
	}

	return 0;
}

