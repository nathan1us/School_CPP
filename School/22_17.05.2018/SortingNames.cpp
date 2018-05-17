#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;

int main () {

 char names[6][20];
	char p[20];

	for (int i = 0; i <= 5; i++) {
		cout << "Enter names: ";
		cin.getline(names[i], 20);
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {

			/*  Sort them alphabetically
			if (strcmp(names[j], names[j+1]) > 0) { */

			    // Sort them in ascending order
                if (strlen(names[j]) > strlen(names[j+1])) {
				strcpy(p, names[j]);
				strcpy(names[j], names[j+1]);
				strcpy(names[j+1], p);
			}
		}
	}

    for (int i = 0; i <= 5; i++) {
		cout << names[i] << endl;
	}

	system("pause");
	return 0;
}

