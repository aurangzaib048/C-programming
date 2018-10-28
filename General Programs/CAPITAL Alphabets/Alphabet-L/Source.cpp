#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int size;
	cout << "Enter the size for the pattern 'L' (Integer greater than 2)?\t";
	cin >> size;

	while (size < 3)
	{
		cout << "Invalid Input...\nEnter the size for the pattern 'L' (Integer greater than 2)?\t";
		cin >> size;
	}

	cout << endl;

	for (int i = 1; i <= size; i++)
	{
		cout << setw(40 - size / 2);				// (Not necessary) for moving CROSS in the centre of console
		if (i == size)
		{
			for (int y = 1; y <= size*90.0 / 100; y++)
				cout << "*";
		}
		else
			cout << "*";
		cout << endl;
	}

	return 0;
}