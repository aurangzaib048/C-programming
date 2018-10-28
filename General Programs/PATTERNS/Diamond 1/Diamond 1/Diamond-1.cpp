/*
Program for DISPLAYING following shape using NESTED LOOP:
e.g: if user enter's "7" the output will be;
				 *
				* *
			   * * *
			  *******
			   * * *
				* *
	 			 *
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int c, r, s;

	do
	{
		cout << "Enter size for \"DIAMOND\" (Only +ve ODD Numbers greater than 3)?\t";
		cin >> r;
	} while (r % 2 == 0 || r < 3);

	for (int i = 1; i <= r / 2 + 1; i++)									//for upper triangle										
	{
		cout << setw(40 - r / 2);											// (Not necessary) for moving DIAMOND in the centre of console
		if (i == r / 2 + 1)													//For centre row
		{
			cout << " ";													//displays one space
			for (int i = r; i > 0; i--)										//Controls number of "*" of centre row
				cout << "*";
			cout << endl;													//Moves to the next line
			continue;
		}
		for (s = 1; s <= (r / 2 + 1) - i; s++)								//controls the number of spaces
			cout << " ";
		for (c = 1; c <= i; c++)											//Controls number of "*"
			cout << " *";
		cout << "\n";
	}

	for (int i = r / 2; i >= 1; i--)										//for lower triangle
	{
		cout << setw(40 - r / 2);											// (Not necessary) for moving DIAMOND in the centre of console
		for (s = 1; s <= (r / 2 + 1) - i; s++)								//controls the number of spaces
			cout << " ";
		for (c = 1; c <= i; c++)
			cout << " *";													//Controls number of "*"
		cout << "\n";
	}

	return 0;
}