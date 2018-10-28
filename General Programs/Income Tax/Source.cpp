/*
Program for calculating Income Tax
*/

#include <iostream>
using namespace std;

int main()
{
	int income, extra;
	float tax;
	cout << "Enter income?\t";
	cin >> income;
	if (income <= 400000)
		cout << "Tax = Rs.0" << endl;
	else if (income > 400000 && income <= 750000)
	{
		extra = income - 400000;
		tax = (extra * 5) / 100;
		cout << "Tax = " << tax << endl;
	}
	else if (income > 750000 && income <= 1400000)
	{
		extra = income - 750000;
		tax = ((extra * 10) / 100) + 17500;
		cout << "Tax = Rs." << tax << endl;
	}
	else if (income > 1400000 && income <= 1500000)
	{
		extra = income - 1400000;
		tax = ((extra * 12.5) / 100) + 82500;
		cout << "Tax = Rs." << tax << endl;
	}
	else if (income > 1500000 && income <= 1800000)
	{
		extra = income - 1500000;
		tax = ((extra * 15) / 100) + 95000;
		cout << "Tax = Rs." << tax << endl;
	}
	else if (income > 1800000 && income <= 2500000)
	{
		extra = income - 1800000;
		tax = ((extra * 17.5) / 100) + 140000;
		cout << "Tax = Rs." << tax << endl;
	}
	else if (income > 2500000 && income <= 3000000)
	{
		extra = income - 2500000;
		tax = ((extra * 20) / 100) + 262500;
		cout << "Tax = Rs." << tax << endl;
	}
	else if (income > 3000000 && income <= 3500000)
	{
		extra = income - 3000000;
		tax = ((extra * 22.5) / 100) + 362500;
		cout << "Tax = Rs." << tax << endl;
	}
	else if (income > 3500000 && income <= 4000000)
	{
		extra = income - 3500000;
		tax = ((extra * 25) / 100) + 475000;
		cout << "Tax = Rs." << tax << endl;
	}
	else if (income > 4000000 && income <= 7000000)
	{
		extra = income - 4000000;
		tax = ((extra * 27.5) / 100) + 600000;
		cout << "Tax = Rs." << tax << endl;
	}
	else if (income > 7000000)
	{
		extra = income - 7000000;
		tax = ((extra * 30) / 100) + 1425000;
		cout << "Tax = Rs." << tax << endl;
	}
	else
		cout << "Please enter valid income (greater than zero)\n";
	return 0;
}