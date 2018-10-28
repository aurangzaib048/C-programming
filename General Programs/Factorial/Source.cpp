/*
Program for displaying FACTORIAL of entered number using UD Function.
*/

#include <iostream>
#include <iomanip>

using namespace std;

double fact(int);

int main()
{
	int num;
	char ch;
	
	do
	{
		do
		{
			cout << "Enter non-negative number for Factorial (Less than 171)?\t";
			cin >> num;
			if (num < 0 || num > 170)
				cout << "Invalid Input.....\n";
		} while (num < 0 || num > 170);

		cout << "Do u want output in Scientific Notation? (y\\n)\t";
		cin >> ch;

		if (num != 0)
			if (ch == 'y' || ch == 'Y')
				cout << "Factorail of " << num << " = " << fact(num);
			else
				cout << setprecision(0) << fixed << "Factorail of " << num << " = " << fact(num);
		else
			cout << "Factorail of 0 = 1";

		cout << endl;
		cout << "Do u want to find factorial again? (y/n)\t";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');

	cout << endl;
	return 0;
}

double fact(int n)
{
	double fact = 1;
	for (int i = 1; i <= n; i++)
		fact = fact*i;
	return fact;
}