#include<iostream>
using namespace std;

/*
 Problem 33: Write a program to ask the user to enter:
 • Grade
 Then print the grade as follows:
 • 90 –100 Print A
 • 80 –89   Print B
 • 70 –79   Print C
 • 60 –69   Print D
 • 50 –59   Print E
 • Otherwise Print F
*/

int ReadNumberInRange(int From, int To)
{
	int Number = 0;

	do 
	{
		cout << "\nPlease Enter Number Between " << From << " and " << To << "? ";
		cin >> Number;

	} while (Number < From || Number > To);
	
	return Number;
}

char GetGradeLetter(int Grade)
{

	if (Grade >= 90)
		return 'A';

	else if (Grade >= 80)
		return 'B';

	else if (Grade >= 70)
		return 'C';

	else if (Grade >= 60)
		return 'D';

	else if (Grade >= 50)
		return 'E';
	else
		return 'F';
}

int main()
{
	cout << GetGradeLetter(ReadNumberInRange(0, 100));

	return 0;
}