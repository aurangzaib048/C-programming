/*Program for displaying ASCII Code of entered character until the user press 'n' or 'N'.*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char ch;

	do
	{
		cout << "\nEnter character?\t";
		ch = _getche();
		cout << "\nASCII Code of " << ch << " is\t" << static_cast<int>(ch);
		cout << "\nDo u want to run again ? (y/n)\t";
		ch = _getche();
	} while (ch != 110 && ch != 78);

	cout << endl;
	return 0;
}