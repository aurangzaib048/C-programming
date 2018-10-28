/*
Program for calculing whether the entered number is perfect or not(Perfect numbers are those
numbers which are equal to the sum of its positive divisors except the number itself)
e.g: 6,28,496 etc
*/

#include <iostream>
using namespace std;

int main()
{
	int n, i = 1, sum = 0;
	cout << "Input Number?\t";
	cin >> n;
	while (i<n)
	{
		if (n%i == 0)
			sum = sum + i;
		i++;
	}
	if (sum == n)
		cout << "\n" << n << " is a perfect number\n";
	else
		cout << "\n" << n << " is not a perfect number\n";
	return 0;
}