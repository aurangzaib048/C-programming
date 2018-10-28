#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int size;
	cout << "Enter the size for the pattern 'I' (Odd Number greater than 2)?\t";
	cin >> size;

	while (size < 3 )
	{
		cout << "Invalid Input...\nEnter the size for the pattern 'I' (Odd Number greater than 2)?\t";
		cin >> size;
	}

	cout << endl;

	for (int i = 1; i <= size; i++)
	{
		cout << setw(40 - size / 2);				// (Not necessary) for moving CROSS in the centre of console
		if (i == 1 || i==size)
		{
			for (int y = 1; y <= size; y++)
				cout << "*";
		}
		else
		{
			for (int y = 1; y <= size / 2; y++)
				cout << " ";
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}