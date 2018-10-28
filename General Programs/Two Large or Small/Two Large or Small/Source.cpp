/*Program for finding first two LARGEST or SMALLEST number from 'n' entered numbers*/
#include <iostream>
using namespace std;

int main()
{
	int count, large1, large2, small1, small2, num;
	cout << "How many numbers do u want to enter?\t";
	cin >> count;
	cout << "Enter number?\t";
	cin >> num;
	small1 = num;
	small2 = num;
	large1 = num;
	large2 = 0;
	while (count>1)
	{
		cout << "Enter number?\t";
		cin >> num;
		if (num > large1)
		{
			large2 = large1;
			large1 = num;
		}
		else if (num > large2)
			large2 = num;
		if (num < small1)
		{
			small2 = small1;
			small1 = num;
		}
		else if (num < small2)
			small2 = num;
		count--;
	}
	cout << "\nLARGEST number is \t" << large1 << endl;
	cout << "2nd LARGEST number is \t" << large2 << endl; 
	cout << "\nSMALLEST number is \t" << small1 << endl;
	cout << "2nd SMALLEST number is \t" << small2 << endl;
	return 0;
}
