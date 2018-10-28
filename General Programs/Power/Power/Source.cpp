/*Program for Calculating and Displaying POWER of entered number without using Function*/


#include<iostream>
using namespace std;

int main()
{
	int i = 0, a, b;
	float p = 1;
	cout << "Enter any number for base?";
	cin >> a;
	cout << "Enter any number for power?";
	cin >> b;
	if (b == 0)
		cout << "Power = 1\n";
	else if (( a>0 && b>0 ) || ( a<0 && b>0 ))
	{
		while (i < b)
		{
			p = p*a;
			i++;
		}
		cout << "Power=" << p << endl;
	}
	else
	{
		while (i > b)
		{
			p = p * (1.0/a);
			i--;
		}
		cout << "Power=" << p << endl;
	}
	return 0;
}