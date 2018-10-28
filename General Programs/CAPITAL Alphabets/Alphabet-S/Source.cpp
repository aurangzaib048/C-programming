#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int size, s2;
	cout << "Enter the size for the pattern 'S' (Odd Number greater than 2)?\t";
	cin >> size;

	while (size < 3 || size % 2 == 0)
	{
		cout << "Invalid Input...\nEnter the size for the pattern 'S' (Odd Number greater than 4)?\t";
		cin >> size;
	}

	s2 = size/2;
	cout << endl;

	for (int i = 1; i <= size; i++)
	{
		cout << setw(40 - s2);				// (Not necessary) for moving CROSS in the centre of console
		if (i == 1 || i == size || i == s2 + 1)
		{
			cout << " ";
			for (int y = 1; y <= s2; y++)
				cout << "*";
		}
		else if (i<=s2)
		{
			cout << "*";
			if (i == 2)
			{
				for (int y = 1; y < s2 + 1; y++)
					cout << " ";
				cout << "*";
			}
		}
		else
		{
			for (int y = 1; y <= s2 + 1; y++)
				cout << " ";
			cout << "*";
			if (i == size-1)
			{
				cout << "\r" << setw(40 - s2)<< "*";
			}
		}
		cout << endl;
	}

	return 0;
}