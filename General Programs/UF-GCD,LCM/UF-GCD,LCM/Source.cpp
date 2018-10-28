/*
Program for calculating GCD and LCM of 2 numbers using User-Defined functions
*/

#include<iostream>
using namespace std;

int GCD(int num1, int num2);
int LCM(int num1, int num2);

int main()
{
	int num1, num2, uf1, uf2;
	cout << "Enter 1st Number?\t";
	cin >> num1;
	cout << "Enter 2nd Number?\t";
	cin >> num2;
	uf1 = GCD(num1, num2);
	uf2 = LCM(num1, num2);
	cout << "\nGREATEST COMMON DIVISOR (GCD) of " << num1 << " and " << num2 << " =\t " << uf1 << endl;
	cout << "\nLEAST COMMON MULTIPLE (LCM) of " << num1 << " and " << num2 << " =\t " << uf2 << "\n\n\t\t\t";
	return 0;
}

int GCD(int num1, int num2)
{
	int lar, gcd, i;
	if (num1 > num2)
		lar = num1;
	else
		lar = num2;
	for (i = lar; i >= 1; i--)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			gcd = i;
			break;
		}
	}
	return gcd;
}

int LCM(int num1, int num2)
{
	int lcm;
	lcm = (num1*num2) / GCD(num1, num2);
	return lcm;
}