#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int size;

	cout << "Enter the size for the pattern 'F' (Odd Number greater than 4)?\t";
	cin >> size;

	while (size < 5 || size % 2 == 0)
	{
		cout << "Invalid Input...\nEnter the size for the pattern 'F' (Odd Number greater than 4)?\t";
		cin >> size;
	}

	cout << endl;

	for (int i = 1; i <= size; i++)
	{
		cout << setw(40 - size / 2);				// (Not necessary) for moving CROSS in the centre of console
		if (i == 1 || i == size / 2 + 1)
		{
			for (int y = 1; y <= size / 2 + 1; y++)
				cout << "*";
		}
		else
			cout << "*";
		cout << endl;
	}

	return 0;
}