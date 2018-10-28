#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int size, s2;

	cout << "Enter the size for the pattern 'B' (+ve Integer greater than 6)?\t";
	cin >> size;

	while (size < 7 || size % 2 == 0)
	{
		cout << "Invalid Input...\nEnter the size for the pattern 'B' (Odd number greater than 6)?\t";
		cin >> size;
	}

	s2 = size / 2;
	cout << endl;

	for (int i = 1; i <= size; i++)
	{
		cout << setw(40 - 22);				// (Not necessary) for moving CROSS in the centre of console
		if (i == 1)
		{
			for (int y = 1; y <= s2 - 1; y++)
				cout << "*";
		}
		else if (i == s2 + 1 || i == size)
		{
			for (int y = 1; y <= s2; y++)
				cout << "*";
		}
		else if (i <= s2)
		{
			cout << "*";
			for (int y = 1; y <= s2 - 2; y++)
				cout << " ";
			cout << "*";
		}
		else
		{
			cout << "*";
			for (int y = 1; y <= s2 - 1; y++)
				cout << " ";
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}