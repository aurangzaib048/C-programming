/*
Program for finding number of Even and Odd digits in the entered number using single User-Defined function.
*/

#include<iostream>
using namespace std;

void CountEvenOdd(int, int &, int &);

int main()
{
	int num, CountEven = 0, CountOdd = 0;

	cout << "Enter Number?\t";
	cin >> num;

	CountEvenOdd(num, CountEven, CountOdd);

	cout << "\nNumber of Even Digits in " << num << " = \t" << CountEven << endl;
	cout << "\nNumber of Odd Digits in " << num << " = \t" << CountOdd << endl;

	return 0;
}

void CountEvenOdd(int num, int &CountEven, int &CountOdd)
{
	while (num != 0)
	{
		if ((num % 10) % 2 == 0)
			CountEven++;
		else
			CountOdd++;
		num /= 10;
	}
}