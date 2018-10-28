/*
Program for displaying the day number and day name of a year (1900 - ) after getting year, month and date as input [without bound checking].
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
	int month, date, day, year, remY, leap, leapY, sum, name, count = 1;
	char ch;
	string DayName;
	cout << "Jan=31\nFeb=28 (if Reg)\t or Feb=29 (if leap)\nMar=31\nApr=30\nMay=31\nJun=30\nJul=31\nAug=31\nSep=30\nOct=31\nNov=30\nDec=31\n\n";
	do
	{
		cout << "\nRun # " << count << ":\n\n";
		sum = 0;
		do
		{
			cout << "Enter Year (1900- )?\t";
			cin >> year;
		} while (year < 1900);

		if (year>1900)
		{
			remY = year % 1900;
			leap = remY % 4;
			leapY = (remY - 1) / 4;
			sum = leapY * 2 + remY - leapY;
		}
		else
			leap = 1;

		if (leap == 0)
			cout << "Entered year is leap.\n";
		else
			cout << "Entered year is not leap.\n";

		do
		{
			cout << "Enter Month (1-12)?\t";
			cin >> month;
		} while (month > 12 || month < 1);

		cout << "Enter Date [Please enter valid \"Date\" otherwise the output will be wrong]?\n";
		cin >> date;

		if (month == 1)
			day = date;
		else if (month == 2)
			day = 31 + date;
		else if (month == 3)
			day = 59 + date;
		else if (month == 4)
			day = 90 + date;
		else if (month == 5)
			day = 120 + date;
		else if (month == 6)
			day = 151 + date;
		else if (month == 7)
			day = 181 + date;
		else if (month == 8)
			day = 212 + date;
		else if (month == 9)
			day = 243 + date;
		else if (month == 10)
			day = 273 + date;
		else if (month == 11)
			day = 304 + date;
		else if (month == 12)
			day = 334 + date;
		
		if (leap == 0)
			if (month > 2)
				day += 1;
		name = day + sum;

		if (name % 7 == 0)
			DayName = "Sunday";
		else if (name % 7 == 1)
			DayName = "Monday";
		else if (name % 7 == 2)
			DayName = "Tuesday";
		else if (name % 7 == 3)
			DayName = "Wednesday";
		else if (name % 7 == 4)
			DayName = "Thursday";
		else if (name % 7 == 5)
			DayName = "Friday";
		else if (name % 7 == 6)
			DayName = "Saturday";

		cout << endl << date << "-" << month << "-" << year << " is " << day << "(th) day of the year (" << year << ") and the \"Day Name\" is " << DayName << ".\n";

		cout << "Do u want to run again? (y/n)\t";
		cin >> ch;
		cout << "\a";
		count++;
	} while (ch == 'y' || ch == 'Y');

	return 0;
}