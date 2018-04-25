#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	int nums[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int check = 0, i = 0, j = 10, num = 6, M;

	while ((i <= j) && (!check)) {
		M = (i + j) / 2;
		if (nums[M] < num) {
			i = M + 1;
		}
		else if (nums[M] > num) {
			j = M - 1;
		}
		else {
			check = 1;
		}
	}

	if (check) {
		cout << "Yes" << endl;
	}
	else cout << "No" << endl;


	return 0;
}
