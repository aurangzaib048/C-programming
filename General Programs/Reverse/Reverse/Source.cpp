/*Program for displaying a Entered number in "Reverse" order*/

#include <iostream>
using namespace std;

int main()
{
	int n, reverse = 0, rem;
	cout << "Enter Number?\t";
	cin >> n;
	while (n != 0)
	{
		rem = n % 10;
		reverse = reverse * 10 + rem;
		n = n / 10;                        //or n/=10;
	}
	cout << "The entered number in Reverse order is \t" << reverse << "\n";
	return 0;
}