#include<iostream>
using  namespace std;

/*
 Problem 4 :Write a program to ask the user to enter his/her: • Age • Driver license
 Then Print “Hired” if his\her age is grater than 21 and s/he has a driver license, otherwise Print “Rejected”
*/

struct stPersonInfo 
{
	short age = 0;
	bool HasDeriverLicence;
};

stPersonInfo ReadPersonInfo()
{
	stPersonInfo Info;

	cout << "Please Enter Your Age? ";
	cin >> Info.age;

	cout << "Do you have Drive Licence? ";
	cin >> Info.HasDeriverLicence;

	return Info;
}

bool IsAccecpted(stPersonInfo  Info)
{

	return(Info.age > 21 && Info.HasDeriverLicence);
		
}

void PrintResult(stPersonInfo Info)
{

	if (IsAccecpted(Info))
		cout << "Your Hired \n";
	else
		cout << "Your Rejected \n";

}


int main()
{
	PrintResult(ReadPersonInfo());

	return 0;
}