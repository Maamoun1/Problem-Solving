#pragma warning(disable :4996)
#include<iostream>
#include<string>
#include<ctime>
using namespace std;
/*
write a program to read two periods and check if the overlap or not ?
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
	cout << "Enter Start Date 1: \n";
	Period.StartDate = ReadFullDate();
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



int main()
{

	cout << "Enter Period 1: \n";
	stPeriod Period1 = ReadPeriod();

	cout << "Enter Period 2: \n";
	stPeriod Period2 = ReadPeriod();

	if (IsOverlapPeriods(Period1, Period2))
		cout << "\nYes, Period Overlap. \n";

	else
		cout << "\No, Period is not Overlap. \n";








	system("Pause > 0");
	return 0;
}