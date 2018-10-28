/*
C++ Program for performing binary ADDITION.
*/

#include<iostream>
using namespace std;

int main()
{
	long long binary1, binary2, temp1, temp2, tempA, tempB;
	int i = 0, remainder = 0, sum[20];
	bool flag;

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

	temp1 = binary1;
	temp2 = binary2;

	while (binary1 != 0 || binary2 != 0)
	{
		sum[i++] = (binary1 % 10 + binary2 % 10 + remainder) % 2;
		remainder = (binary1 % 10 + binary2 % 10 + remainder) / 2;
		binary1 = binary1 / 10;
		binary2 = binary2 / 10;
	}

	if (remainder != 0)
		sum[i++] = remainder;

	i--;
	cout << "Sum of " << temp1 << " & " << temp2 << "is:\t";
	while (i >= 0)
		cout << sum[i--];

	cout << endl;
	return 0;
}