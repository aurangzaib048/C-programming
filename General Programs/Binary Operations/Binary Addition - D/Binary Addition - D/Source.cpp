/*
C++ Program for performing binary ADDITION by converting it into decimal.
*/

# include <iostream>
using namespace std;

int decimal(unsigned int);
long long Binary(int);

int main()
{
	unsigned int binary1, binary2;
	long long binary;
	int temp1, temp2, sum, tempA, tempB;
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
	
	temp1 = decimal(binary1);
	temp2 = decimal(binary2);
	sum = temp1+temp2;
	binary = Binary(sum);

	cout << "SUM of " << binary1 << " & " << binary2 << " is:\n\t\t" << binary;
	cout << endl;
	return 0;
}

int decimal(unsigned int num)
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

