
/*
Program for Arithematic Calculator of more than 2 numbers.
*/

#include<iostream>
using namespace std;

int main()
{
	//variable declaration
	float num[10], sum = 0, sub, mul = 1;
	int n;
	char op;

	//for inputting Operator
	cout << "Choose Operator:\t'+', '-', '*', '/' or '%'\n";
	cin >> op;

	//For getting numbers
	if (op != '/' && op != '%')			//for '+', '-' & '*'
	{
		do
		{
			cout << "How many numbers u want to Enter (max 10)?\t";
			cin >> n;
			if (n < 0 || n>10)
				cout << "Invalid Input.......\n";
		} while (n < 0 || n>10);

		for (int i = 0; i < n; i++)
		{
			cout << "Enter number-" << i + 1 << "?\t";
			cin >> num[i];
		}
	}
	else							//for '/' & '%'
	{
		cout << "Enter 1st number?\t";
		cin >> num[0];
		cout << "Enter 2st number?\t";
		cin >> num[1];
	}	

	for (int i = 1; i <= 80; i++)		//for formatting output
		cout << "*";

	//for performing calculations according to selected operator
	switch (op)
	{
		case '+':
			for (int i = 0; i < n; i++)
				sum += num[i];
			cout << "\nSum of entered numbers = \t" << sum;
			break;
		case '-':
			sub = num[0];
			for (int i = 1; i < n; i++)
				sub -= num[i];
			cout << "\nDifference of entered numbers = \t" << sub;
			break;
		case '*':
			for (int i = 0; i < n; i++)
				mul *= num[i];
			cout << "Product of entered numbers = \t" << mul;
			break;
		case '/':
			cout << "\nDivision of " << num[0] << " & " << num[1] << " = \t" << num[0] / num[1];
			break;
		case '%':
			cout << "\nModulus of " << num[0] << " & " << num[1] << " = \t";
			cout << static_cast<int>(num[0]) % static_cast<int>(num[1]);
			break;
	}

	cout << endl;
	return 0;
}