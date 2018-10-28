/*
C++ Program for performing binary multiplication by converting it into decimal.
*/

# include <iostream>
# include <iomanip>
using namespace std;
int decimal(unsigned int);
long long Binary(int);

int main()
{
	unsigned int num1, num2;
	int temp1, temp2, product;
	long long binary;

	cout << "Enter 1st Binary Number?\t";
	cin >> num1;
	cout << "Enter 2nd Binary Number?\t";
	cin >> num2;

	temp1 = decimal(num1);
	temp2 = decimal(num2);
	product = temp1*temp2;
	binary = Binary(product);

	cout << "Product of " << num1 << " & " << num2 << " is:\n\t\t" << binary;
	cout << endl;
	return 0;
}

int decimal(unsigned int num)
{
	int rem, decimal = 0, i = 0;
	while (num > 0)
	{
		rem = num % 10;
		decimal = decimal + (rem*  pow(2, i));
		i++;
		num /= 10;
	}
	return decimal;
}

long long Binary(int num)
{
	int rem;
	long long binary = 0, i = 1;
	do
	{
		rem = num % 2;
		binary = binary + (i*rem);
		num = num / 2;
		i = i * 10;
	} while (num>0);
	return binary;
}

