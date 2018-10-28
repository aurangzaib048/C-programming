/*Program for finding first two SMALLEST number from 'n' entered numbers*/
#include <iostream>
using namespace std;

int main()
{
	int count, small1, small2, num;
	cout << "How many numbers do u want to enter?\t";
	cin >> count;
	cout << "Enter number?\t";
	cin >> num;
	small1 = num;
	small2 = 2147483647;
	while (count>1)
	{
		cout << "Enter number?\t";
		cin >> num;
		if (num < small1)
		{
			small2 = small1;
			small1 = num;
		}
		else if (num < small2)
			small2 = num;
		count--;
	}
	cout << "\nSMALLEST number is \t" << small1 << endl;
	cout << "2nd SMALLEST number is \t" << small2 << endl;
	return 0;
}
