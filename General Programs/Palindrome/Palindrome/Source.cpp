/*Program for checking and displaying whether the Entered Number is "Palindrome" or NOT.
Number whose reverse is equal to itself is called Palindrome number.
e.g: 55,101 etc
*/

#include <iostream>
using namespace std;

int main()
{
	int n, a, reverse = 0, rem;
	cout << "Enter Number?\t";
	cin >> n;
	a = n;
	while (a != 0)
	{
		rem = a % 10;
		reverse = reverse * 10 + rem;
		a = a / 10;						//or a/=10;
	}
	if (reverse == n)
		cout << "The entered number is Palindrome\n";
	else
		cout << "The entered number is not Palindrome\n";
	return 0;
}