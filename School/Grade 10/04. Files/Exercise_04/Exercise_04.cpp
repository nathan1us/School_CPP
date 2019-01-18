#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    
	ofstream banned;
	ofstream not_banned;

	banned.open("banned.txt", ios::out);
	not_banned.open("not_banned.txt", ios::out);

	if (!banned && !not_banned)
	{
		cout << "Cannot create/open the files." << endl;
		return 1;
	}
	else 
	{
		struct Student {
			char name[30];
			char school[20];
			int yearOfBirth;
			char subject[15];
			bool isBanned;
		} students[2];

		for (int i = 0; i < 2; i++)
		{
			cout << "Enter a name: ";
			cin.getline(students[i].name, 30);
			// TODO: FIX
			cin.ignore();
			cout << "Enter a school: ";
			cin >> students[i].school;
			cout << "Enter the year of birth: ";
			cin >> students[i].yearOfBirth;
			cout << "Enter a subject: ";
			cin >> students[i].subject;
			cout << "Is the student banned: ";
			cin >> students[i].isBanned;
		}

		for (int i = 0; i < 2; i++)
		{
			if (students[i].isBanned)
			{
				banned << students[i].name << " | " << endl;
			}
			else
			{
				// write to not_banned.txt
			}
		}

		banned.close();
		not_banned.close();
	}
}