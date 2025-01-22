#include<iostream>
using namespace std;

/*
Problem 46: Write a program to print all letters from A to Z
*/

void PrintAllLetterFromAToZ()
{

	for (short i = 65; i <= 90; i++)
	{
		cout << char(i) << endl;
	}
}


int main()
{

	PrintAllLetterFromAToZ();

	return 0;
}