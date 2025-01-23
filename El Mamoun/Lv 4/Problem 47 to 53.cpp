#pragma warning(disable :4996)
#include<iostream>
#include<string>
#include<ctime>
using namespace std;
/*
write a program to read a date and make functions as follows:
-Overload the DayOfWeekOrder to take date structure
-IsEndOfWeek
-IsWeekend
-IsBusinessDay
-DaysUntilTheEndOfWeak
-DaysUntilTheEndOfMonth
-DaysUntilTheEndOfyear
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

short NumberOfDaysInAMonth(short Year, short Month)
{
	short arrMonth[] = { 31,IsLeapYear(Year) ? 29 : 28,31,30,31,
		30,31,31,30,31,30,31 };

	return arrMonth[Month - 1];
}

bool IsLastMonthInYear(short Month)
{
	return (Month == 12);
}

bool IsLastDayInMonth(stDate Date)
{
	return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}

stDate IncreaseDateByOneDay(stDate Date)
{
	if (IsLastDayInMonth(Date))
	{
		if (IsLastMonthInYear(Date.Month))
		{
			Date.Month = 1;
			Date.Day = 1;
			Date.Year++;
		}
		else
		{
			Date.Day = 1;
			Date.Month++;
		}
	}
	else
	{
		Date.Day++;
	}
	return Date;
}

stDate ReadFullDate()
{
	stDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadNumberInRange("\nPlease Enter a Month? ", 1, 12);
	Date.Year = ReadYear();

	return Date;
}

string DayShortName(short DayOfWeekOrder)
{
	string arrDayNames[] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
	return arrDayNames[DayOfWeekOrder];
}

short DayOfWeekOrder(short Day, short Month, short Year)
{
	short a, y, m;
	a = (14 - Month) / 12;
	y = Year - a;
	m = Month + (12 * a) - 2;
	// Gregorian:
	//0:sun, 1:Mon, 2:Tue...etc
	return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

short DayOfWeekOrder(stDate Date)
{
	return DayOfWeekOrder(Date.Day, Date.Month, Date.Year);
}

void SwapDates(stDate& Date1, stDate& Date2)
{
	stDate TempDate;
	TempDate.Year = Date1.Year;
	TempDate.Month = Date1.Month;
	TempDate.Day = Date1.Day;
	Date1.Year = Date2.Year;
	Date1.Month = Date2.Month;
	Date1.Day = Date2.Day;
	Date2.Year = TempDate.Year;
	Date2.Month = TempDate.Month;
	Date2.Day = TempDate.Day;
}

bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);

}

int GetDifferenceInDays(stDate Date1, stDate Date2, bool IncludeEndDay = false)
{
	int Days = 0;
	short SawpFlagValue = 1;
	if (!IsDate1BeforeDate2(Date1, Date2))
	{
		//Swap Dates 
		SwapDates(Date1, Date2);
		SawpFlagValue = -1;
	}
	while (IsDate1BeforeDate2(Date1, Date2))
	{
		Days++;
		Date1 = IncreaseDateByOneDay(Date1);
	}
	return IncludeEndDay ? ++Days * SawpFlagValue : Days *
		SawpFlagValue;
}

stDate GetSystemDate()
{
	stDate Date;

	time_t t = time(0);
	tm* now = localtime(&t);

	Date.Day = now->tm_mday;
	Date.Month = now->tm_mon + 1;
	Date.Year = now->tm_year + 1900;

	return Date;
}

bool IsEndOfWeek(stDate Date)
{
	return DayOfWeekOrder(Date) == 6;
}

bool IsWeekEnd(stDate Date)
{
	short DayIndex = DayOfWeekOrder(Date);
	return (DayIndex == 5 || DayIndex == 6);
}

bool IsBusinessDay(stDate Date)
{

	return !IsWeekEnd(Date);
}

short DaysUntilTheEndOfWeek(stDate Date)
{
	return (6 - DayOfWeekOrder(Date));
}

short DaysUntilTheEndOfMonth(stDate Date)
{

	short MonthDays = NumberOfDaysInAMonth(Date.Year, Date.Month);
	return (MonthDays - Date.Day);
}

short DaysUntilTheEndOfYear(stDate Date)
{
	stDate EndOfTheYear;
	EndOfTheYear.Day = 31;
	EndOfTheYear.Month = 12;
	EndOfTheYear.Year = 31;

	return GetDifferenceInDays(Date, EndOfTheYear, true);

}


int main()
{

	stDate Date = GetSystemDate();
	cout << "Today is " << DayShortName(DayOfWeekOrder(Date));
	cout << " , " << Date.Day << "/" << Date.Month << "/" << Date.Year;

	cout << "\n\nIs it End Of Week? ";
	if (IsEndOfWeek(Date))
		cout << "\nYes, it is end of Week.";
	else
		cout << "\nNo Not end of week.";

	cout << "\n\nIs it Weekend? ";
	if (IsWeekEnd(Date))
		cout << "\nYes, it is a Week end.";
	else
		cout << "\nNo is not of week end.";

	cout << "\n\nIs it Business Day? \n";
	if (IsBusinessDay(Date))
		cout << "\nYest,it is a business day. \n";
	else
		cout << "\nNo, it is not a business day. \n";


	cout << "\nDays Until end of week : " <<
		DaysUntilTheEndOfWeek(Date) << endl;

	cout << "\nDays Until end of Month : " <<
		DaysUntilTheEndOfMonth(Date) << endl;

	cout << "\nDays Until end of Year : " <<
		DaysUntilTheEndOfYear(Date) << endl;



	system("Pause > 0");
	return 0;
}
