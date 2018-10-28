/* Program for printing the following pattern on screen, Size of the pattern should be taken from the user:
e.g: if user enter "3", the output will be;
			*	*	*
			 * * * *
			  *   *
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int size;
	cout << "Enter the size for the pattern 'W' (Integer greater than 2)?\t";
	cin >> size;

	while (size < 3)
	{
		cout << "Invalid Input...\nEnter the size for the pattern 'W' (Integer greater than 4)?\t";
		cin >> size;
	}

	cout << endl;

	for (int i = 1; i <= size; i++)
	{
		cout << setw(40 - 2 * size);				// (Not necessary) for moving CROSS in the centre of console
		if (i == 1)
		{
			cout << "*";
			for (int y = 1; y <= 2 * size - 3; y++)
				cout << " ";
			cout << "*";
			for (int y = 1; y <= 2 * size - 3; y++)
				cout << " ";
			cout << "*";
		}
		else if (i == size)
		{
			for (int y = 1; y <= size - 1; y++)
				cout << " ";
			cout << "*";
			for (int y = 1; y <= 2 * size - 3; y++)
				cout << " ";
			cout << "*";
		}
		else
		{
			for (int y = 1; y < i; y++)
				cout << " ";
			cout << "*";
			for (int y = 1; y <= 2 * (size - i) - 1; y++)
				cout << " ";
			cout << "*";
			for (int y = 1; y < (2 * i) - 2; y++)
				cout << " ";
			cout << "*";
			for (int y = 1; y <= 2 * (size - i) - 1; y++)
				cout << " ";
			cout << "*";
		}
		cout << endl;
	}


	return 0;
}