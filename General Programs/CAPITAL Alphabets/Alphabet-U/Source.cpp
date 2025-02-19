#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int size, s2;
	cout << "Enter the size for the pattern 'U' (Odd Number greater than 2)?\t";
	cin >> size;

	while (size < 3)
	{
		cout << "Invalid Input...\nEnter the size for the pattern 'U' (Odd Number greater than 4)?\t";
		cin >> size;
	}

	s2 = size * 80.0/100;
	cout << endl;

	for (int i = 1; i <= size; i++)
	{
		cout << setw(40 - size/2);				// (Not necessary) for moving CROSS in the centre of console
		if (i == size)
		{
			cout << " ";
			for (int y = 1; y <= s2; y++)
				cout << "*";
			cout << " *";
		}
		else
		{
			cout << "*";
			for (int y = 1; y <= s2; y++)
				cout << " ";
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}