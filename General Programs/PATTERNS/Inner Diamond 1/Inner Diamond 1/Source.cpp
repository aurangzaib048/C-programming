/*
Program for displaying following PATTERN;
e.g: if user enter's "7" the output will be;

							*********
							**** ****
							***   ***
							**     **
							*       *
							**     **
							***   ***
							**** ****
							*********


*/

# include <iostream>
# include <iomanip>
using namespace std;

int main()
{
	int size, spaces = 1, s2, asteric;
	char ch;

	do
	{
		system("cls");

		do						    // it will take only odd number as input
		{
			cout << "Enter the size for the PATTERN [Diamond] (Odd Numbers > 4)?\t";		//size does not includes 1st and last row
			cin >> size;
			if (size < 5 || size % 2 == 0)
				cout << "Invalid Input.....\n";
		} while (size < 5 || size % 2 == 0);

		s2 = size / 2;
		asteric = s2 + 1;

		for (int i = 1; i <= size + 2; i++)
		{
			cout << setw(41 - s2);		// (Not necessary) for moving CROSS in the centre of console

			if (i == 1 || i == size + 2)
				for (int j = 1; j <= size + 2; j++)		// prints 1st & Last row
					cout << "*";

			else if (i == s2 + 2)						//for printing Middle row
			{
				cout << "*";
				for (int j = 1; j <= size; j++)
					cout << " ";
				cout << "*";
			}

			else if (i <= s2 + 1)						//for printing upper portion
			{
				for (int j = 1; j <= asteric; j++)
					cout << "*";
				for (int j = 1; j <= spaces; j++)
					cout << " ";
				for (int j = 1; j <= asteric; j++)
					cout << "*";
				spaces += 2;
				asteric--;
			}

			else										//for printing lower portion
			{
				asteric++;
				spaces -= 2;
				for (int j = 1; j <= asteric; j++)
					cout << "*";
				for (int j = 1; j <= spaces; j++)
					cout << " ";
				for (int j = 1; j <= asteric; j++)
					cout << "*";
			}
			cout << endl;                              // jump on next line
		}

		cout << "Do u want to run Again?(y/n)\t";
		cin >> ch;
	} while (ch == 'Y' || ch == 'y');

	return 0;
}