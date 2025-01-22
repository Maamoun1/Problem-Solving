#include<iostream>
using namespace std;

/*
 Problem 49: Write a program to read the ATM PIN code from the user, then check if PIN Code = 1234, then show the
balance to user, otherwise print “Wong PIN” and ask the user to enter the PIN again.
 Assume User Balance is 7500.
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

	do 
	{
		PinCode = ReadPinCode();

		if (PinCode == "1234")
			return 1;

		else
		{
			cout << "Wrong PinCode";
			system("Color 4F");
		}

	} while (PinCode != "1234");

	return 0;
}


int main()
{

	if (Login())
	{
		system("\nColor 2F");
		cout << "Your Balance is: 7500";
	}



	return 0;
}