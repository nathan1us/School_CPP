#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int birthYear, currentYear, yearsOld;
	cout << "Enter year of birth: ";
	cin >> birthYear;
	cout << "Enter current year: ";
	cin >> currentYear;
	
	yearsOld = currentYear - birthYear;
	
	if (birthYear < 0)
	{
		if (yearsOld <= 3)
			cout << "Baby" << endl;
		else if (yearsOld >= 4 && yearsOld <= 7)
		    cout << "Kid" << endl;
		else if (yearsOld >= 8 && yearsOld <= 16)
		    cout << "Underage" << endl;
		else if (yearsOld <= 17 && yearsOld >= 18)
		    cout << "Teen" << endl;
		else 
		    cout << "Mature" << endl;
 	}
	else
	    cout << "Invalid year" << endl;
	    
	system("pause");
	return 0;
}
