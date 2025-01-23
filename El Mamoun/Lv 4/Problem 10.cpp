#include<iostream>
#include<string>
using namespace std;
/*
write a program to print total days from the beginning of year
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

int main()
{

	short Day = ReadDay();
	short Month = ReadNumberInRange("\nPlease Enter a Month? ", 1, 12);
	short Year = ReadYear();


	cout << "\nThe Number of Days From the begining of the year is: "
		<< TotalDayFromTheBegginngYear(Year, Month, Day);






	system("pause>0");
	return 0;
}