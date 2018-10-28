/*Program for finding LARGEST number from 'n' entered numbers*/
#include <iostream>
using namespace std;

int main()
{
	int count, large, num;
	cout << "How many numbers do u want to enter?\t";
	cin >> count;
	cout << "Enter number?\t";
	cin >> num;
	large = num;
	while (count>1)
	{
		cout << "Enter number?\t";
		cin >> num;
		if (num > large)
			large = num;
		count--;
	}
	cout << "LARGEST number is \t" << large << endl;
	return 0;
}
