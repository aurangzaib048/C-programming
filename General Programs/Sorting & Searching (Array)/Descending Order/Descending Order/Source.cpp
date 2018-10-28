/*
Program for sorting n entered numbers in DESCENDING Order.
*/

#include<iostream>
using namespace std;

void swap(int &, int &);

int main()
{
	int n, num[50];

	//For Inputting amount of numbers
	do
	{
		cout << "How many numbers u want to sort (Max 50)?\t";
		cin >> n;
		if (n < 0 || n>50)
			cout << "Invalid Input.......\nEnter number again\n";
	} while (n < 0 || n>50);

	//For inputting n Numbers
	for (int i = 0; i < n; i++)
	{
		cout << "Enetr number at [" << i << "] index?\t";
		cin >> num[i];
	}

	//For sorting in Descending Order
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j<n; j++)
		{
			if (num[i] < num[j])
				swap(num[i], num[j]);
		}
	}

	//For Displaying Result
	cout << "Entered Numbers in DESCENDING Order are:\n\t";

	for (int i = 0; i < n; i++)
	{
		cout << num[i];
		if (i != n - 1)
			cout << ", ";
	}

	cout << endl;
	return 0;
}

//For swapping 2 numbers
void swap(int &a, int &b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}