/*Program for finding LARGEST and SMALLEST number from 'n' entered numbers*/
#include <iostream>
using namespace std;

int main()
{
	int count, large, small, num;
	cout << "How many numbers do u want to enter?\t";
	cin >> count;
	cout << "Enter number?\t";
	cin >> num;
	large = num;
	small = num;
	while (count>1)
	{
		cout << "Enter number?\t";
		cin >> num;
		if (num > large)
			large = num;
		if (num < small)
			small = num;
		count--;
	}
	cout << "\nLARGEST number is \t" << large << endl;
	cout << "SMALLEST number is \t" << small << endl;
	return 0;
}
