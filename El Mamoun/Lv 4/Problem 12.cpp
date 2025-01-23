#include<iostream>
#include<string>
using namespace std;
/*
write a program to read date and read how many days to add it , print the results on the screen
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

short ReadDaysToAdd()
{
	short Day;
	cout << "\nHow Many Days to add? ";
	cin >> Day;
	return Day;
}

short NumberOfDaysInAMonth(short Year, short Month)
{
	short arrMonth[] = { 31,IsLeapYear(Year) ? 29 : 28,31,30,31,
		30,31,31,30,31,30,31 };

	return arrMonth[Month - 1];
}

short TotalDayFromTheBegginngYear(short Year, short Month, short Day)
{
	short TotalDays = 0;

	for (short i = 1; i < Month; i++)
	{
		TotalDays += NumberOfDaysInAMonth(Year, i);
	}

	return (TotalDays + Day);
}

stDate DateAddDays(short Day, stDate Date)
{

	short RemainingDays = Day + TotalDayFromTheBegginngYear(Date.Year, Date.Month, Date.Day);
	short MonthDays = 0;

	Date.Month = 1;

	while (true)
	{
		MonthDays = NumberOfDaysInAMonth(Date.Year, Date.Month);

		if (RemainingDays > MonthDays)
		{
			RemainingDays -= MonthDays;
			Date.Month++;
			if (Date.Month > 12)
			{
				++Date.Year;
				Date.Month = 1;
			}
		}
		else
		{
			Date.Day = RemainingDays;
			break;
		}
	}
	return Date;
}


int main()
{
	stDate Date = ReadFullDate();
	short Day = ReadDaysToAdd();

	Date = DateAddDays(Day, Date);
	cout << "\nDate After Adding [" << Day << "] days is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;


	system("pause>0");
	return 0;
}