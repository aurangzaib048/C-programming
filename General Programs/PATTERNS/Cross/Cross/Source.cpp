/* Program for printing the following pattern (cross) on screen, Size of the pattern should be taken from the user:
e.g: if user enter "7", the output will be;
					*     *
					 *   *
					  * *
					   *
					  * *
					 *   *
					*	  *
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int size, r, c, i, j = 2, a2;
	cout << "Enter the size for the pattern (Odd number greater than 4)?\t";
	cin >> size;
	
	while (size < 5 || size % 2 == 0)
	{
		cout << "Invalid Input...\nEnter the size for the pattern (Odd number greater than 4)?\t";
		cin >> size;
	}

	a2 = size / 2;

	for (r = 1; r <= a2; r++)
	{
		cout << setw(40 - a2);											// (Not necessary) for moving CROSS in the centre of console
		for (c = 1; c < r; c++)
			cout << " ";
		cout << "*";
		for (c = 1; c <= size - j; c++)
			cout << " ";
		cout << "*\n";
		j += 2;
	}

	j = size - 1;

	for (r = a2; r >= 0; r--)
	{
		cout << setw(40 - a2);											// (Not necessary) for moving CROSS in the centre of console
		for (c = 0; c < r; c++)
			cout << " ";
		cout << "*";
		if (r == a2)
		{
			cout << "\n";
			continue;
		}
		for (c = 1; c <= size - j; c++)
			cout << " ";
		cout << "*\n";
		j -= 2;
	}

	return 0;
}