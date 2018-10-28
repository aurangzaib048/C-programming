/*
Program for Searching array of n entered numbers for a specific number (Sorted [Ascending] Array Search) using function
of return type void.
*/

#include<iostream>
using namespace std;

void SortedSearch(int[], int, int);
void AscendingOrder(int[], int);
void swap(int &, int &);

int main()
{
	int size, num[50], key;

	//For Inputting amount of numbers
	do
	{
		cout << "How many numbers u want to sort (Max 50)?\t";
		cin >> size;
		if (size < 0 || size > 50)
			cout << "Invalid Input.......\nEnter number again\n";
	} while (size < 0 || size > 50);

	//For inputting n Numbers
	for (int i = 0; i < size; i++)
	{
		cout << "Enetr number at [" << i << "] index?\t";
		cin >> num[i];
	}

	//for formatting output
	for (int i = 0; i < 80; i++)
		cout << "=";

	AscendingOrder(num, size);		//For sorting Array in Ascending order

	//displays sorted array
	cout << "Entered Numbers in ASCENDING Order are:\n\t";
	for (int i = 0; i < size; i++)
	{
		cout << num[i];
		if (i != size - 1)
			cout << ", ";
	}

	//for formatting output
	cout << endl;
	for (int i = 0; i < 80; i++)
		cout << "=";

	//for inputting key-value
	cout << "Enter number that you want to search?\t";
	cin >> key;

	//For Displaying Result
	SortedSearch(num, size, key);

	cout << endl;
	return 0;
}

//For Sorting array in ascending Order
void AscendingOrder(int num[], int n)
{
	//For sorting in Ascending Order
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j<n; j++)
		{
			if (num[i] > num[j])
				swap(num[i], num[j]);
		}
	}

}


//For swapping 2 numbers
void swap(int &a, int &b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}

//Function for searching and displaying entered number in array
void SortedSearch(int num[], int size, int key)
{
	int first = 0, last = size - 1, mid, temp;
	bool flag = 1;

	//For finding index of 1st occurence entered number if it exists
	while (first <= last)
	{
		mid = (first + last) / 2;
		if (num[mid] == key)
		{
			flag = 0;
			temp = mid;
			break;
		}
		else if (num[mid] < key)
			first = mid + 1;
		else if (num[mid] > key)
			last = mid - 1;
	}


	if (flag)
		cout << "\n" << key << " is not present in entered array.";
	else					//for displaying all index(es) of all occurences of entered number
	{
		for (int i = temp; num[i] == key; i--)
			cout << "\n" << key << " is present in entered array at [" << i << "] index.";
	}

}