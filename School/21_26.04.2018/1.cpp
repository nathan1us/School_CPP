#include <iostream>
#include <cstdlib>

using namespace std;

void printDistinct(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
		int j;
        for (j = 0; j < i; j++)
           if (arr[i] == arr[j])
               break;

        if (i == j)
          cout << arr[i] << " ";
    }
}

int main() {

	int arr[5], temp;

	// Input
	for (int i = 0; i < 5; i++) {
		cout << "Enter a number: ";
		cin >> arr[i];
	}
	// Find repeating elements
    for (int i = 0; i < 5 ; i++) {
        for (int j = i + 1; j < 5; j++) {
			if (arr[i] == arr[j]) {
				cout << "The repeating number is " << arr[i] << endl;
				break;
			}
		}
	}

	cout << "The unique elements are: ";
	int n = sizeof(arr) / sizeof(arr[0]);
    printDistinct(arr, n);
    cout << endl;
	system("pause");
	return 0;

}
