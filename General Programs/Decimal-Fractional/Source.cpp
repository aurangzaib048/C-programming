/*
Program for seperating fractional and decimal part.
*/

#include<iostream>
using namespace std;

int main()
{

	int decimal;
	float num, fractional;
	cout << "Enter the decimal to be converted?\t";
	cin >> num;

	decimal = num;
	fractional = num - decimal;

	cout << "Decimal Part =\t" << decimal << "\nFractional Part =\t" << fractional << endl;
	
	return 0;
}