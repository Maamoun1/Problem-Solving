#include<iostream>
#include<string>
using namespace std;
/*
write a program to read date1 , date2 and check if date1 equals to date2
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

bool IsDate1EqualDate2(stDate Date1, stDate Date2)
{

	return (Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false) : false;
}


int main()
{
	stDate Date1, Date2;
	Date1 = ReadFullDate();
	Date2 = ReadFullDate();

	if (IsDate1EqualDate2(Date1, Date2))
		cout << "\nYes , Date 1 is equal Date2 \n";

	else
		cout << "\No , Date 1 is not equal Date2 \n";

	system("pause>0");
	return 0;
}