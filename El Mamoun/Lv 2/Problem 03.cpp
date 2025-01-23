#include<iostream>
using namespace std;
/*
write a program to check if the number is perfect of not?
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

void PrintResult(int Number)
{

	if (IsPerfectNumber(Number))

		cout << Number << " is Perfect \n";

	else
		cout << Number << " is not Perfect \n";
}

int main()
{

	PrintResult(ReadPostiveNumber("Please Enter a Postive Number? "));

	return 0;
}