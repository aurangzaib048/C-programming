/*
Program for coverting "Decimal number into HexaDecimal" (Using 'iomanip').
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char response;
	
	do
	{
		cout << "Enter positive integer to convert to Hexadecimal:\n\n";
		int number;
		cin >> number;
		cout << "Hexadecimal representation of " << number << " is "
			<< hex << uppercase << number << dec << '\n'
			<< "\nDo u want to enter another number (Y or N)? ";
		cin >> response;
	} while (response == 'Y' || response == 'y');

	return 0;
}