#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	int length = 0, excelentGrades = 0;
	double nums[26], grades = 0, smallest = 6;

	for (int i = 0; i < 26; i++) {
		cout << "Enter grade " << i + 1 << ": ";
		cin >> nums[i];
		grades += nums[i];
		
		if ( nums[i] < smallest) {
			smallest = nums[i];
		}
        
		if (nums[i] == 6 ) {
			excelentGrades++;
		}
	}

	cout << "The smallest grade is: " << smallest << endl;
	cout << "The average grade is: " << grades / 26 << endl;
	cout << excelentGrades << " excelent grades" << endl;

	system("pause");
	return 0;
}
