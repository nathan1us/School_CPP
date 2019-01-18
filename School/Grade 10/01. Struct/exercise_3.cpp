#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int n, vazovBooks = 0, softPressBooks = 0;
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

	cout << "Books released after 2000:";

	for (int i = 0; i < n; i++)
	{
		if (books[i].yearOfRelease >= 2000)
		{
			cout << books[i].name << " ";
		}
	}

	cout << endl;

	for (int i = 0; i < n; i++)
	{
		if (books[i].author == "Ivan Vazov")
		{
			vazovBooks++;
		}
	}
	
	cout << "Books released by Ivan Vazov: " << vazovBooks << endl;

	for (int i = 0; i < n; i++)
	{
		if (books[i].publisher == "SoftPress")
		{
			softPressBooks = 1;
			break;
		}
	}

	if (softPressBooks)
	{
		cout << "There are books published by SoftPress." << endl;
	}
	else
	{
        cout << "There aren't any books published by SoftPress." << endl;
	}



	system("pause");
	return 0;
}
