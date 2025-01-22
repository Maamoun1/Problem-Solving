#include<iostream>
using namespace std;

/*
  Problem 24:Write a program to ask the user to enter :• Age If age is between 18 and 45 print “Valid Age” otherwise print “Invalid Age”
 */

short ReadAge()
{
	int Age;

	cout << "\nPlease Enter Your Age? \n";
	cin >> Age;

	return Age;
}

bool ValidateNumberInRange(int Age,int From,int To)
{
	return (Age > From && Age < To);
}

void PrintResult(short Age)
{

	if (ValidateNumberInRange(Age, 18, 45))
		cout << Age << " is Valid Age";
	else
		cout << Age << "is InValid Age";
}


int main()
{

	PrintResult(ReadAge());

	return 0;
}