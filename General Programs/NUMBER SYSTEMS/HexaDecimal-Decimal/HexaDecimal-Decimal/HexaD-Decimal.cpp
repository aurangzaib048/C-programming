/*
Program for coverting "Hexa-Decimal number into Decimal".
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	char num[10];
	int l, temp[20],i=0,a=0;
	long decimal = 0;
	
	cout << "Enter the Hexa-Decimal to be converted?\t";
	cin >> num;
	
	for (l = 0; num[l] != '\0'; l++);

	for (int i = 0; i < l; i++)
	{
		if (num[i] % 48 == 0)
			temp[i] = 0;
		else if (num[i] % 48 == 1)
			temp[i] = 1;
		else if (num[i] % 48 == 2)
			temp[i] = 2;
		else if (num[i] % 48 == 3)
			temp[i] = 3;
		else if (num[i] % 48 == 4)
			temp[i] = 4;
		else if (num[i] % 48 == 5)
			temp[i] = 5;
		else if (num[i] % 48 == 6)
			temp[i] = 6;
		else if (num[i] % 48 == 7)
			temp[i] = 7;
		else if (num[i] % 48 == 8)
			temp[i] = 8;
		else if (num[i] % 48 == 9)
			temp[i] = 9;
		else if (num[i] % 48 == 17)
			temp[i] = 10;
		else if (num[i] % 48 == 18)
			temp[i] = 11;
		else if (num[i] % 48 == 19)
			temp[i] = 12;
		else if (num[i] % 48 == 20)
			temp[i] = 13;
		else if (num[i] % 48 == 21)
			temp[i] = 14;
		else if (num[i] % 48 == 22)
			temp[i] = 15;
	}

	cout << "\nHexa-Decimal number \"" << num << "\" in Decimal " << " is:\n";
	i = l - 1;
	while (a < l)
	{
		decimal = decimal + (temp[a] * pow(16, i));
		cout << temp[a] * pow(16, i);
		if (i != 0)
			cout << " + ";
		i--;
		a++;
	}

	cout << " = " << decimal << endl<<endl;
	return 0;
}