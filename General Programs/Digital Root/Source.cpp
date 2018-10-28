/*
Program for finding Digital Root of entered +ve integer (using formula).
e.g:
Digital root of 65536 is 7 (6+5+5+3+6=25 => 2+5=7).
*/

#include<iostream>
using namespace std;

int main()
{
	int num, digital_root;
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

		digital_root = num - 9 * (num / 9);		//Calculates digital_root

		cout << "Digital Root of " << num << " = \t" << digital_root;	//Displays result
		cout << endl;

		cout << "Do u want to enter another number?(y,n)\t";		//Displays Message
		cin >> ch;												//Inputs choice
	} while (ch == 'y' || ch == 'Y');

	return 0;
}