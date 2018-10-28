/*
Program for printing/displaying Fabonacci Series (0,1,1,2,3,5,8,13,21,34,...) of the specified range:
e.g; if user enters 5 & 50 then the series will be:		5,5,10,15,25,35
*/

#include <iostream>

using namespace std;

int main()
{
	int n1, n2, next = 0, first = 0, second = 1, count = 0;
	cout << "Input starting Number?";
	cin >> n1;
	cout << "Input ending Number?";
	cin >> n2;
	cout << "Fabonacci series from " << n1 << " to " << n2 << " is : \n\n";
	if (n1 != 0)
	{
		first = n1;
		second = n1;
		while (next <= n2)
		{
			if (count <= 1)
				next = n1;
			else
			{
				next = first + second;
				first = second;
				second = next;
			}
			if (next <= n2)
			{
				cout << next;
				if (first + second <= n2)
					cout << ",";
				count++;
			}
		}
	}
	else
	{
		first = 0;
		second = 1;
		while (next <= n2)
		{
			if (count <= 1)
				next = count;
			else
			{
				next = first + second;
				first = second;
				second = next;
			}

			if (next <= n2)
			{
				cout << next;
				if (first + second <= n2)
					cout << ","; 
				count++;
			}
		}
	}
	cout << "\n\nAmount of numbers in Fabonacci series from " << n1 << " to " << n2 << " is \t" << count << endl;
	return 0;
}