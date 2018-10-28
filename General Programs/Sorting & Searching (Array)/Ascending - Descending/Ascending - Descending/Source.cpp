/*
Program for sorting n entered numbers in ASCENDING or DESCENDING Order.
*/

#include<iostream>
using namespace std;

void swap(int &, int &);

int main()
{
	//Input statements
	int n, num[50], order;
	char ch;

	//For repeating program until user presses 'n' or 'N'
	do
	{
		system("cls");			//For clearing console

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

		//For getting order of sorting
		cout << "Enter Order of sorting:\n1 = Ascending Order\n2 = Descending Order";
		do
		{
			cout << "\nOrder?\t";
			cin >> order;
			if (order != 1 && order != 2)
				cout << "Invalid Input.......\nEnter Order again\n";
		} while (order != 1 && order != 2);

		//For Sorting numbers according to entered Order
		if (order == 1)			
		{
			for (int i = 0; i < n; i++)						//For Ascending Order
			{
				for (int j = i + 1; j < n; j++)
				{
					if (num[i] > num[j])
						swap(num[i], num[j]);
				}
			}

			cout << "Entered Numbers in ASCENDING Order are:\n\t";
		}
		else
		{
			for (int i = 0; i < n; i++)						//For Descending Order
			{
				for (int j = i + 1; j < n; j++)
				{
					if (num[i] < num[j])
						swap(num[i], num[j]);
				}
			}

			cout << "Entered Numbers in DESCENDING Order are:\n\t";
		}

		//For Displaying Sorted Numbers
		for (int i = 0; i < n; i++)
		{
			cout << num[i];
			if (i != n - 1)
				cout << ", ";
		}

		cout << endl;

		//For inputting User's choice
		cout << "Do u want to run again? (y,n)\t";
		cin >> ch;
	} while (ch == 'Y' || ch == 'y');

	return 0;
}

//For swapping 2 numbers
void swap(int &a, int &b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}