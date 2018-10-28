/* Program taht combines two or three digits in order to make the largest possible number.
Each digit will be in the range from 0 to 9*/

#include <iostream>
using namespace std;

int large(int digits, int a, int b, int c);


int main()
{
	int a[3],digits;
	cout << "How many digits do u want to enter (2 or 3)? \t";
	cin >> digits;
	while (digits != 2 && digits != 3)
	{
		cout << "How many digits do u want to enter (2 or 3)? \t";
		cin >> digits;
	}
	cout << "Enter " << digits << " digits (0-9)?\t";
	for (int i = 0; i < digits; i++)
		cin >> a[i];
	cout << "Largest Possible number is\t" << large(digits, a[0], a[1], a[2]) << endl;
	return 0;
}

int large(int digits, int a, int b, int c)
{
	int l1 = a, l2 = b, l3 = c, num;
	if (digits == 3)
	{
		if (a > b)
		{
			l2 = a;
			if (a > c)
			{
				l1 = a;
				if (c > b)
				{
					l2 = c;
					l3 = b;
				}
				else
				{
					l2 = b;
					l3 = c;
				}
			}
			else
			{
				l1 = c;
				l3 = b;
			}
		}
		else
		{
			if (b > c)
			{
				l1 = b;
				if (a > c)
					l2 = a;
				else
				{
					l2 = c;
					l3 = a;
				}
			}
			else
			{
				l1 = c;
				l3 = a;
			}
		}
		num = (l1 * 100) + (l2 * 10) + l3;
	}
	else
	{
		if (a > b)
			num = (a * 10) + b;
		else
			num = (b * 10) + a;
	}
	return num;
}