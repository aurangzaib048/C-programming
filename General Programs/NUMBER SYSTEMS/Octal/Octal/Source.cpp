/*
Program for coverting "Decimal number into Octal".
*/

#include <iostream>
using namespace std;

int main()
{
	long num, temp, rem, i = 1, octal = 0,reverse=0;
	cout << "Enter the decimal to be converted?\t";
	cin >> num;
	temp = num;

	do
	{
		rem = num % 8;
		if (rem == 0)
			i *= 10;
		else
			reverse = reverse * 10 + rem;
		num = num / 8;
	} while (num>0);

	while (reverse != 0)
	{
		rem = reverse % 10;
		octal = octal * 10 + rem;
		reverse /= 10;
	}

	octal = octal * i;
	cout << "Octal of " << temp << " is:\n" << octal << endl;
	return 0;
}