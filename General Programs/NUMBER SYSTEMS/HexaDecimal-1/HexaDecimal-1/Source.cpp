/*
Program for coverting "Decimal number into HexaDecimal".
*/

#include<iostream>
using namespace std;

int main()
{
	long num, temp, i = 0, HD[10];

	cout << "Enter Number?\t";
	cin >> num;
	temp = num;

	//for calculating no. of digits in Hexa-Decimal
	while (num!=0)
	{
		HD[i] = num % 16;
		num /= 16;
		i++;
	}

	cout << "HexaDecimal of " << temp << " is:\n";
	
	for (int a = i - 1; a >= 0; a--)
	{
		if (HD[a] == 10)
			cout << "A";
		else if (HD[a] == 11)
			cout << "B";
		else if (HD[a] == 12)
			cout << "C";
		else if (HD[a] == 13)
			cout << "D";
		else if (HD[a] == 14)
			cout << "E";
		else if (HD[a] == 15)
			cout << "F";
		else
			cout << HD[a];
	}

	cout << endl;
	return 0;
}