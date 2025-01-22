#include<iostream>
using namespace std;

/*
 Problem 8: Write a program to ask the user to enter: • Mark Then Print the “PASS” if mark >=50, otherwise print “Fail”
*/

enum enPassOrFail { Pass = 1, Fail = 2 };

short ReadMark()
{
	short Mark;

	cout << "\nPlease Enter Your Matk? ";
	cin >> Mark;

	return Mark;
}

enPassOrFail CheckMark(short Mark)
{

	if (Mark >= 50)
		return enPassOrFail::Pass;

	else
		return enPassOrFail::Fail;
}

void PrintFailOrPass(short Mark)
{

	if (CheckMark(Mark)==enPassOrFail::Pass)
		cout << "\nYou are Pass \n";

	else
		cout << "\nYou are Fail \n";
}


int main()
{

	PrintFailOrPass(ReadMark());

	return 0;
}