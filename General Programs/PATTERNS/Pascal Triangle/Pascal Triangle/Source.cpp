/*
Program for displaying Pascal's Triangle of specified size using function.
*/

#include <iostream>
#include <iomanip>

using namespace std;

double nCr(int, int);

int main()
{
	int size, s2;
	char ch;

	cout << "Do u want to maintain triangular shape? (y/n)\t";
	cin.get(ch);

	if (ch == 'y' || ch == 'Y')
	{
		do
		{
			cout << "Enter the size of the pattern (less than 14)?\t";
			cin >> size;
			if (size <= 0 || size > 13)
				cout << "Invalid Input......\n";
		} while (size <= 0 || size > 13);

		s2 = 3 * size;

		for (int i = 0; i < size; i++)
		{
			cout << setw(40 - 3*size);

			for (int j = 1; j <= s2 + 1; j++)
				cout << " ";
			for (int k = 0; k <= i; k++)
				cout << setw(6) << left << setprecision(0) << fixed << nCr(i, k);
			s2 -= 3;
			cout << endl;
		}
	}

	else
	{
		do
		{
			cout << "Enter the size of the pattern (only +ve)?\t";
			cin >> size;
			if (size <= 0 || size > 58)
				cout << "Invalid Input......\n";
		} while (size <= 0 || size > 58);

		s2 = size;

		for (int i = 0; i < size; i++)
		{
			cout << setw(40 - size);
			for (int j = 1; j < s2; j++)
				cout << " ";
			for (int k = 0; k <= i; k++)
				cout << setprecision(0) << fixed << nCr(i, k)<< " ";
			s2--;
			cout << "\n\n";
		}
	}

	return 0;
}

double nCr(int n, int r)
{
	double nFac = 1, rFac = 1, dFac = 1, nCr;
	for (int i = 1; i <= n; i++)
		nFac = nFac*i;
	for (int j = 1; j <= r; j++)
		rFac = rFac*j;
	for (int k = 1; k <= (n - r); k++)
		dFac = dFac*k;
	nCr = nFac / (rFac*dFac);
	return nCr;
}