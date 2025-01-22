#include<iostream>
using namespace std;

/*
 Problem 6: Write a program to ask the user to enter: • First Name • Last Name Then Print Full Name on screen.
 */

struct stPersonInfo
{
	string FirstName;
	string LastName;

};

stPersonInfo ReadPersonInfo()
{
	stPersonInfo PersonInfo;

	cout << "Please Enter Your First Name? ";
	cin >> PersonInfo.FirstName;

	cout << "Please Enter Your First Name? ";
	cin >> PersonInfo.LastName;

	return PersonInfo;
}

string GetFullName(stPersonInfo PersonInfo)
{
	string FullName = "";

	FullName = PersonInfo.FirstName + " " + PersonInfo.LastName;

	return FullName;
}

void PrintFullName(string FullName)
{

	cout << "\nYour Full Name is: " << FullName;

}


int main()
{

	PrintFullName(GetFullName(ReadPersonInfo()));


	return 0;
}