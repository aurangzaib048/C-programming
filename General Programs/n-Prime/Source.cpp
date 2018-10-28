/*Program for displaying First "n" PRIME numbers*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int i, j=2, n, count = 0;
	bool a = 0;
	
	cout << "How many Prime numbers do u want to display?\t";
	cin >> n;
	cout << "First \"" << n << "\" Prime numbers are:\n";
	
	while (count < n)
	{
		for (i = 2; i <= j/2; i++)
		{
			if (j % i == 0)
			{
				a = 1;
				break;
			}
		}
		if (a != 1 || j == 2)
		{
			count++;
			if (count == 1)
				cout << setw(5) << count << "st Prime Number = " << j << "\n";
			else if (count == 2)
				cout << setw(5) << count << "nd Prime Number = " << j << "\n";
			else if (count == 3)
				cout << setw(5) << count << "rd Prime Number = " << j << "\n";
			else
				cout << setw(5) << count << "th Prime Number = " << j << "\n";
		}
		a = 0;
		j++;
	}

		return 0;
}