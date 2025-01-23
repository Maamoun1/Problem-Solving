#include<iostream>
#include<string>
using namespace std;
/*
write a program to read a date, and print the day name of week
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

string ConcatnateData(short Year, short Month, short Day)
{

	return to_string(Day) + "/" + to_string(Month) + "/" + to_string(Year);
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

int main()
{

	short Year = ReadYear();
	short Month = ReadNumberInRange("\nPlease Enter a Month 1 to 12? ", 1, 12);
	short Day = ReadDay();
	short OrderDay = DayOfWeekOrder(Year, Month, Day);

	cout << "\nDate      : " << ConcatnateData(Year, Month, Day) << "\n";
	cout << "Day Order: " << OrderDay << endl;
	cout << "Day Name : " << DayShortName(OrderDay) << endl;




	system("pause>0");
	return 0;
}