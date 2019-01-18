#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int n, yearInput;
	cout << "Enter a number: ";
	cin >> n;

	struct Book
	{
        char name[20];
		char author[30];
		char publisher[20];
		int yearOfRelease;
	} books[n];


	for(int i = 0; i < n; i++)
	{
		cout << "Enter name: ";
		cin >> books[i].name;
    	cout << "Enter author: ";
		cin >> books[i].author;
		cout << "Enter publisher: ";
		cin >> books[i].publisher;
		cout << "Enter year of release: ";
		cin >> books[i].yearOfRelease;
		cout << "------------" << endl;
	}

	cout << "Enter a year of release: ";
	cin >> yearInput;

	cout << "Books released in " << yearInput << ": ";

	for (int i = 0; i < n; i++)
	{
		if (books[i].yearOfRelease == yearInput)
		{
			cout << books[i].name << " ";
		}
	}

	cout << endl;

	system("pause");
	return 0;
}
