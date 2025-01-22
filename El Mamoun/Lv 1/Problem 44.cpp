#include<iostream>
using namespace std;

/*
Problem 44: Write a program to ask the user to enter:
 • Day
 Then print the day as follows:
 • 1 Print Sunday
 • 2 Print Monday
 • 3 Print Tuesday
 • 4 Print Wednesday
 • 5 Print Thursday
 • 6 Print Friday
 • 7 Print Saturday
 • Otherwise print “Wrong Day” and ask the use to enter the day again.
*/

enum enDayOfWeek { Sat = 1, Sun = 2, Mon = 3, Tue = 4, Thur = 5, Fri = 6, Wends = 7 };

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

enDayOfWeek ReadDayOfWeek()
{
	return (enDayOfWeek)ReadNumberInRange("Please Enter a Number Day? ", 1, 7);
}

string GetDayOfWeek(enDayOfWeek Day)
{

	switch (Day)
	{
	case enDayOfWeek::Sun:
		return "Its Sunday";
		break;
	case enDayOfWeek::Mon:
		return "Its Monday";
		break;
	case enDayOfWeek::Tue:
		return "Its Tuesday";
		break;
	case enDayOfWeek::Wends:
		return "Its Wednesday";
		break;
	case enDayOfWeek::Thur:
		return "Its Thurday";
		break;
	case enDayOfWeek::Fri:
		return "Its Friday";
		break;
	case enDayOfWeek::Sat:
		return "Its Saturday";
		break;

	default:
		return "Wriong Day";
	}
}

int main()
{

	cout << GetDayOfWeek(ReadDayOfWeek());


	return 0;
}