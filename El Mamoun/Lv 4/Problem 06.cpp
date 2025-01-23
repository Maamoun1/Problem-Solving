#include<iostream>
using namespace std;
/*
write a program to print number of days in a certain month
*/
short ReadYear()
{
	short Year;
	cout << "\nPlease Enter a Year to Check? ";
	cin >> Year;
	return Year;
}

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
	return  (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);

}

short NumberOfDaysInAMonth(short Year, short Month)
{
	short DaysOfMonth[] = { 0,31,IsLeapYear(Year) ? 29 : 28,31,30,31,30,31,31,30,31,30,31 };

	return DaysOfMonth[Month];
}

short AnotherNumberOfDaysInAMonth(short Year, short Month)
{
	short DaysOfMonth[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : DaysOfMonth[Month - 1];
}


short NumberOfHoursInAMonth(short Year, short Month)
{
	return ((NumberOfDaysInAMonth(Year, Month)) * 24);
}

int NumberOfMinutesInAYear(short Year, short Month)
{
	return (NumberOfHoursInAMonth(Year, Month) * 60);
}

int NumberOfSecondsInAYear(short Year, short Month)
{
	return (NumberOfMinutesInAYear(Year, Month) * 60);
}





int main()
{

	short Year = ReadYear();
	short Month = ReadNumberInRange("\nPlease Enter a Month 1 to 12? ", 1, 6);

	cout << "The Num Of Days    in  Month[" << Year << "] is "
		<< NumberOfDaysInAMonth(Year, Month) << endl;
	cout << "The Num Of Hours   in  Month[" << Year << "] is "
		<< NumberOfHoursInAMonth(Year, Month) << endl;
	cout << "The Num Of Minute  in  Month[" << Year << "] is "
		<< NumberOfMinutesInAYear(Year, Month) << endl;
	cout << "The Num Of Seconds in  Month[" << Year << "] is "
		<< NumberOfSecondsInAYear(Year, Month) << endl;


	system("pause>0");
	return 0;
}