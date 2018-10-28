/*Program for displaying digits of Entered number with spaces*/

#include <iostream>
#include <iomanip>
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
		n = n / 10;										//or n/=10;
	}
	while (reverse != 0)
	{
		cout << setw(3) << reverse % 10;
		reverse = reverse / 10;                        //or reverse/=10;
	}
	cout << endl;
	return 0;
}