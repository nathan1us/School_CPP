#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int a, b, c;

	cin >> a;
	cin >> b;
	cin >> c;
	
	if (a < 0 && b < 0 && c < 0)
		cout << "Yes" << endl;
	else
	    cout << "No" << endl;

   	system("pause");
	return 0;

}

