/*Program for Getting input of (a) array elements and display MAXIMUM and MINIMUM integer*/
#include <iostream>
using namespace std;

int main()
{
	int n[50], a, i, max = 0, min = 0;
	cout << "How many numbers do u want to enter (less than 50)?";
	cin >> a;
	for (i = 0; i < a; i++)
	{
		cout << "Enter array element [" <<i << "]?\n";
		cin >> n[i];
	}
	max = n[0];
	min = n[0];
	for (i = 1; i < a; i++)
	{
		if ( max < n[i] )
			max = n[i];
		if ( min > n[i] )
			min = n[i];
	}
	cout << "MAXIMUM value of array is \t" << max << endl;
	cout << "MINIMUM value of array is \t" << min << endl;
	return 0;
}
