#include <iostream>
#include <fstream>

using namespace std;

/*
	File "cars.txt" has the following structure

	1. Brand
	2. Year
	3. Kilometers

	Problem: Write a program to read the file's data and prints the cars' brands manufactured after 2010

*/

int main()
{
	ifstream inputFile;

	inputFile.open(R"(D:\Georgi - 10A\04. Files\Exercise_02\cars.txt.txt)", ios::in);

	if (!inputFile)
	{
		printf("The file does not exist!");
	}
	else
	{
		struct Car {
			char brand[25];
			int year;
			int kilometers;
		} cars[4];

		for (int i = 0; i < 4; i++)
		{
			inputFile >> cars[i].brand;
			inputFile >> cars[i].year;
			inputFile >> cars[i].kilometers;
		}


		for (int i = 0; i < 3; i++)
		{
			if (cars[i].year >= 2010)
				cout << cars[i].brand << endl;
		}

		inputFile.close();
	}

	return 0;
}
