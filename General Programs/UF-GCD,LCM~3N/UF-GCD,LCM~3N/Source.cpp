/*Program for calculating GCD and LCM of 3 numbers using User-Defined functions*/

#include<iostream>
using namespace std;

int GCD(int, int, int);
int LCM(int, int, int);
int lar(int, int, int);

int main()
{
	int num1, num2, num3, lcm, gcd;
	cout << "Enter 1st Number?\t";
	cin >> num1;
	cout << "Enter 2nd Number?\t";
	cin >> num2;
	cout << "Enter 3rd Number?\t";
	cin >> num3;
	gcd = GCD(num1, num2, num3);
	lcm = LCM(num1, num2, num3);
	cout << "\nGREATEST COMMON DIVISOR (GCD) or HCF of " << num1 << ", " << num2 << " and " << num3 << " =\t " << gcd << endl;
	cout << "\nLEAST COMMON MULTIPLE (LCM) of " << num1 << ", " << num2 << " and " << num3 << " =\t " << lcm << "\n\n";
	return 0;
}

int lar(int num1, int num2, int num3)
{
	if (num1 > num2 && num1 > num3)
		return num1;
	else if (num2 > num1 && num2 > num3)
		return num2;
	else
		return num3;
}

int GCD(int num1, int num2, int num3)
{
	int gcd, i;
	
	for (i = lar(num1, num2, num3); i >= 1; i--)
	{
		if (num1 % i == 0 && num2 % i == 0 && num3 % i == 0)
		{
			gcd = i;
			break;
		}
	}
	return gcd;
}

int LCM(int num1, int num2, int num3)
{
	int lcm = 0, a, i = 1;
	while (lcm == 0)
	{
		a = lar(num1,num2,num3)*i;
		if (a % num1 == 0 && a % num2 == 0 && a % num3 == 0)
			lcm = a;
		i++;
	}
	return lcm;
}