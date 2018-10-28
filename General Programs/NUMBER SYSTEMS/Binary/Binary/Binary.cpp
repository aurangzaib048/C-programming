/*
Program for coverting "Decimal number into Binary".
*/

#include <iostream>
using namespace std;

int main()
{
	long long num, temp, rem, i = 1, binary = 0;
	cout << "Enter the decimal to be converted?\t";
	cin >> num;
	temp = num;

	//for calculating binary
	do
	{
		rem = num % 2;
		binary = binary + (i*rem);
		num = num / 2;
		i = i * 10;
	} while (num>0);

	cout << "Binary of " << temp << " is:\n" << binary << endl;
	return 0;
}