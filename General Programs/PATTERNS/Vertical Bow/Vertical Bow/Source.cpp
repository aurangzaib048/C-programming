/*
Program for DISPLAYING following shape using NESTED LOOP:
e.g: if user enter's "7" the output will be;
								*******
								 *****
								  ***
								   *
								  ***
								 *****
								*******
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int c, r, s;
	do
	{
		cout << "Enter size for PATTERN (Only +ve ODD Numbers greater than 2)?\t";
		cin >> r;
	} while (r % 2 == 0 || r < 3);

	for (int i = r / 2 + 1; i >= 1; i--)									//for upper triangle
	{
		cout << setw(40 - r / 2);											// (Not necessary) for moving DIAMOND in the centre of console
		for (s = 1; s <= (r / 2 + 1) - i; s++)								//controls the number of spaces
			cout << " ";
		for (c = 1; c <= 2 * i - 1; c++)									//Controls number of "*"
			cout << "*";
		cout << "\n";														//Moves to the next line
	}

	for (int i = 2; i <= r / 2 + 1; i++)									//for lower triangle
	{
		cout << setw(40 - r / 2);											// (Not necessary) for moving DIAMOND in the centre of console
		for (s = 1; s <= (r / 2 + 1) - i; s++)								//controls the number of spaces
			cout << " ";
		for (c = 1; c <= 2 * i - 1; c++)									//Controls number of "*"
			cout << "*";
		cout << "\n";														//Moves to the next line
	}

	return 0;
}