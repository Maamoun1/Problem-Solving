#include<iostream>
using namespace std;
/*
write a program read a digit and a number , then print digit frequency in that number
*/

int ReadPostiveNumber(string message)
{
	int number{ 0 };
	do
	{
		cout << message;
		cin >> number;

	} while (number < 0);

	return number;
}

int CountDigitNumber(int DigitToCheck , int Number)
{
	int Remainder = 0, CountFreq = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;

		if (DigitToCheck == Remainder)
			++CountFreq;

	}
	return CountFreq;
}


int main()
{
	int Number = ReadPostiveNumber("Please Enter a Main Number? ");
	int DigitToCheck = ReadPostiveNumber("Please Enter a Number to Check? ");

	cout << "\nDigit " << DigitToCheck << " "
		<< "Frequency is" << CountDigitNumber(DigitToCheck, Number);

	return 0;
}