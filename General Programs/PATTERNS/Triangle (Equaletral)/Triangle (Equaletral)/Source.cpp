/*
Program for displaying equaletral triangle of size n.
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n,a,c;
	cout << "Enter size for Triangle?\t";
	cin >> n;
	a = n;
	c = 0;
	
	for (int i = 1; i <= n; i++)
	{
		cout << setw(40 - n);
		for (int j = 1; j < a; j++)
				cout << " ";
		for (int j = a; j <= a+c;j++)
				cout << "*";
		a--;
		c+=2;
		cout << endl;
	}
	
	return 0;
}