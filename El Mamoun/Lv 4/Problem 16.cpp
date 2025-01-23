#include<iostream>
#include<string>
using namespace std;
/*
write a program to read a date and make a function to increse date by one day
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



int main()
{

	stDate Date;
	Date = ReadFullDate();

	Date = IncreaseDateByOneDay(Date);

	cout << "\nDate After Adding One Day is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;


	system("pause>0");
	return 0;
}