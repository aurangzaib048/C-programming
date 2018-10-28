/*
Program for converting seconds into equivalent days, hours, minutes & seconds.
*/

#include<iostream>
using namespace std;

int main()
{
	long seconds, minutes, hours, days;
	do 
	{
		cout << "Enter Seconds?\t";
		cin >> seconds;
	} while (seconds < 0);
	if (seconds < 60)
		cout << seconds<< " Seconds = 0 minutes & " << seconds << " seconds\n";
	else if (seconds < 3600)
	{
		minutes = seconds / 60;
		seconds %= 60;
		cout << seconds << " Seconds = " << minutes << " minutes & " << seconds << " seconds\n";
	}
	else if (seconds < 86400)
	{
		hours = seconds / 3600;
		seconds %= 3600;
		minutes = seconds / 60;
		seconds %= 60;
		cout << seconds << " Seconds = " << hours << " hours, "<<minutes << " minutes & " << seconds << " seconds\n";
	}
	else
	{
		days = seconds / 86400;
		seconds %= 86400;
		hours = seconds / 3600;
		seconds %= 3600;
		minutes = seconds / 60;
		seconds %= 60;
		cout << seconds << " Seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes & " << seconds << " seconds\n";
	}

	return 0;
}