#pragma warning(disable :4996)
#include<iostream>
#include<string>
#include<ctime>
using namespace std;
/*
write a program to read date and write a function to validate this date
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

enum enDateCompare { Before = -1, Equal = 0, After = 3 };

struct stDate
{
	short Year;
	short Month;
	short Day;
};

struct stPeriod
{
	stDate StartDate;
	stDate EndDate;
};

short ReadYear()
{
	short Year;
	cout << "Please Enter a Year to Check? ";
	cin >> Year;
	return Year;
}

short ReadDay()
{
	short Day;
	cout << "Please Enter a Day? ";
	cin >> Day;
	return Day;
}

short ReadMonth()
{
	short Month;
	cout << "Please Enter a Month? ";
	cin >> Month;
	return Month;
}

stDate ReadFullDate()
{
	stDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;
}

bool IsLeapYear(short Year)
{
	return  ((Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0));
}

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 1 || Month>12)
		return 0;

	int NumberOfDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfDays[Month - 1];
}

bool IsValidDate(stDate Date)
{

	if (Date.Day < 1 || Date.Day >31)
		return false;

	if (Date.Month < 1 || Date.Month >12)
		return false;

	if (Date.Month == 2)
	{
		if (IsLeapYear(Date.Year))
		{
			if (Date.Day > 29)
				return false;
		}

		else
		{
			if (Date.Day > 28)
				return false;
		}
	}

	short DaysMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);

	if (Date.Day > DaysMonth)
		return false;

	return true;

}



int main()
{
	stDate Date1 = ReadFullDate();


	if (IsValidDate(Date1))
		cout << "\nYES, Date is a Valid Date. \n";
	else
		cout << "\No, Date is not a Valid Date. \n";


	system("Pause > 0");
	return 0;
}