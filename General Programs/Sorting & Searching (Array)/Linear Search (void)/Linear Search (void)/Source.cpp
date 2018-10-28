/*
Program for Searching array of n entered numbers for a specific number (Linear Search) using function
of return type bool.
*/

#include<iostream>
using namespace std;

void LinearSearch(int[], int size, int);

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

	cout << "Enter number that you want to search?\t";
	cin >> key;

	//For Displaying Result
	LinearSearch(num, size, key);

	cout << endl;
	return 0;
}

//Function for searching and displaying entered number and it's index in array
void LinearSearch(int num[], int size, int key)
{
	bool flag = 1;
	//For finding and displaying all index(es) of entered number if it exists
	for (int i = 0; i < size; i++)
		if (key == num[i])
		{
			cout << "\n" << key << " is present in entered array at [" << i << "] index.";
			flag = 0;
		}

	if (flag)
		cout << "\n" << key << " is not present in entered array.";
}