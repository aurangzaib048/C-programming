/*
Program for calculating LCM of 3 numbers.
*/

#include<iostream>
using namespace std;


int main()
{
	int num1, num2, num3, lar, lcm = 0, i = 1, a;
	cout << "Enter 1st Number?\t";
	cin >> num1;
	cout << "Enter 2nd Number?\t";
	cin >> num2;
	cout << "Enter 3rd Number?\t";
	cin >> num3;

	if (num1 > num2 && num1 > num3)
		lar = num1;
	else if (num2 > num1 && num2 > num3)
		lar = num2;
	else
		lar = num3;

	while (lcm == 0)
	{
		a = lar*i;
		if (a % num1 == 0 && a % num2 == 0 && a % num3 == 0)
			lcm = a;
		i++;
	}

	cout << "\nLEAST COMMON MULTIPLE (LCM) of " << num1 << ", " << num2 << " and " << num3 << " =\t " << lcm << endl;

	return 0;
}