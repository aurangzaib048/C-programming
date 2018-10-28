/*
C++ Program for performing Binary MULTIPLICATION using Addition method.
*/

# include <iostream>
# include <cmath>
using namespace std;

long long Sum(long long, long long);
int Decimal(long long);

int main()
{
	//variable declaration
	long long binary1, binary2, lar, product, tempA, tempB;
	int temp;
	bool flag=0;

	//Input Statement's
	do
	{
		flag = 0;

		cout << "Enter 1st binary number:\t";
		cin >> binary1;
		cout << "Enter 2nd binary number:\t";
		cin >> binary2;

		tempA = binary1;
		tempB = binary2;

		while (tempA != 0)
		{
			if (tempA % 10 > 1)
				flag = 1;
			tempA /= 10;
		}

		while (tempB != 0)
		{
			if (tempB % 10 > 1)
				flag = 1;
			tempB /= 10;
		}

		if (flag || binary1 > 111111111 || binary2 > 111111111)
			cout << "Invalid Input....\n";
	
		if (binary1 > 111111111 || binary2 > 111111111)
			cout << "Numbers are larger than 9-Bits\nInput Again\n";
	} while (flag || binary1 > 111111111 || binary2 > 111111111);			//bound's input for only binary numbers (Max 9-bits)

	//(Not necessary) For formatting output
	for (int i = 1; i <= 80; i++)
		cout << "=";

	//Calculate's largest number
	if (binary1 < binary2)
	{
		lar = binary2;
		flag = 1;
	}
	else
		lar = binary1;

	//converts smallest number into decimal and store's it in "temp"
	if (flag)
		temp = Decimal(binary1);
	else
		temp = Decimal(binary2);

	product = lar;

	//for adding "lar" "temp" times
	while (temp > 1)
	{
		product = Sum(product, lar);
		temp--;
	}

	//Display's Result
	cout << "PRODUCT of Binary numbers " << binary1 << " & " << binary2 << " is:\n\t";
	cout << binary1 << " x " << binary2 << " = \t" << product;		//display's binary product
	cout << endl;
	return 0;
}

//for calculating Sum of 2 binary numbers
long long Sum(long long binary1, long long binary2)
{
	int remainder = 0;
	long long sum = 0, i = 1;
	while (binary1 != 0 || binary2 != 0)
	{
		sum = sum + (i*((binary1 % 10 + binary2 % 10 + remainder) % 2));
		remainder = (binary1 % 10 + binary2 % 10 + remainder) / 2;
		i *= 10;
		binary1 = binary1 / 10;
		binary2 = binary2 / 10;
	}

	if (remainder != 0)
		sum = sum + (i*remainder);

	return sum;
}

//for converting binary into decimal
int Decimal(long long num)
{
	int rem, decimal = 0, i = 0;
	while (num > 0)
	{
		rem = num % 10;
		decimal = decimal + (rem*  pow(2, i));
		i++;
		num /= 10;
	}
	return decimal;
}