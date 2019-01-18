#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	double first, second, next, arr[20];
	
	first = 1;
	second = 1;
	
	for (int i = 0; i < 20; i++) {
		arr[i] = first;
		next = first + second;
		first = second;
		second = next;
	}

	for (int i = 0; i < 20; i++) {
		cout << arr[i] << " ";
	}
	
	cout << endl;


	system("pause");
	return 0;

}
