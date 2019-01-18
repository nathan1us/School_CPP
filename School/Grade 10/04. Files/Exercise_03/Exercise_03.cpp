#include <iostream>
#include <fstream>

using namespace std;

/*
	File "cars.txt" contains information about cars and has the following structure

	1. Car brand ( string_
	2. Driver's name ( string )
	3. Car color ( string )
	4. Year ( int )
	5. Is in working condition ( bool )

	Problem: Write a program to read the file's data and prints:
	
		- the amount of drivers who own a red Ferrari;
		- the year the oldest car was made in;
		- if there is a pink trabant in working condition;

*/

int main()
{
	ifstream inputFile;

	inputFile.open("cars.txt", ios::in);

	if (!inputFile)
	{
		printf("The file does not exist!");
	}
	else
	{
		// Declare a Car structure and create an array for our cars
		struct Car {
			char brand[25];
			char driverName[25];
			char color[15];
			int year;
			int can_drive;

		} cars[3];

		// Declare some local variables to help us with logic checks
		int ferrari_counter = 0, oldest_car = 2019;
		bool existing_trabant = false;

		// Read information from file
		for (int i = 0; i < 3; i++)
		{
			inputFile >> cars[i].brand;
			inputFile >> cars[i].driverName;
			inputFile >> cars[i].color;
			inputFile >> cars[i].year;
			inputFile >> cars[i].can_drive;
		}

		// Loop through the existing cars and find the required information
		for (int i = 0; i < 3; i++)
		{
			// Ferrari logic
			if (strcmp(cars[i].brand, "Ferrari") == 0)
			{
				if (strcmp(cars[i].color, "Red") == 0)
					ferrari_counter++;
			}
			// Trabant logic
			if (strcmp(cars[i].brand, "Trabant"))
			{
				if (strcmp(cars[i].color, "Pink"))
				{
					if (cars[i].can_drive == 1)
					{
						existing_trabant = true;
					}
				}
			}

			if (cars[i].year < oldest_car)
				oldest_car = cars[i].year;
		}

		// Final output
		cout << ferrari_counter << " driver(s) own a red Ferrari" << endl;
		cout << "The oldest car was made in " << oldest_car << endl;

		if (existing_trabant)
			cout << "There is a pink Trabant that is in working condition." << endl;
		else
			cout << "There isn't a pink Trabant that is in working condition." << endl;

		inputFile.close();
	}

     
	return 0;
}
