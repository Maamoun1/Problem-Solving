#pragma warning(disable :4996)
#include<iostream>
#include<string>
#include<ctime>
using namespace std;
/*
write a program to read a two periods then count overlap days ?
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

stDate ReadFullDate()
{
	stDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadNumberInRange("Please Enter a Month? ", 1, 12);
	Date.Year = ReadYear();

	return Date;
}

stPeriod ReadPeriod()
{
	stPeriod Period;
	cout << "Enter Start Date 1: \n\n";
	Period.StartDate = ReadFullDate();
	cout << "Enter End Date 1: \n\n";
	Period.EndDate = ReadFullDate();

	return Period;
}

bool IsLeapYear(short Year)
{
	return  ((Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0));
}

bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);

}

bool IsDate1EqualDate2(stDate Date1, stDate Date2)
{

	return (Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false) : false;
}

bool IsDate1AfterDate2(stDate Date1, stDate Date2)
{

	return (!IsDate1BeforeDate2(Date1, Date2) && !IsDate1EqualDate2(Date1, Date2));

}

enDateCompare CompareDate(stDate Date1, stDate Date2)
{

	return (IsDate1BeforeDate2(Date1, Date2)) ? enDateCompare::Before : (IsDate1EqualDate2(Date1, Date2)) ? enDateCompare::Equal : enDateCompare::After;


	/*if (IsDate1AfterDate2(Date1, Date2))
		return enCompareDate::After;

	if (IsDate1BeforeDate2(Date1, Date2))
		return enCompareDate::Before;

	else
		return enCompareDate::Equal;*/

}

bool IsOverlapPeriods(stPeriod Period1, stPeriod Period2)
{

	if (CompareDate(Period2.EndDate, Period1.StartDate) == enDateCompare::Before
		|| CompareDate(Period1.StartDate, Period2.EndDate) == enDateCompare::After
		)
		return false;

	else
		return true;

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

int PeriodLenghInDays(stPeriod Period1, bool IncludeEndDay = false)
{
	return GetDifferenceInDays(Period1.StartDate, Period1.EndDate, IncludeEndDay);
}

bool IsDateWithinPeriod(stPeriod Period1, stDate Date)
{
	//	return (IsDate1AfterDate2(Date, Period1.StartDate) && IsDate1BeforeDate2(Date, Period1.EndDate));

	return !(IsDate1BeforeDate2(Date, Period1.StartDate) || IsDate1AfterDate2(Date, Period1.EndDate));
}

int CountOverlapDays(stPeriod Period1, stPeriod Period2)
{
	int CountOverlap = 0;

	if (IsOverlapPeriods(Period1, Period2))
	{
		while (IsDate1BeforeDate2(Period2.StartDate, Period1.EndDate))
		{
			if (IsDateWithinPeriod(Period1, Period2.StartDate))
			{
				++CountOverlap;
				Period2.StartDate = IncreaseDateByOneDay(Period2.StartDate);
			}
		}
	}
	return CountOverlap;
}




int main()
{

	cout << "\nEnter Period 1: \n";
	stPeriod Period1 = ReadPeriod();

	cout << "\nEnter Period 2: \n";
	stPeriod Period2 = ReadPeriod();

	cout << "\nOverlap Days Count Is: " << CountOverlapDays(Period1, Period2);



	system("Pause > 0");
	return 0;
}