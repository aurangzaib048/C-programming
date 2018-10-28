#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int size, s2;

	cout << "Enter the size for the pattern 'J' (Integer greater than 5)?\t";
	cin >> size;

	while (size < 6)
	{
		cout << "Invalid Input...\nEnter the size for the pattern 'J' (Integer greater than 5)?\t";
		cin >> size;
	}

	s2 = size * 80.0 / 100;
	cout << endl;

	for (int i = 1; i <= size; i++)
	{
		cout << setw(40 - size / 3);				// (Not necessary) for moving CROSS in the centre of console
		if (i == 1)
		{
			for (int y = 1; y <= size/2; y++)
				cout << " ";
			for (int y = 1; y <= s2-1; y++)
				cout << "*";
		}
		else if (i < s2)
		{
			for (int y = 1; y <= s2; y++)
				cout << " ";
			cout << "*";
		}
		else if (i == size)
		{
			cout << " ";
			for (int y = 1; y <= s2 -1; y++)
				cout << "*";
		}
		else
		{
			cout << "*";
			for (int y = 1; y <= s2-1; y++)
				cout << " ";
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}