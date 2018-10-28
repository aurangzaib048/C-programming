/*Program for finding Temperature in Celsius or Farenheit depending on the user input*/

#include<iostream>
using namespace std;

int main()
{
	int t;
	float celsius, farenheit;
	char scale;
	cout << "Select Output TEMPERATUR SCALE\nFor Celsius \t'c'\nFor Farenheit \t'f'\n?";
	cin >> scale;
	switch (scale)
	{
	case 'c':
		cout << "\nEnter Temperature in FARENHEIT?\t";
		cin >> t;
		celsius = 5.0/9.0 *(t - 32);
		cout << "\nTemperature in CELSIUS =\t" << celsius << endl;
		break;
	case 'f':
		cout << "\nEnter Temperature in CELSIUS?\t";
		cin >> t;
		farenheit = (9.0 / 5.0*t) + 32;
		cout << "\nTemperature in FARENHEIT =\t" << farenheit <<endl;
		break;
	default:
		cout << "Please select character from 'c' and 'f' only\n";
	}
	return 0;
}