#include <iostream>
#include <fstream>

using namespace std;

int main()
{

	ofstream outputFile;

	outputFile.open("file.txt", ios::out);

	if (!outputFile)
	{
		cout << "The file could not be opened!" << endl;
	}
	else {

		outputFile << "Hello World!" << endl << "Text2" << endl;

		outputFile.close();
	}

	return 0;
}