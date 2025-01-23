#pragma warning(disable :4996)
#include<iostream>
#include<string>
#include<ctime>
using namespace std;
/*
write a program to read date1 ,date2 and check if date1 is after date2 or not.
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


int main()
{

	stDate Date1 = ReadFullDate();
	stDate Date2 = ReadFullDate();

	if (IsDate1AfterDate2(Date1, Date2))
		cout << "\nYes, Date1 is After Date2. \n";
	else
		cout << "\nYes, Date1 is not After Date2. \n";






	system("Pause > 0");
	return 0;
}