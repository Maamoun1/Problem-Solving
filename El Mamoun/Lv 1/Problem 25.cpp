#include<iostream>
using namespace std;

/*
  Write a program to ask the user to enter :• Age If age is between 18 and 45 print “Valid Age” otherwise print
“Invalid Age” and re-ask user to enter a valid age
 */

short ReadAge()
{
	int Age;

	cout << "\nPlease Enter Your Age Between 18 and 45? \n";
	cin >> Age;

	return Age;
}

bool ValidateNumberInRange(int Age, int From, int To)
{
	return (Age > From && Age < To);

}

short ReadUntilAgeBetween(int From , int To)
{
	short Age;

	do 
	{
		Age = ReadAge();


	} while (!ValidateNumberInRange(Age, 18, 45));

	return Age;
}

void PrintResult(short Age)
{

	if (ValidateNumberInRange(Age, 18, 45))
		cout << Age << " is Valid Age\n";
	else
	{
		cout << Age<< "is InValid Age\n";
	}
}


int main()
{

	PrintResult(ReadUntilAgeBetween(18,45));


	return 0;
}