/* Program for printing the following pattern on screen, Size of the pattern should be taken from the user:
e.g: if user enter "7", the output will be;
					*
				   * *
				  *   *
				 *******	   
				*       *
			   *         *
			  *			  *
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int size, s, s2;
	cout << "Enter the size for the pattern (Odd number greater than 2)?\t";
	cin >> size;

	while (size < 3 || size % 2 == 0)
	{
		cout << "Invalid Input...\nEnter the size for the pattern (Odd number greater than 4)?\t";
		cin >> size;
	}

	s2 = size;
	s = 1;
	cout << endl;

	for (int i = 1; i <= size; i++)
	{
		cout << setw(40 - size);				// (Not necessary) for moving CROSS in the centre of console
		for (int y = 1; y <= s2 ; y++)
			cout << " ";
		s2--;

		if (i == size / 2 + 1)
		{
			for (int y = 1; y <= size; y++)
				cout << "*";
			cout << endl;
			s += 2;
			continue;
		}

		cout << "*";

		if (i > 1)
		{
			for (int j = 1; j <= s; j++)
				cout << " ";
			cout << "*";
			s += 2;
		}
		cout << endl;
	}

	return 0;
}