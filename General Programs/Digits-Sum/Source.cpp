/*Program for calculating  "Sum of Digits" and "Number of Digits" of the Entered number*/

#include<iostream>
using namespace std;

int main()
{
	int n, a, sum = 0, count = 0;
	cout << "Enter Number?\t";
	cin >> n;
	while (n != 0)
	{
		a = n % 10;
		sum = sum + a;
		n = n / 10;
		count++;
	}
	cout << "\nNumber of Digits = " << count << endl;
	cout << "Sum of Digits = " << sum << endl;
	return 0;
}