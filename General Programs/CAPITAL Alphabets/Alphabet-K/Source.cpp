#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int size, s2;
	cout << "Enter the size for the pattern 'L' (Integer greater than 2)?\t";
	cin >> size;

	while (size < 3)
	{
		cout << "Invalid Input...\nEnter the size for the pattern 'L' (Integer greater than 2)?\t";
		cin >> size;
	}

	s2 = size / 2;
	cout << endl;

	for (int i = 1; i <= size; i++)
	{
		cout << setw(40 - size / 3);			// (Not necessary) for moving CROSS in the centre of console
		cout << "*";
		for (int y = 1; y <= s2; y++)
			cout << " ";
		cout << "*";
		cout << endl;
		if (i <= size / 2)
			s2--;
		else
			s2++;
	}

	return 0;
}