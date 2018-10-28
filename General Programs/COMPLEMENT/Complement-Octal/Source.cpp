/*Program for taking COMPLEMENT of an Octal number (Base 8).
Note:
Complement of a 'n' digit number 'num' with base '8' is;		
(8)^n - 1 = (result)Base_10
Complement = (result)Base_8 - num
*/

# include <iostream>
# include <cmath>
using namespace std;

int Octal(int);

int main()
{
	int digits = 0, complement = 0, temp, temp1, num;
	bool flag;

	//for input
	do
	{
		flag = 0;
		cout << "Enter the Octal Number for complement?\t";
		cin >> num;
		temp1 = num;
		while (temp1 != 0)
		{
			if (temp1 % 10 > 7)
				flag = 1;
			temp1 /= 10;
		}
		if (flag)
			cout << "Invalid Input....\n";
	} while (flag);

	temp = num;

	//for calculating No. of Digits
	while (temp != 0)
	{
		temp /= 10;
		digits++;
	}

	//for calculating complement
	complement = Octal(pow(8, digits) - 1) - num;
	
	cout << "Complement of " << num << " = \t" << complement << endl;	//display's complement

	return 0;
}

//Function Definition
int Octal(int num)
{
	int octal = 0, rem, i = 1;

	//for converting Decimal into Octal
	do
	{
		rem = num % 8;
		octal = octal + (i*rem);
		num /= 8;
		i = i * 10;
	} while (num>0);

	return octal;
}