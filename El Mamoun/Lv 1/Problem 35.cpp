#include<iostream>
using namespace std;

/*
 Problem 35: Write a program to ask the user to enter:
 • Pennies, Nickels, Dimes, Quarters, Dollars
 Then calculate the total pennies , total dollars and print them on screen
 giving that:
 • Penny = 1
 • Nickel = 5
 • Dime = 10
 • Quarter = 25
 • Dollar = 100
*/

struct stPiggPank
{
	float Penny;
	float Nickle;
	float Dime;
	float Quarter;
	float Dollar;
};

stPiggPank ReadPiggyPankContent()
{
	stPiggPank PiggPank;

	cout << "\nPlease Enter Number of Penny? ";
	cin >> PiggPank.Penny;

	cout << "\nPlease Enter Number of Nickle? ";
	cin >> PiggPank.Nickle;

	cout << "\nPlease Enter Number of Dime? ";
	cin >> PiggPank.Dime;

	cout << "\nPlease Enter Number of Quater? ";
	cin >> PiggPank.Quarter;

	cout << "\nPlease Enter Number of Dollar? ";
	cin >> PiggPank.Dollar;

	return PiggPank;
}

int CalculateTotalPennies(stPiggPank PiggPank)
{

	int TotalPennies = 0;

	TotalPennies = PiggPank.Penny * 1 + PiggPank.Nickle * 5 + PiggPank.Dime * 10 + PiggPank.Quarter * 25 + PiggPank.Dollar * 100;

	return TotalPennies;
}

float CalculateTotalDollar(float TotalPennies)
{
	return TotalPennies / 100;
}


int main()
{

	int TotalPennies = CalculateTotalPennies(ReadPiggyPankContent());

	cout << "Total Pennies = " << TotalPennies << endl;
	cout << "Total Dollar  = " << (float)TotalPennies / 100;

	return 0;
}