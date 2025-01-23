#include<iostream>
using namespace std;
/*
write a program to read a number and print it inverted letter pattern as follow?

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

void PrintInvertedLetter(int Number)
{
	cout << "\n";
	for (short i = 65 + Number - 1; i >= 65 ; i--)
	{
		for (short j = 1; j <= Number-(65 + Number - 1 - i); j++)
		{
			cout << char(i);
		}
		cout << "\n";
	}
}


int main()
{

	PrintInvertedLetter(ReadPostiveNumber("Please Enter a Postive Number? "));


	return 0;
}