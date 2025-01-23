#include<iostream>
using namespace std;
/*
write a program to print number of:
.days
.hours
.Minutes
.Seconds
in a certain year
*/
short ReadYear()
{
	short Year;
	cout << "\nPlease Enter a Year to Check? ";
	cin >> Year;
	return Year;
}

bool IsLeapYear(short Year)
{
	return  (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);

}
short NumberOfDaysInAYear(short Year)
{
	return IsLeapYear(Year) ? 366 : 365;

}
short NumberOfHoursInAYear(short Year)
{
	return ((NumberOfDaysInAYear(Year)) * 24);
}
int NumberOfMinutesInAYear(short Year)
{
	return (NumberOfHoursInAYear(Year) * 60);
}

int NumberOfSecondsInAYear(short Year)
{
	return (NumberOfMinutesInAYear(Year) * 60);
}



int main()
{

	short Year = ReadYear();

	cout << "The Num Of Days    in  Year[" << Year << "] is "
		<< NumberOfDaysInAYear(Year) << endl;
	cout << "The Num Of Hours   in  Year[" << Year << "] is "
		<< NumberOfHoursInAYear(Year) << endl;
	cout << "The Num Of Minute  in  Year[" << Year << "] is "
		<< NumberOfMinutesInAYear(Year) << endl;
	cout << "The Num Of Seconds in  Year[" << Year << "] is "
		<< NumberOfSecondsInAYear(Year) << endl;


	system("pause>0");
	return 0;
}