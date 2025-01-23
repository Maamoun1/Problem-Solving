#include<iostream>
#include<string>
using namespace std;
/*
write a program to read date1,date2 and make a function to calcualte the difference in days
Note : Date1 should be less than date2
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

bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);

}

stDate IncreaseDateByOneDay(stDate Date)
{

	if (IsLastDayInMonth(Date))
	{
		if (IsLastMonthInYear(Date.Month))
		{
			++Date.Year;
			Date.Month = 1;
			Date.Day = 1;
		}
		else
		{
			Date.Day = 1;
			++Date.Month;
		}
	}

	else
	{
		++Date.Day;
	}
	return Date;
}

int GetDifferanceInDays(stDate Date1, stDate Date2, bool IncludeingEndday = false)
{
	int Days = 0;

	while (IsDate1BeforeDate2(Date1, Date2))
	{
		++Days;
		Date1 = IncreaseDateByOneDay(Date1);
	}
	return IncludeingEndday ? ++Days : Days;
}



int main()
{

	stDate Date1, Date2;
	Date1 = ReadFullDate();
	Date2 = ReadFullDate();

	cout << "\n\nDifference is: " <<
		GetDifferanceInDays(Date1, Date2) << " Days(s). ";

	cout << "\n\nDifference (Including End Day) is: " <<
		GetDifferanceInDays(Date1, Date2, true) << " Days(s). ";


	system("pause>0");
	return 0;
}