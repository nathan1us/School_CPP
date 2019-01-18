#include <iostream>
#include <string>
#include <string.h>
#include <cstdlib>

using namespace std;

int main () {

	char sentence1[100];
	char sentence2[100];
	int counter = 0;
	
	// Input
	cout << "Enter the first sentence: ";
	cin.getline(sentence1, '.');
	cout << "Enter the second sentence: ";
	cin.getline(sentence2, '.');
	
	// Find if the sentences contain the word PMPG
	if (strstr(sentence1, "PMPG") && strstr(sentence2, "PMPG")) {
		cout << "Both sentences contain the word PMPG." << endl;
	} else {
        cout << "One or all of the sentences don't have the word PMPG." << endl;
	}
	
	// Find the amount of spaces in the second sentence
	for (int i = 0; i < strlen(sentence2); i++) {
		if (sentence2[i] == ' ') counter++;
	}
	
	cout << "There are " << counter << " spaces" << endl;

	system("pause");
	return 0;
}

