/*
Program for displaying the number of days in the entered month using array.
*/

#include <iostream>
using namespace std;

int main()
{
	char name[15], *month[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	int day[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	cin >> name;
	for (int i = 0; i <= 11; i++)
		if (strcmp(name, month[i]) == 0)
		{
		cout << "Days in the entered month are " << day[i];
		break;
		}

	return 0;
}