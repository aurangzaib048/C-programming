/*
Program for calculating age of the user after getting "DATE OF BIRTH" and "CURRENT DATE".

Note:
Number of days in each month = 30.
*/

# include <iostream>
# include <iomanip>
using namespace std;

int main()
{
	int BirthYear, BirthMonth, BirthDate, CurrentMonth, CurrentYear, CurrentDate, AgeYears, AgeMonths, AgeDays;
	
	for (int i = 1; i <= 80; i++)
		cout << "*";
	cout << setw(48) << "AGE CALCULATOR\n";
	for (int i = 1; i <= 80; i++)
		cout << "*";

	//For getting DATE OF BIRTH
	cout << "Enter your DATE OF BIRTH:\n";
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
	if (CurrentMonth <= BirthMonth)	
		AgeYears = CurrentYear - BirthYear - 1;
	else
		AgeYears = CurrentYear - BirthYear;

	//For Calculating Age(Months)
		AgeMonths = 11 - BirthMonth + CurrentMonth;
		if (AgeMonths >= 12)
			AgeMonths -= 12;

	//For Calculating Age(Days)
	AgeDays = 30 - BirthDate + CurrentDate;
	if (AgeDays > 30)
	{
		AgeMonths++;
		AgeDays -= 30;
	}
	
	cout << "\nYour DATE OF BIRTH is\t " << BirthDate << "-" << BirthMonth << "-" << BirthYear;		//Displays Date of Birth
	cout << "\nTODAY's DATE is      \t " << CurrentDate << "-" << CurrentMonth << "-" << CurrentYear;	//Displays Current Date
	cout << "\n\nYour CURRENT AGE is\t " << AgeYears << " years, " << AgeMonths << " months and " << AgeDays << " days.\n";		//Displays Currenr Age

	return 0;
}