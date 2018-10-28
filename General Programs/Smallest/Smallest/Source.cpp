/*Program for finding SMALLEST number from 'n' entered numbers*/
#include <iostream>
using namespace std;

int main()
{
	int count, small, num;
	cout << "How many numbers do u want to enter?\t";
	cin >> count;
	cout << "Enter number?\t";
	cin >> num;
	small = num;
	while (count>1)
	{
		cout << "Enter number?\t";
		cin >> num;
		if (num < small)
			small = num;
		count--;
	}
	cout << "/nSMALLEST number is \t" << small << endl;
	return 0;
}
