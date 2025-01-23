#include<iostream>
#include<string>
using namespace std;
/*
write a program to print total days from the beginning of year then,
take the total days and convert them back to date
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

struct stData
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

short TotalDayFromTheBegginngYear(short Year, short Month, short Day)
{
	short TotalDays = 0;

	for (short i = 1; i < Month; i++)
	{
		TotalDays += NumberOfDaysInAMonth(Year, i);
	}

	return (TotalDays + Day);
}

stData GetDateFromDayOrderInYear(short DateOrderInYear, short Year)
{
	stData Date;
	short RemainningDays = DateOrderInYear;
	short MonthDays = 0;

	Date.Year = Year;
	Date.Month = 1;

	while (true)
	{
		MonthDays = NumberOfDaysInAMonth(Year, Date.Month);

		if (RemainningDays > MonthDays)
		{
			RemainningDays -= MonthDays;
			++Date.Month;
		}
		else
		{
			Date.Day = RemainningDays;
			break;
		}
	}
	return Date;
}



int main()
{

	short Day = ReadDay();
	short Month = ReadNumberInRange("\nPlease Enter a Month? ", 1, 12);
	short Year = ReadYear();
	short DaysOrderInYears = TotalDayFromTheBegginngYear(Year, Month, Day);

	cout << "\nThe Number of Days From the begining of the year is: "
		<< DaysOrderInYears << "\n\n";

	stData Date;
	Date = GetDateFromDayOrderInYear(DaysOrderInYears, Year);

	cout << "Date For [" << DaysOrderInYears << "] is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	system("pause>0");
	return 0;
}