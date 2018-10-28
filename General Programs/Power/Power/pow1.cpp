/*Program for Calculating and Displaying POWER of entered number without using Function*/


#include<iostream>
using namespace std;

int main()
{
	int i = 0, n, b, e;
	float p = 1;
	cout << "Enter any number for base?";
	cin >> n;
	cout << "Enter any number for power?";
	cin >> e;
	if (e < 0)
		b = -e;
	else
		b = e;
	
	while (i < b)
	{
		p = p*n;
		i++;
	}

	if (e == 0)
		cout << "Power = 1\n";
	else if (e>0)
		cout << "Power=" << p << endl;
	else if (e < 0)
		cout << "Power=" << 1.0/p << endl;
	return 0;
}