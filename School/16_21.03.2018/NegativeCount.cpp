#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	int length = 0;
	double nums[10], num;
	
	for (int i = 0; i < 10; i++) {
		cout << "Enter a grade: ";
		cin >> num;
		nums[i] = num;
		if (nums[i] >= 5.50) {
			length++;
		}
	}
	
	cout << length << " students will take a reward." << endl;

	system("pause");
	return 0;
}
