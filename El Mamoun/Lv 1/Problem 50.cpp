#include<iostream>
using namespace std;

/*
 Problem 50: to user, otherwise print “Wong PIN” and ask the user to enter the PIN again.
Only allow user to enter the PIN 3 times, if fails, print “Card is locked!”
 */

string ReadPinCode()
{
	string PinCode{ 0 };

	cout << "\nPlease Enter a PinCode? ";
	cin >> PinCode;

	return PinCode;
}

bool Login()
{
	string PinCode;
	short Counter = 3;
	do
	{
		Counter--;
		PinCode = ReadPinCode();

		if (PinCode == "1234")
			return 1;

		else
		{ 
			system("Color 4F");
			cout << "Wrong PinCode,you have " << Counter << " more Tries";
			
		}

	} while (Counter >=1 && PinCode !="1234");

	return 0;
}


int main()
{

	//if (Login())
	//{
	//	system("\nColor 2F");
	//	cout << "\nYour Balance is: " << 7500 << endl;
	//}
	//else
	//{
	//	cout << "\nYour Card is , Blocked \n";
	//}

	int Totalseconds;
	int Secondsofday = 24 * 60 * 60;
	int Secondsofminutes = 60;
	int Secondsofhours = 60 * 60;
	float secondsperdays;
	float secondsperhours;
	float secondsperminutes;
	float  x = 0;
	cout << "Enter a  Total Seconds??\n";
	cin >> Totalseconds;

	secondsperdays = floor(Totalseconds / Secondsofday);
	x = Totalseconds % Secondsofday;

	secondsperhours = floor(x / Secondsofhours);
	x = Totalseconds % Secondsofhours;

	secondsperminutes = floor(x / Totalseconds);
	x = Totalseconds % Secondsofminutes;

	cout << secondsperdays << ":" << secondsperhours << ":" << secondsperminutes << ":" << x << endl;


	return 0;
}