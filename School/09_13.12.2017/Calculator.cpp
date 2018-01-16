#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int num1, num2;
	char sign;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	cout << "Enter the sign: ";
	cin >> sign;

	switch(sign)
	{
		case '+':
			cout << "The result is: " << num1 + num2 << endl;
			break;
		case '-':
			cout << "The result is: " << num1 - num2 << endl;
			break;
		case '*':
			cout << "The result is: " << num1 * num2 << endl;
			break;
		case '/':
			cout << "The result is: " << num1 / num2 << endl;
	}

   	system("pause");
	return 0;

}

