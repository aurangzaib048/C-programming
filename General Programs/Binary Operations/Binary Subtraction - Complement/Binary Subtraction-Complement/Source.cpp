/*
C++ Program for performing Binary SUBTRACTION using Complementery method.
*/

# include <iostream>
# include <cmath>
using namespace std;

long long Sum(long long, long long);
long long complement(long long,int);

int main()
{
	//variable declaration
	int sub, sub_l, l1 = 0, a = 0, bits;
	long long binary1, binary2, power, tempA, tempB;
	bool flag;

	//Input Statement's
	cout << "Enter Number of Bits in binary numbers?\t";
	cin >> bits;

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

		if (flag)
			cout << "Invalid Input....\n";
	} while (flag);		//bound's input for only binary numbers

	//(Not necessary) For formatting output
	for (int i = 1; i <= 80; i++)
		cout << "=";
	
	cout << "Complement of " << binary2 << " = " << complement(binary2, bits) << endl;		//Display's Complement of 2nd number
	
	sub = Sum(binary1, complement(binary2, bits));			//calculate sum of 1st number and complement of 2nd number
	sub_l = sub;
	cout << "Sum of " << binary1 << " & " << complement(binary2, bits) << " is:\t" << sub_l << endl;	//Display's Sum
	
	while (sub_l != 0)				//calculate number of bits in Sum (l1)
	{
		sub_l /= 10;
		l1++;						
	}

	if (l1 > bits)					//if l1 > bits
	{
		power = pow(10, bits);
		sub = sub % power;			//removes 1st bit (1) of 'sub'
		sub = Sum(sub, 1);			//add 1 in the number 'sub'
	}
	else
	{
		sub = complement(sub, bits);	//takes complement of 'sub' again
		a = 1;
	}

	for (int i = 1; i <= 80; i++)
		cout << "=";

	cout << "\nDIFFERENCE of " << binary1 << " & " << binary2 << " is:\n\t";
	cout << binary1 << " - " << binary2 << " = \t";
	if (a == 1)
		cout << "-";			//prints negative sign
	cout << sub;

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

//for taking complement of 2 binary numbers
long long complement(long long binary2, int bits)
{
	int rem, i=0;
	long long complement = 0;

	while (bits > 0)
	{
		rem = binary2 % 10;

		if (rem == 0)
			complement = complement + pow(10, i);

		binary2 = binary2 / 10;
		i++;
		bits--;
	}

	return complement;
}
