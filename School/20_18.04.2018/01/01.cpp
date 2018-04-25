#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	/*
		1. Enter an array of characters 
		2. Sort them in a decreasing order
		3. Print them 
	*/

	char arr[10], letter;
	int n = 10;

	for (int i = 0; i < 10; i++) {
		cout << "Enter a letter: ";
		cin >> arr[i];
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] < arr[j]) {
				letter = arr[i];
				arr[i] = arr[j];
				arr[j] = letter;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << "Element " << i << " is: " << arr[i] << endl;
	}

    return 0;
}

