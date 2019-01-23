#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream inputFile;

	inputFile.open("cars.txt", ios::in);

	if (!inputFile)
	{
		cout << "Cannot open the file" << endl;
		return 1;
	} 
	else
	{
		struct Car {
			char brand[20];
			char registration_plate[10];
			char color[15];
			int year;
			bool isWorking;
		} cars[5];

		int ok = false, existing_blue_bmws = 0;

		for (int i = 0; i < 5; i++)
		{
			inputFile >> cars[i].brand;
			inputFile >> cars[i].registration_plate;
			inputFile >> cars[i].color;
			inputFile >> cars[i].year;
			inputFile >> cars[i].isWorking;
		}

		cout << "Not working cars: ";

		for (int i = 0; i < 5; i++)
		{
			if (cars[i].isWorking == 0)
				cout << cars[i].registration_plate << " ";

			if (cars[i].year < 1980) ok = true;
			if (strcmp(cars[i].brand, "BMW") == 0)
			{
				if (strcmp(cars[i].color, "Blue") == 0)
					existing_blue_bmws++;
			}
		}

		cout << endl << "There is/are " << existing_blue_bmws << " BMWs that are blue" << endl;
		if (ok) cout << "There are cars that are made before the year 1980" << endl;

		inputFile.close();
	}
}
