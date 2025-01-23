#include<iostream>
#include<string>
using namespace std;
/*
write a program to read a date and make a functions to increse date as follow:
-DecreaseDateByXDays
-DecreaseDateByOneWeek
-DecreaseDateByXWeek
-DecreaseDateByOneMonth
-DecreaseDateByXMonth
-DecreaseDateByOneYear
-DecreaseDateByXYear
-DecreaseDateByXYearsFaster
-DecreaseDateByOneDecade
-DecreaseDateByXDecade
-DecreaseDateByXDecades
-DecreaseDateByXDecadesFaster
-DecreaseDateByOneCentuary
-DecreaseDateByOneMillennium
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

bool IsFirstMonthInYear(short Month)
{
	return (Month == 1);
}

bool IsFirstDayInMonth(stDate Date1)
{
	return (Date1.Day == 1);

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

stDate DecreaseDateByOneDay(stDate Date)
{
	if (IsFirstDayInMonth(Date))
	{
		if (IsFirstMonthInYear(Date.Month))
		{
			--Date.Year;
			Date.Month = 12;
			Date.Day = 31;
		}
		else
		{
			Date.Day = NumberOfDaysInAMonth(Date.Year, Date.Month);;
			--Date.Month;
		}
	}

	else
	{
		--Date.Day;
	}
	return Date;
}

stDate DecreaseDateByXDay(stDate Date, short NumOfDays)
{

	for (int i = 1; i <= NumOfDays; i++)
	{
		Date = DecreaseDateByOneDay(Date);
	}
	return Date;
}

stDate DecreaseDateByOneWeek(stDate Date)
{

	for (int i = 1; i <= 7; i++)
	{
		Date = DecreaseDateByOneDay(Date);
	}

	return Date;
}

stDate DecreaseDateByXWeek(stDate Date, short NumOfWeeks)
{
	for (int i = 1; i <= NumOfWeeks; i++)
	{
		Date = DecreaseDateByOneWeek(Date);
	}
	return Date;
}

stDate DecreaseDateByOneMonth(stDate Date)
{
	if (Date.Month == 1)
	{
		Date.Month = 12;
		Date.Year--;
	}
	else
	{
		Date.Month--;
	}

	/*short NumberOfDaysInCurrentMonth = NumberOfDaysInAMonth(Date.Year, Date.Month);

	if (Date.Day > NumberOfDaysInCurrentMonth)
	{
		Date.Day = NumberOfDaysInCurrentMonth;
	}*/
	return Date;
}

stDate DecreaseDateByXMonth(stDate Date, short NumOfMonth)
{

	for (short i = 1; i <= NumOfMonth; i++)
	{
		Date = DecreaseDateByOneMonth(Date);
	}
	return Date;
}

stDate DecreaseDateByOneYear(stDate Date)
{
	--Date.Year;
	return Date;
}

stDate DecreaseDateByXYear(stDate Date, short NumYears)
{

	for (short i = 1; i <= NumYears; i++)
	{
		Date = DecreaseDateByOneYear(Date);
	}
	return Date;
}

stDate DecreaseDateByXYearFaster(stDate Date, short NumYears)
{

	Date.Year -= NumYears;
	return Date;
}

stDate DecreaseDateByOneDecade(stDate Date)
{

	Date.Year -= 10;
	return Date;
}

stDate DecreaseDateByXDecade(stDate Date, short NumDecade)
{

	for (short i = 1; i <= NumDecade; i++)
	{
		Date = DecreaseDateByOneDecade(Date);
	}

	return Date;
}

stDate DecreaseDateByXDecadeFaster(stDate Date, short NumDecade)
{

	Date.Year -= NumDecade * 10;
	return Date;
}

stDate DecreaseDateByOneCentury(stDate Date)
{

	Date.Year -= 100;
	return Date;
}

stDate DecreaseDateByOneMillennium(stDate Date)
{

	Date.Year -= 1000;
	return Date;
}


int main()
{

	stDate Date;
	Date = ReadFullDate();
	Date = DecreaseDateByOneDay(Date);

	cout << "\n\n Date After: \n";

	cout << "01-Subtracting One Day is: " <<
		Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = DecreaseDateByXDay(Date, 10);
	cout << "02-Subtracting 10 Days is: " <<
		Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = DecreaseDateByOneWeek(Date);
	cout << "03-Subtracting One Week is: " <<
		Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = DecreaseDateByXWeek(Date, 10);
	cout << "04-Subtracting 10 Week is: " <<
		Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = DecreaseDateByOneMonth(Date);
	cout << "05-Subtracting One Month  is: " <<
		Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = DecreaseDateByXMonth(Date, 5);
	cout << "06-Subtracting 5 Month  is: " <<
		Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = DecreaseDateByOneYear(Date);
	cout << "07-Subtracting One Year  is: " <<
		Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = DecreaseDateByXYear(Date, 10);
	cout << "08-Subtracting 10 Years  is: " <<
		Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = DecreaseDateByXYearFaster(Date, 10);
	cout << "09-Subtracting 10 Years (very Faster) is: " <<
		Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = DecreaseDateByOneDecade(Date);
	cout << "10-Subtracting One Decase is: " <<
		Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = DecreaseDateByXDecade(Date, 10);
	cout << "11-Subtracting 10 Decades is: " <<
		Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = DecreaseDateByXDecadeFaster(Date, 10);
	cout << "12-Subtracting 10 Decades (very Faster) is: " <<
		Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = DecreaseDateByOneCentury(Date);
	cout << "13-Subtracting One Century is: " <<
		Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";

	Date = DecreaseDateByOneMillennium(Date);
	cout << "14-Subtracting One Millennium is: " <<
		Date.Day << "/" << Date.Month << "/" << Date.Year << "\n";


	system("pause>0");
	return 0;
}