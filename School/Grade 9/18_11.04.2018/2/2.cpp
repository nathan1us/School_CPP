// 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n = 6, i, j;
	char arr[6], P;

	for (i = 0; i < n; i++) {
		cout << "Enter char " << i + 1 << ": ";
		cin >> arr[i];
	}

	for (i = 0; i < n; i++)
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1]) {
				P = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = P;
			}

	for (i = 0; i < n; i++)
		cout << "arr[" << i << "] = " << arr[i] << endl;

	system("pause");
	return 0;
}
