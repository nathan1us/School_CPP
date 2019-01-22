#include <iostream>
#include <fstream>

using namespace std;

/*
	Problem: Write a program to:

		1. Read input about students from the console
		2. Create two files for the banned and not banned students
		3. If a student is banned save the information inside the "banned" file,
		otherwise save the information inside the "not_banned" file.
*/

int main()
{
    
	ofstream banned;
	ofstream not_banned;

	banned.open("banned.txt", ios::out);
	not_banned.open("not_banned.txt", ios::out);

	if (!banned && !not_banned)
	{ // End the program if something happens that causes us to not open/create the file
		cout << "Cannot create/open the files." << endl;
		return 1;
	}
	else 
	{
		// Declare a Student structure to use for our program
		struct Student {
			char name[30];
			char school[50];
			int yearOfBirth;
			char subject[15];
			bool isBanned;
		} students[2];

		cout << "Press ENTER to start!" << endl;

		// Read information from the console
		for (int i = 0; i < 2; i++)
		{
			cin.ignore(); // used to prevent input skipping 
			cout << "Enter a name: ";
			cin.getline(students[i].name, 30);
			cout << "Enter a school: ";
			cin.getline(students[i].school, 30);
			cout << "Enter the year of birth: ";
			cin >> students[i].yearOfBirth;
			cout << "Enter a subject: ";
			cin >> students[i].subject;
			cout << "Is the student banned ( 1 / 0 ): ";
			cin >> students[i].isBanned;
		}

		// File saving logic
		for (int i = 0; i < 2; i++)
		{
			if (students[i].isBanned)
			{
				banned << "Student: " << students[i].name << " | School: " << students[i].school << " | Year of birth: " << students[i].yearOfBirth << " | Subject: " << students[i].subject << endl;
			}
			else
			{
				not_banned << "Student: " << students[i].name << " | School: " << students[i].school << " | Year of birth: " << students[i].yearOfBirth << " | Subject: " << students[i].subject << endl;
			}
		}

		banned.close();
		not_banned.close();
	}
}