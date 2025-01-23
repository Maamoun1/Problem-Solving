#include<iostream>
#include<string>
using namespace std;
/*
write a program to print month calender
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

short NumberOfDaysInAMonth(short Year, short Month)
{
	short arrMonth[] = { 31,IsLeapYear(Year) ? 29 : 28,31,30,31,
		30,31,31,30,31,30,31 };

	return arrMonth[Month - 1];
}

short DayOfWeekOrder(short Year, short Month, short Day)
{
	short a = 0, y = 0, m = 0;

	a = (14 - Month) / 12;
	y = Year - a;
	m = (Month + 12 * a - 2);

	return (Day + y + (y / 4) - (y / 100) + (y / 400) + (31 * m / 12)) % 7;
}

string DayShortName(short NameOfDay)
{
	string DayOfName[7] = { "Sunday","Monday","Tuesday","Wednesday",
	"Thursday","Friday","Saturdat"
	};

	return DayOfName[NameOfDay];
}

string MonthShortName(short MonthNumber)
{
	string MonthShortName[12] = { "Jan","Feb","Mar","Apr",
	"May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"
	};

	return MonthShortName[MonthNumber - 1];
}

void PrintMonthCalnder(short Year, short Month)
{
	int NumberOfDays;

	int Current = DayOfWeekOrder(Year, Month, 1);
	NumberOfDays = NumberOfDaysInAMonth(Year, Month);

	printf("\n_______________%s____________________\n\n",
		MonthShortName(Month).c_str());

	printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat \n");

	int i;
	for (i = 0; i < Current; i++)
		printf("     ");

	for (short j = 1; j <= NumberOfDays; j++)
	{

		printf("%5d", j);

		if (++i == 7)
		{
			i = 0;
			printf("\n");
		}
	}
}



int main()
{

	short Year = ReadYear();
	short Month = ReadNumberInRange("\nPlease Enter a Month 1 to 12? ", 1, 12);

	PrintMonthCalnder(Year, Month);







	system("pause>0");
	return 0;
}