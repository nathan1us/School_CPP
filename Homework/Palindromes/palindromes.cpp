#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

bool isPalindrome(char str[])
{

	if (!strcmp(str, ""))
	    return false;

    if (strlen(str) == 1)
        return true;

    int i = 0;
    int j = strlen(str) - 1; 

    while (i < j)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {

	char word[200];
	cin >> word;
	
	if (isPalindrome(word)) {
		cout << "The word \"" << word << "\" is a palindrome." << endl;
	} else {
        cout << "The word \"" << word << "\" is not a palindrome." << endl;
	}

	system("pause");
	return 0;
}

