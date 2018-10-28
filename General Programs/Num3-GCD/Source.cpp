/*
Program for calculating GCD 3 numbers.
*/

#include<iostream>
using namespace std;


int main()
{
	int num1, num2, num3, lar, gcd, i;
	cout << "Enter 1st Number?\t";
	cin >> num1;
	cout << "Enter 2nd Number?\t";
	cin >> num2;
	cout << "Enter 3rd Number?\t";
	cin >> num3;

	if (num1 > num2 && num1>num3)
		lar = num1;
	else if (num2 > num1 && num2>num3)
		lar = num2;
	else
		lar = num3;

	for (i = lar; i >= 1; i--)
	{
		if (num1 % i == 0 && num2 % i == 0 && num3 % 1 == 0)
		{
			gcd = i;
			break;
		}
	}

	cout << "\nGREATEST COMMON DIVISOR (GCD) of " << num1 << ", " << num2 << " and " << num3 << " =\t " << gcd << endl;

	return 0;
}