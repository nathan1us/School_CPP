#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

	struct Student
	{
        char name[20];
		int num;
		double grade;
	} students[1];
	
	
	for(int i = 0; i < 1; i++)
	{
		cout << "Enter name: ";
		cin >> students[i].name;
    	cout << "Enter num: ";
		cin >> students[i].num;
		cout << "Enter grade: ";
		cin >> students[i].grade;
		cout << "------------" << endl;
	}
	
	cout << "Students with grade higher than 5.50: ";
	
	for (int i = 0; i < 1; i++)
	{
		if (students[i].grade >= 5.50)
		{
			cout << students[i].name << " ";
		}
	}
	
	cout << endl;

	system("pause");
	return 0;
}

