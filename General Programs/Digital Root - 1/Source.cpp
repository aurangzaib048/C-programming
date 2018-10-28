/*
Program for finding Digital Root of entered +ve integer.
e.g:
Digital root of 65536 is 7 (6+5+5+3+6=25 => 2+5=7).
*/

#include<iostream>
using namespace std;

int main()
{
	int num, digital_root = 0, sum = 0, temp;
	char ch;

	do
	{
		//For Input
		do
		{
			cout << "Enter +ve Integer?\t";
			cin >> num;
			if (num < 0)
				cout << "Invalid Input......\nEnter Number again\n";
		} while (num < 0);		//Bound's Input

		temp = num;

		while (temp != 0)		//Calculates sum of digits of entered number
		{
			sum += temp % 10;
			temp /= 10;
		}

		while (sum != 0)		//Calculates digital_root by calculating sum of digits of "sum"
		{
			digital_root += sum % 10;
			sum /= 10;
		}

		cout << "Digital Root of " << num << " = \t" << digital_root;		//Displays Result
		cout << endl;

		cout << "Do u want to enter another number?(y,n)\t";		//Displays Message
		cin >> ch;												//Inputs choice
	} while (ch == 'y' || ch == 'Y');

	return 0;
}