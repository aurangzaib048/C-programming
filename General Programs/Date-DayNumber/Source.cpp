/*
Program for displaying the date of a year (Not Leap) after getting day number of a year as input.
Let day-1=Monday
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
	int month, dayNum, day;
	string DayName,Month;
	do
	{
		cout << "Enter dayNum(1-365)?\t";
		cin >> dayNum;
	} while (dayNum > 365 || dayNum < 1);

	if (dayNum <= 31)
	{
		month = 1; 
		Month = "Januay";
		day = dayNum;
	}
	else if (dayNum <= 59)
	{
		month = 2;
		Month = "February";
		day = dayNum - 31;
	}
	else if (dayNum <= 90)
	{
		month = 3;
		Month = "March";
		day = dayNum - 59;
	}
	else if (dayNum <= 120)
	{
		month = 4;
		Month = "April";
		day = dayNum - 90;
	}
	else if (dayNum <= 151)
	{
		month = 5;
		Month = "May";
		day = dayNum - 120;
	}
	else if (dayNum <= 181)
	{
		month = 6;
		Month = "June";
		day = dayNum - 151;
	}
	else if (dayNum <= 212)
	{
		month = 7;
		Month = "July";
		day = dayNum - 181;
	}
	else if (dayNum <= 243)
	{
		month = 8;
		Month = "August";
		day = dayNum - 212;
	}
	else if (dayNum <= 273)
	{
		month = 9;
		Month = "September";
		day = dayNum - 243;
	}
	else if (dayNum <= 304)
	{
		month = 10;
		Month = "October";
		day = dayNum - 273;
	}
	else if (dayNum <= 334)
	{
		month = 11;
		Month = "November";
		day = dayNum - 304;
	}
	else
	{
		month = 12;
		Month = "December";
		day = dayNum - 334;
	}



	if (dayNum % 7 == 1)
		DayName = "Monday";
	else if (dayNum % 7 == 2)
		DayName = "Tuesday";
	else if (dayNum % 7 == 3)
		DayName = "Wednesday";
	else if (dayNum % 7 == 4)
		DayName = "Thursday";
	else if (dayNum % 7 == 5)
		DayName = "Friday";
	else if (dayNum % 7 == 6)
		DayName = "Saturday";
	else if (dayNum % 7 == 0)
		DayName = "Sunday";

	cout << "The Entered day Number(" << dayNum << ") is " << day << "(th) day [" << DayName << "] of " << month << "(th) month [" << Month << "]" << endl;
	return 0;
}