/* Program for printing the following pattern on screen, Size of the pattern should be taken from the user:
e.g: if user enter "3", the output will be;
		/\      /\      /\
	   /  \	   /  \    /  \
	  /    \  /    \  /    \
	 /      \/      \/      \
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int k = 1, num, size = 4, s, s2;
	cout << "Enter the size for the pattern (Odd number greater than 2)?\t";
	cin >> num;

	while (num < 0)
	{
		cout << "Invalid Input...\nEnter the number of curves for the pattern?\t";
		cin >> num;
	}

	s2 = size;
	s = 2;
	cout << endl;

	for (int i = 1; i <= size; i++)
	{
		k = 1;
		if (i == 1)
		{
			while (k <= num)
			{
				for (int y = 1; y <= 2 * (s2 - 1); y++)
					cout << " ";
				cout << "/\\";
				k++;
			}

		}
		else
		{
			while (k <= num)
			{
				if (k == 1)
					for (int y = 1; y <= 2 * s2 - (i+1); y++)
						cout << " ";
				else
					for (int y = 1; y <= 2 * (s2 - i); y++)
						cout << " ";
				cout << "/";
				for (int y = 1; y <= s; y++)
					cout << " ";
				cout << "\\";
				k++;
			}
			s += 2;
		}
		cout << endl;
	}

	return 0;
}