//Program for taking complement of a binary number (of specified bits).

# include <iostream>
using namespace std;

int main()
{
	int rem, bits, i = 0;
	long long num, complement = 0, temp, temp1;
	bool flag;

	//for input
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

	//for calculating complement
	while (bits > 0)
	{
		rem = num % 10;

		if (rem == 0)
			complement = complement + pow(10, i);

		num = num / 10;
		i++;
		bits--;
	}

	//for formatting output
	for (int i = 1; i <= 80; i++)
		cout << "-";

	cout << "Complement of "<< temp <<" = \t" << complement << endl;	//display's complement

	return 0;
}