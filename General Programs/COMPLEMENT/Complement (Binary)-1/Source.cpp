//Program for taking complement of a binary number (of specified bits).

# include <iostream>
using namespace std;

int main()
{
	int rem, bits;
	long long num, reverse = 0, temp, i = 1, temp1;
	bool first = false, flag;

	cout << "Enter Number of bits in binary number?\t";
	cin >> bits;

	do
	{
		flag = 0;
		cout << "Enter the binary for complement?\t";
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
	} while (flag);			//for bounding input (Only Binary Numbers)

	temp = num;

	while (bits > 0)
	{
		rem = num % 10;

		if (rem == 0)
		{
			if (!first)
				first = true;
			reverse = reverse * 10 + 1;
		}
		else
		{
			if (!first)
				i *= 10;
			reverse = reverse * 10;
		}

		num = num / 10;
		bits--;
	}

	while (reverse != 0)
	{
		rem = reverse % 10;
		num = num * 10 + rem;
		reverse = reverse / 10;
	}

	num *= i;

	//for formatting output
	for (int i = 1; i <= 80; i++)
		cout << "-";

	cout << "\nComplement of " << temp << " = \t" << num << endl;
	return 0;
}