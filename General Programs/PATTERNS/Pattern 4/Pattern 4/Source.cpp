/*
Program for DISPLAYING following shape using NESTED LOOP:
e.g: if user enter's "4" the output will be;
1
12
123
1234
123
12
1
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int num;

	do
	{
		cout << "Enter maximum number for \"PATTERN\" (Only +ve Numbers less than 45)?\t";
		cin >> num;
	} while (num < 1 || num > 44);

	for (int i = 1; i <= num ; i++)								//for upper triangle
	{
		for (int j = 1; j <= i; j++)							//controls the number
			cout << j;
		cout << "\n";											//Moves to the next line
	}

	for (int i = num-1; i >= 1; i--)								//for lower triangle
	{
		for (int j = 1; j <= i; j++)							//controls the number
			cout << j;
		cout << "\n";											//Moves to the next line
	}

	return 0;
}