/*
Program for coverting "Binary number into Decimal".
*/

#include <iostream>
using namespace std;

int main()
{
	long long num, temp, rem, i = 0, decimal = 0, temp1;
	bool flag;

	do
	{
		flag = 0;
		cout << "Enter the binary to be converted?\t";
		cin >> num;
		temp1 = num;
		while (temp1 != 0)
		{
			if (temp1 % 10 > 1)
				flag = 1;
			temp1 /= 10;
		}
		if (flag)
			cout << "Invalid Input....\n";
	} while (flag);

	temp = num;

	while (num > 0)
	{
		rem = num % 10;
		decimal = decimal + (rem*  pow(2, i));
		i++;
		num /= 10;
	}

	cout << "Binary number \"" << temp << "\" in Decimal " << " = " << decimal << endl;
	return 0;
}
