/*Program for finding first two LARGEST number from 'n' entered numbers*/
#include <iostream>
using namespace std;

int main()
{
	int count, large1, large2, num;
	cout << "How many numbers do u want to enter?\t";
	cin >> count;
	cout << "Enter number?\t";
	cin >> num;
	large1 = num;
	large2 = 0;
		
	while (count > 1)
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
		count--;
	}	
	
	cout << "\n1st LARGEST number is \t" << large1 << endl;
	cout << "2nd LARGEST number is \t" << large2 << endl;
	return 0;
}
