/*
Program for DISPLAYING following shape (DIAMOND) using NESTED LOOP:
e.g: if user enter's "7" the output will be;
				*
			   * *
			  *   *
		     *     *
			  *   *
			   * *
				*
*/

# include <iostream>
# include <iomanip>
using namespace std;

int main()
{
	int size;

	do												    // it will take only odd number as input
	{
		cout << "Enter the height for diamond (Only ODD Numbers>3)?\t";
		cin >> size;
	} while (size % 2 == 0 || size < 5);

	int spaces = size / 2;								 // will half of number for spaces
	int spaces_i = -1;

	for (int i = 1; i <= size; i++)						 // will controll num of rows
	{
		cout << setw(40 - size / 2);					// (Not necessary) for moving CROSS in the centre of console

		for (int j = 1; j <= spaces; j++)				// will print spaces before assterix
			cout << " ";

		cout << "*";

		for (int k = 1; k <= spaces_i; k++)			    // will print assteix
			cout << " ";

		if (i != 1 && i != size)
			cout << "*";

		cout << endl;                                  // jump on next line

		if (i <= size / 2)                              // it will work for upper part of iamond
		{
			spaces_i += 2;
			spaces--;
		}
		else                                          // it will work for lower part of diamond
		{
			spaces_i -= 2;
			spaces++;
		}
	}

	return 0;

}