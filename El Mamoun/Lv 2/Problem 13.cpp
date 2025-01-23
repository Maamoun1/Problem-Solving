#include<iostream>
using namespace std;

/*
write a program to read a number and print inverted patterns
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

void PrintNumberPattern(int Number)
{
	cout << "\n";
	for (short i = 1; i <= Number; i++)
	{
		for (short j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout << "\n";
	}
}


int main()
{

	PrintNumberPattern(ReadPostiveNumber("Please Enter a Postive Number? "));


	return 0;
}