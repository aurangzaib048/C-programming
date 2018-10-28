/*
Program for Searching array of n entered numbers for a specific number (Linear Search) using function
of return type bool.
Note:
If entered number is present at more than one index then the index of first occurence of entered number
in array will be displayed.
*/

#include<iostream>
using namespace std;

bool LinearSearch(int[], int size, int &, int);

int main()
{
	int size, num[50], key, index;

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

	cout << "Enter number that you want to search?\t";
	cin >> key;

	//For Displaying Result
	if (!LinearSearch(num, size, index, key))
		cout << "\n" << key << " is not present in entered array.";
	else
		cout << "\n" << key << " is present in entered array at [" << index << "] index.";

	cout << endl;
	return 0;
}

//Function for searching entered number in array
bool LinearSearch(int num[], int size, int &index, int key)
{
	//For finding index of entered number if it exists
	for (int i = 0; i < size; i++)
		if (key == num[i])
		{
			index = i;
			return 1;
		}

	return 0;
}