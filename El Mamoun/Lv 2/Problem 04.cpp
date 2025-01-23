#include<iostream>
using namespace std;
/*
write a program to print all perfects numbers from 1 to N.
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

bool IsPerfectNumber(int Number)
{
	int Sum = 0;

	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
			Sum += i;

	}
	return Sum == Number;
}

void PrintAllPerfectFrom1ToN(int Number)
{
	int Sum = 0;

	for (int i = 1; i < Number; i++)
	{

		if (IsPerfectNumber(i))
			cout << i << endl;
	}
}


int main()
{

	PrintAllPerfectFrom1ToN(ReadPostiveNumber("Pleae Enter a Postive Number? "));


	return 0;
}