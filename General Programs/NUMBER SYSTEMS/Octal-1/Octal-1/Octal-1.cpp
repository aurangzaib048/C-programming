/*
Program for coverting "Decimal number into Octal".
*/

#include <iostream>
using namespace std;

int main()
{
	int num, temp, rem, i = 1, octal = 0;
	cout << "Enter the decimal to be converted?\t";
	cin >> num;
	temp = num;

	//for calculating Octal
	do
	{
		rem = num % 8;
		octal = octal + (i*rem);
		num /= 8;
		i = i * 10;
	} while (num > 0);

	cout << "Octal of " << temp << " is:\t" << octal << endl;
	return 0;
}