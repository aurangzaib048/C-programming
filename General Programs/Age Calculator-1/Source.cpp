/*
Program for calculating age of the user after getting "DATE OF BIRTH" and "CURRENT DATE".
Program will also inform you if today is your BIRTHDAY.
Note:
Date is not bound checked.
*/

# include <iostream>
# include <iomanip>
using namespace std;

int main()
{
	int BirthYear, BirthMonth, BirthDate, CurrentMonth, CurrentYear, CurrentDate, AgeYears, AgeMonths=0, AgeDays=0, MonthDays;
	int flag=0;

	for (int i = 1; i <= 80; i++)
		cout << "*";
	cout << setw(48) << "AGE CALCULATOR\n";
	for (int i = 1; i <= 80; i++)
		cout << "*";

	//For getting DATE OF BIRTH
	cout << "\n\nEnter your DATE OF BIRTH:\n";
	cout << "Enter Year?\t";
	cin >> BirthYear;
	cout << "Enter Month?\t";
	cin >> BirthMonth;
	cout << "Enter Date?\t";
	cin >> BirthDate;

	//For getting CURRENT DATE
	cout << "\nEnter CURRENT DATE:\n";
	cout << "Enter Year?\t";
	cin >> CurrentYear;
	cout << "Enter Month?\t";
	cin >> CurrentMonth;
	cout << "Enter Date?\t";
	cin >> CurrentDate;
	
	//For Calculating Age(Years)
	if (CurrentMonth < BirthMonth)
		AgeYears = CurrentYear - BirthYear - 1;
	else if (CurrentMonth == BirthMonth)
	{
		if (CurrentDate >= BirthDate)
		{
			AgeYears = CurrentYear - BirthYear;
			flag = 1;
			if (CurrentDate == BirthDate)
				flag = 2;
		}
		else
			AgeYears = CurrentYear - BirthYear - 1;
	}	
	else
		AgeYears = CurrentYear - BirthYear;

	//For Calculating number of days in BirthMonth
	if (flag == 0)
	{
		switch (BirthMonth)
		{
		case 4: case 6: case 9: case 11:
			MonthDays = 30;
			break;
		case 2:
			MonthDays = 28;
			if (BirthYear % 4 == 0)
				MonthDays++;
			break;
		default:
			MonthDays = 31;
		}
	}

	//For Calculating Age(Months)
	if (flag == 0)
	{
		if (CurrentMonth <= BirthMonth)
			AgeMonths = 11 - BirthMonth + CurrentMonth;
		else
			AgeMonths = 11 - BirthMonth + CurrentMonth - 12;
	}

	//For Calculating Age(Days)
	if (flag != 2)
	{
		if (flag==1)
			AgeDays = CurrentDate - BirthDate;
		else
		{
			AgeDays = MonthDays - BirthDate + CurrentDate;
			if (AgeDays > MonthDays)
			{
				AgeMonths++;
				AgeDays -= MonthDays;
			}
		}
	}

	cout << "\nYour DATE OF BIRTH is\t " << BirthYear << "-" << BirthMonth << "-" << BirthDate;		//Displays Date of Birth
	cout << "\nTODAY's DATE is      \t " << CurrentYear << "-" << CurrentMonth << "-" << CurrentDate;	//Displays Current Date
	
	if (flag == 2)
	{
		cout << "\n\nToday is your BIRTHDAY........\n" << setw(47) << "HAPPY BIRTHDAY";
		cout << "\nNow you are " << AgeYears << " years old.\n";
	}
	else
		cout << "\n\nYour CURRENT AGE is\t " << AgeYears << " years, " << AgeMonths << " months and " << AgeDays << " days.\n";

	
	return 0;
}