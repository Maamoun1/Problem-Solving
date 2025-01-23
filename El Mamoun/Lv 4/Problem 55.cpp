#pragma warning(disable :4996)
#include<iostream>
#include<string>
#include<ctime>
using namespace std;
/*
write a program to read vacations start DateForm and vacationDays,
then make a functions to calculate the vacations return date
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

short ReadVactionDays()
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

bool IsLeapYear(short Year)
{
	return  ((Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0));
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

string DayShortName(short DayOfWeekOrder)
{
	string arrDayNames[] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
	return arrDayNames[DayOfWeekOrder];
}

bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);

}

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 1 || Month>12)
		return 0;

	int NumberOfDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfDays[Month - 1];
}

bool IsLastDayInMonth(stDate Date)
{
	return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}

bool IsLastMonthInYear(short Month)
{
	return (Month == 12);
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

bool IsWeekEnd(stDate Date)
{
	short DayIndex = DayOfWeekOrder(Date);
	return (DayIndex == 5 || DayIndex == 6);
}

bool IsBusinessDay(stDate Date)
{

	return !IsWeekEnd(Date);
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
		if (!IsWeekEnd(Date1))
		{
			Days++;
		}

		Date1 = IncreaseDateByOneDay(Date1);
	}
	return IncludeEndDay ? ++Days * SawpFlagValue : Days * SawpFlagValue;
}

short CalculteVactionDays(stDate DateFrom, stDate Date2)
{

	short DaysCount = 0;

	while (IsDate1BeforeDate2(DateFrom, Date2))
	{
		if (IsBusinessDay(DateFrom))
			++DaysCount;

		DateFrom = IncreaseDateByOneDay(DateFrom);

	}
	return DaysCount;
}

stDate CalculateVactionReturnDate(stDate DateFrom, short VactionDays)
{

	short WeekEndCounter = 0;

	for (short i = 1; i <= VactionDays; i++)
	{
		if (IsWeekEnd(DateFrom))
			++WeekEndCounter;

		DateFrom = IncreaseDateByOneDay(DateFrom);
	}

	for (short i = 1; i <= WeekEndCounter; i++)
	{
		DateFrom = IncreaseDateByOneDay(DateFrom);
	}

	while (IsWeekEnd(DateFrom))
	{
		DateFrom = IncreaseDateByOneDay(DateFrom);
	}
	return DateFrom;

}


int main()
{

	cout << "\nVaction Starts:\n";
	stDate Dat1 = ReadFullDate();
	short VactionDays = ReadVactionDays();

	stDate ReturnDate = CalculateVactionReturnDate(Dat1, VactionDays);

	cout << "\nReturn Date : " << DayShortName(DayOfWeekOrder(ReturnDate)) << " , ";
	cout << ReturnDate.Day << "/" << ReturnDate.Month << "/" << ReturnDate.Year;






	system("Pause > 0");
	return 0;
}