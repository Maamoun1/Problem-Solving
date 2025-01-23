#include<iostream>
using namespace std;
/*
write a program to read a number ,then print all digit frequencey in that number
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

int CountDigitNumber(int DigitToCheck, int Number)
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

void PrintAllDigitFreq(int Number)
{
	short DigitFrequecny = 0;
	
	for (short i = 0; i < 10; i++)
	{
		DigitFrequecny = CountDigitNumber(i, Number);

		if (DigitFrequecny > 0)
		{
			cout << "Digit " << i << " Frequecny is "
				<< CountDigitNumber(i, Number) << " Time(s) " << endl;
		}
	}	
}


int main()
{
	int Number = ReadPostiveNumber("Please Enter a Main Number? ");
	
	PrintAllDigitFreq(Number);



	return 0;
}