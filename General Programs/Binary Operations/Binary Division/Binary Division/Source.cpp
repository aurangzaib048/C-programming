/*
C++ Program for performing Binary DIVISION using Subtraction method.
*/

# include <iostream>
# include <cmath>
using namespace std;

long long Sub(long long, long long);
long long Binary(int);
int Decimal(long long);

int main()
{
	//variable declaration
	long long dividend, divisor, temp1, temp2, lar, product, tempA, tempB;
	int remainder, quotient = 0;
	bool flag = 0;

	//Input Statement's
	do
	{
		flag = 0;

		cout << "Enter 1st Binary Number (Dividend)?\t";
		cin >> dividend;
		cout << "Enter 2nd Binary Number (Divisor)?\t";
		cin >> divisor;

		tempA = dividend;
		tempB = divisor;

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

		if (flag || dividend < divisor)
			cout << "Invalid Input....\n";
		if (dividend < divisor)
			cout << "Dividend is less then Divisor.\nInput Again\n";
	} while (dividend < divisor || flag);			//bound's input for only binary numbers

	//(Not necessary) For formatting output
	for (int i = 1; i <= 80; i++)
		cout << "=";

	temp1 = dividend;
	temp2 = divisor;

	//Subtract's "Divisor(temp2)" from "dividend(temp1)" until (temp1 >= temp2)
	while (temp1 >= temp2)
	{
		temp1 = Sub(temp1, temp2);
		quotient++;
	}

	if (temp1 == 0)
		remainder = 0;
	else
		remainder = temp1;

	//Display's Result
	cout << "\nDIVISION of " << dividend << " by " << divisor << " is:\n\t\t";
	cout << "Quotient = " << Binary(quotient) << "\tRemainder = " << remainder;
	cout << endl;
	return 0;
}

//for calculating Difference of 2 binary numbers
long long Sub(long long num1, long long num2)
{
	int temp1 = Decimal(num1), temp2 = Decimal(num2);
	return Binary(temp1 - temp2);
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

//for converting decimal into binary
long long Binary(int num)
{
	int rem;
	long long binary = 0, i = 1;
	do
	{
		rem = num % 2;
		binary = binary + (i*rem);
		num = num / 2;
		i = i * 10;
	} while (num>0);
	return binary;
}