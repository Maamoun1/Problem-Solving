#include<iostream>
#include<string>
using namespace std;
/*
write a program to read a date and make a functions to increse date as follow:
-IncreaseDateByXDays
-IncreaseDateByOneWeek
-IncreaseDateByXWeek
-IncreaseDateByOneMonth
-IncreaseDateByXMonth
-IncreaseDateByOneYear
-IncreaseDateByXYear
-IncreaseDateByXYearsFaster
-IncreaseDateByOneDecade
-IncreaseDateByXDecade
-IncreaseDateByXDecades
-IncreaseDateByXDecadesFaster
-IncreaseDateByOneCentuary
-IncreaseDateByOneMillennium
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

short NumberOfDaysInAMonth(short Year, short Month)
{
	short arrMonth[] = { 31,IsLeapYear(Year) ? 29 : 28,31,30,31,
		30,31,31,30,31,30,31 };

	return arrMonth[Month - 1];
}

bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);

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

	if (IsDate1BeforeDate2(Date1, Date2))
	{
		while (IsDate1BeforeDate2(Date1, Date2))
		{
			++Days;
			Date1 = IncreaseDateByOneDay(Date1);
		}
		return IncludeingEndday ? ++Days : Days;
	}

	return GetDifferanceInDays(Date2, Date1) * -1;

}

stDate IncreaseDateByXDay(stDate Date, short NumOfDays)
{

	for (int i = 1; i <= NumOfDays; i++)
	{
		Date = IncreaseDateByOneDay(Date);
	}

	return Date;
}

stDate IncreaseDateByOneWeek(stDate Date)
{

	for (int i = 1; i <= 7; i++)
	{
		Date = IncreaseDateByOneDay(Date);
	}

	return Date;
}

stDate IncreaseDateByXWeek(stDate Date, short NumOfWeeks)
{

	for (int i = 1; i <= NumOfWeeks; i++)
	{
		Date = IncreaseDateByOneWeek(Date);
	}

	return Date;
}

stDate IncreaseDateByOneMonth(stDate Date)
{
	if (Date.Month == 12)
	{
		Date.Month = 1;
		Date.Year++;
	}
	else
	{
		Date.Month++;
	}

	short NumberOfDaysInCurrentMonth = NumberOfDaysInAMonth(Date.Year, Date.Month);

	if (Date.Day > NumberOfDaysInCurrentMonth)
	{
		Date.Day = NumberOfDaysInCurrentMonth;
	}
	return Date;
}

stDate IncreaseDateByXMonth(stDate Date, short NumOfMonth)
{

	for (short i = 1; i <= NumOfMonth; i++)
	{
		Date = IncreaseDateByOneMonth(Date);
	}
	return Date;
}

stDate IncreaseDateByOneYear(stDate Date)
{
	++Date.Year;
	return Date;
}

stDate IncreaseDateByXYear(stDate Date, short NumYears)
{

	for (short i = 1; i <= NumYears; i++)
	{
		Date = IncreaseDateByOneYear(Date);
	}
	return Date;
}

stDate IncreaseDateByXYearFaster(stDate Date, short NumYears)
{

	Date.Year += NumYears;
	return Date;
}

stDate IncreaseDateByOneDecade(stDate Date)
{

	Date.Year += 10;
	return Date;
}

stDate IncreaseDateByXDecade(stDate Date, short NumDecade)
{

	for (short i = 1; i <= NumDecade; i++)
	{
		Date = IncreaseDateByOneDecade(Date);
	}

	return Date;
}

stDate IncreaseDateByXDecadeFaster(stDate Date, short NumDecade)
{

	Date.Year += NumDecade * 10;
	return Date;
}

stDate IncreaseDateByOneCentury(stDate Date)
{

	Date.Year += 100;
	return Date;
}

stDate IncreaseDateByOneMillennium(stDate Date)
{

	Date.Year += 1000;
	return Date;
}


int main()
{

	stDate Date;
	Date = ReadFullDate();
	Date = IncreaseDateByOneDay(Date);

	cout << "\n\n Date After: \n";

	cout << "01-Adding One Day is: " <<
		Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = IncreaseDateByXDay(Date, 10);
	cout << "02-Adding 10 Days is: " <<
		Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = IncreaseDateByOneWeek(Date);
	cout << "03-Adding One Week is: " <<
		Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = IncreaseDateByXWeek(Date, 10);
	cout << "04-Adding 10 Week is: " <<
		Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = IncreaseDateByOneMonth(Date);
	cout << "05-Adding One Month  is: " <<
		Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = IncreaseDateByXMonth(Date, 5);
	cout << "06-Adding 5 Month  is: " <<
		Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = IncreaseDateByOneYear(Date);
	cout << "07-Adding One Year  is: " <<
		Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = IncreaseDateByXYear(Date, 10);
	cout << "08-Adding 10 Years  is: " <<
		Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = IncreaseDateByXYearFaster(Date, 10);
	cout << "09-Adding 10 Years (very Faster) is: " <<
		Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = IncreaseDateByOneDecade(Date);
	cout << "10-Adding One Decase is: " <<
		Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = IncreaseDateByXDecade(Date, 10);
	cout << "11-Adding 10 Decades is: " <<
		Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = IncreaseDateByXDecadeFaster(Date, 10);
	cout << "12-Adding 10 Decades (very Faster) is: " <<
		Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = IncreaseDateByOneCentury(Date);
	cout << "13-Adding One Century is: " <<
		Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = IncreaseDateByOneMillennium(Date);
	cout << "14-Adding One Millennium is: " <<
		Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";


	system("pause>0");
	return 0;
}