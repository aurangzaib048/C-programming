/*
Program for taking COMPLEMENT of a number (Base 10).
Note:
Complement of a 'n' digit number 'num' with base '10' is;		"(10)^n - 1 - num"

*/

# include <iostream>
# include <cmath>
using namespace std;

int main()
{
	int digits = 0, complement = 0, temp, temp1, num;
	
	//for input
	do
	{
		cout << "Enter Number for complement?\t";
		cin >> num;
		if (num < 0)
			cout << "Invalid Input....\n";
	} while (num < 0);			//bound's input (only +ve)

	temp = num;

	//for calculating No. of Digits
	while (temp != 0)
	{
		temp /= 10;
		digits++;
	}

	//for calculating complement
	complement = pow(10, digits) - (1 + num);

	cout << "Complement of " << num << " = \t" << complement << endl;	//display's complement

	return 0;
}