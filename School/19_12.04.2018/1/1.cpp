// 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int arr[10], n = 10, P, i, j;

	for (i = 0; i < n; i++) {
		cout << "Enter num " << i + 1 << ": ";
		cin >> arr[i];
	}

	for (i = 0; i < n; i++)
		for (j = 0; j < n - i - 1; j++) {
			bool sorted = true;
			if (arr[j] < arr[j + 1]) {
				sorted = false;
				P = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = P;
			}

			if (sorted) {
				return;
			}
		}
	for (i = 0; i < n; i++)
		cout << "arr[" << i << "] = " << arr[i] << endl;


    return 0;
}

