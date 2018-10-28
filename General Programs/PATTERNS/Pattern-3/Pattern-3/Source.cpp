/*
Program for DISPLAYING following shape :
e.g: if user enter's "7" the output will be;
			1     1
			33   33
			555 555
			7777777
			555 555
			33   33
			1     1
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int size, n = 1, j = 1;
	do
	{
		cout << "Enter size for PATTERN (Only +ve ODD Numbers between 1 & 10)?\t";
		cin >> size;
	} while (size % 2 == 0 || size < 3);

	for (int i = 1; i <= size ; i++)									//for upper triangle
	{
		cout << setw(40 - size / 2);											// (Not necessary) for moving DIAMOND in the centre of console
		
		if (i <= size / 2)
		{
			for (int c = 1; c <= i; c++)
				cout << n;
			for (int s = 1; s <= size - 2 * i; s++)								//controls the number of spaces
				cout << " ";
			for (int c = 1; c <= i; c++)
				cout << n;
			n += 2;
		}
		
		else if (i==size/2+1)
			for (int c = 1; c <= size; c++)
				cout << n;
		
		else
		{
			n -= 2;
			for (int c = 1; c <= size-i+1; c++)
				cout << n;
			
			for (int s = 1; s <= j; s++)								//controls the number of spaces
				cout << " ";
			j += 2;
			for (int c = 1; c <= size-i+1; c++)
				cout << n;
		}
		
		cout << "\n";														//Moves to the next line
	}

	return 0;
}