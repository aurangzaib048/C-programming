/*Program for checking whether ENTERED NUMBER is Prime or Composit*/

#include<iostream>
using namespace std;
int main()
{
	unsigned int i, num;
	bool a=0;
	cout<<"Enter any non-negative Number?\t";
	cin >> num;
	for (i = 2; i <= num/2; i++)
		{
			if (num % i == 0)
			{
				a = 1;
				break;
			}
		}
	if (a != 1)
		cout<<"Entered number is Prime\n";
	else
		cout<<"Entered number is Composit\n";
	return 0;
}