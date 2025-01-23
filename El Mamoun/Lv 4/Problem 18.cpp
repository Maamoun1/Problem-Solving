#pragma warning(disable :4996)
#include<iostream>
#include<string>
#include<ctime>
using namespace std;
/*
write a program calcualte your age in days
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

	cout << "\nPlease Enter Your Date of Birth: \n";
	Date.Day = ReadDay();
	Date.Month = ReadNumberInRange("\nPlease Enter a Month? ", 1, 12);
	Date.Year = ReadYear();

	return Date;
}

bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);

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


int main()
{

	stDate Date1 = ReadFullDate();
	stDate Date2 = GetSystemDate();

	cout << "\nYour Age is: "
		<< GetDifferanceInDays(Date1, Date2, true) << " Day(s). \n";




	system("pause>0");
	return 0;
}