#include<iostream>
#include <iomanip>

using namespace std;
int main()
{
	int pennies, nickels, dimes, quarters;
	float total;
	cout << "Enter :\n";
	cout << "Pennies?\t";
	cin >> pennies;
	cout << "Nickels?\t";
	cin >> nickels;
	cout << "Dimes?\t";
	cin >> dimes;
	cout << "Quarters?\t";
	cin >> quarters;
	total = pennies*.01 + nickels*.05 + dimes*.1 + quarters*.25;
	if (total == 1)
		cout << "Congragulations!!!!\nYOU WON THE GAME...........\n";
	else if (total < 1)
		cout << "Sorry you lost....Entered amount is less than 1$\n";
	else
		cout << "Sorry you lost....Entered amount is more than 1$\n";
	return 0;
}