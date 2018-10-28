/*
Program for sorting n entered numbers in ASCENDING Order.
*/

#include<iostream>
using namespace std;

void swap(int &, int &);
void MinIndex(int[], int, int &);

int main()
{
	int n, num[50], temp;

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

	//For sorting in Ascending Order
	for (int i = 0; i<n; i++)
	{
		MinIndex(num, n, temp);
		if (temp != i)						//OR	 (num[temp]<num[i])
			swap(num[temp], num[i]);
	}

	//For Displaying Result
	cout << "\nEntered Numbers in ASCENDING Order are:\n\t";
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

//Function for calculating Index of Minimum number
void MinIndex(int num[], int n, int &temp)
{
	static int a = 0;
	int min = num[a];
	temp = a;

	//For finding index
	for (int i = a + 1; i < n; i++)
		if (min > num[i])
		{
			min = num[i];
			temp = i;
		}
	a++;
}