#include<iostream>
#include<string>
using namespace std;
/*
write a program to read a date and check:
 .if it is last day in month
 .if it is last month in year
*/
int ReadNumberInRange(string message, int From, int To)
{
	int Number{ 0 };
	do
	{
		cout << message;
		cin >> Number;

	} while (Number < From || Number > To);

	return Number;
}

struct stDate
{
	short Year;
	short Month;
	short Day;
};

bool IsLeapYear(short Year)
{
	return  ((Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0));

}

short ReadYear()
{
	short Year;
	cout << "\nPlease Enter a Year to Check? ";
	cin >> Year;
	return Year;
}

short ReadDay()
{
	short Day;
	cout << "\nPlease Enter a Day? ";
	cin >> Day;
	return Day;
}

stDate ReadFullDate()
{
	stDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadNumberInRange("\nPlease Enter a Month? ", 1, 12);
	Date.Year = ReadYear();

	return Date;
}

short ReadDaysToAdd()
{
	short Day;
	cout << "\nHow Many Days to add? ";
	cin >> Day;
	return Day;
}

short NumberOfDaysInAMonth(short Year, short Month)
{
	short arrMonth[] = { 31,IsLeapYear(Year) ? 29 : 28,31,30,31,
		30,31,31,30,31,30,31 };

	return arrMonth[Month - 1];
}

bool IsLastDayInMonth(stDate Date1)
{
	return (Date1.Day == NumberOfDaysInAMonth(Date1.Year, Date1.Month));

}

bool IsLastMonthInYear(short Month)
{
	return (Month == 12);
}


int main()
{
	stDate Date1, Date2;
	Date1 = ReadFullDate();

	if (IsLastDayInMonth(Date1))
		cout << "\nYes , Day is the last Month \n";

	else
		cout << "\nNo , Day is not the last Month \n";

	if (IsLastMonthInYear(Date1.Month))
		cout << "\nYes , Month is last Month in the year \n";

	else
		cout << "\nNo , Month is not last Month in the year \n";






	system("pause>0");
	return 0;
}