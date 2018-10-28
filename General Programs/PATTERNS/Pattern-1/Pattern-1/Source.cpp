/*
Program for DISPLAYING following pattern:
e.g: if user enter's "7" the output will be;
										*************
										****** ******
										*****   *****
										****     ****
										***       ***
										**         **
										*           *
*/

# include <iostream>
# include <iomanip>
using namespace std;

int main()
{
	int size;
	char ch;

	do
	{
		system("cls");

		do							    // it will take only odd number as input
		{
			cout << "Enter the size for the PATTERN (+ve Numbers > 2)?\t";
			cin >> size;
			if (size < 3)
				cout << "Invalid Input.....\n";
		} while (size < 3);

		int spaces = 1;						 // for controlling spaces
		int asteric = size - 1;

		for (int i = 1; i <= size; i++)					 // will controll num of rows
		{
			cout << setw(40 - size);					// (Not necessary) for moving CROSS in the centre of console

			if (i == 1)
				for (int j = 1; j <= 2 * size - 1; j++)		// prints 1st row
					cout << "*";

			else										//for printing remaining rows
			{
				for (int j = 1; j <= asteric; j++)			//OR for (int j = 1; j <= size-i+1; j++)	
					cout << "*";
				for (int j = 1; j <= spaces; j++)
					cout << " ";
				for (int j = 1; j <= asteric; j++)			//OR for (int j = 1; j <= size-i+1; j++)
					cout << "*";
				spaces += 2;
				asteric--;
			}

			cout << endl;				              // jump on next line

		}
		cout << "Do u want to run Again?(y/n)\t";
		cin >> ch;
	} while (ch == 'Y' || ch=='y');

	return 0;
}