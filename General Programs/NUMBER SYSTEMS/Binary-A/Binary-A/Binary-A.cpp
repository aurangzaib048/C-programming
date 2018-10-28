/*
Program for coverting "Decimal number into Binary" using Array (max 64-Bits).
*/

#include<iostream>
using namespace std;

int main()
{
	int b[64], i = 0, digits = 0;
	long  num, temp, temp1;

	//for input
	cout << "Enter Number?\t";
	cin >> num;
	temp = num;
	temp1 = num;

	//for calculating bits
	while (temp1 > 0)
	{
		temp1 /= 2;
		digits++;
	}

	//for calculting binary
	while (i <= digits)
	{
		b[i] = num % 2;
		num /= 2;
		i++;
	}

	cout << "Binary of " << temp << " is:\n";
	for (i = digits; i >= 0; i--)
		cout << b[i];

	cout << endl;
	return 0;
}