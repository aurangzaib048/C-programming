/*
Program for DISPLAYING following shape using NESTED LOOP:
e.g: if user enter's "7" the output will be;
						1
					   121
					  12321
					 1234321
 					  12321
					   121
					    1
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int r;

	do
	{
		cout << "Enter size for \"DIAMOND\" (Only +ve ODD Numbers Between 3 & 17)?\t";
		cin >> r;
	} while (r % 2 == 0 || r < 3);

	for (int i = 1; i <= r / 2 + 1; i++)									//for upper triangle
	{
		cout << setw(40 - r / 2);											// (Not necessary) for moving DIAMOND in the centre of console
		int s = 0;
		for (int s = 1; s <= (r / 2 + 1) - i; s++)							//controls the number of spaces
			cout << " ";
		for (int c = 1; c <= 2 * i - 1; c++)								//Controls number of "*"
		{
			
			if (c <= i)
				cout << ++s;
			else
				cout << --s;
		}
		cout << "\n";														//Moves to the next line
	}
	
	for (int i = r / 2; i >= 1; i--)										//for lower triangle
	{
		cout << setw(40 - r / 2);											// (Not necessary) for moving DIAMOND in the centre of console
		int s = 0;
		for (int s = 1; s <= (r / 2 + 1) - i; s++)							//controls the number of spaces
			cout << " ";
		for (int c = 1; c <= 2 * i - 1; c++)								//Controls numbers in rows
		{

			if (c <= i)
				cout << ++s;
			else
				cout << --s;
		}
		cout << "\n";														//Moves to the next line
	}
	
	return 0;
}