#include<iostream>
using  namespace std;

/*
 Problem 5: Write a program to ask the user to enter his/her:• Age • Driver license • Has Recommendation!
 Then Print “Hired” if his\her age is grater than 21 and s/he has a driver license, otherwise Print “Rejected” Or Hire him\her without conditions!
 */

struct stPersonInfo
{
	short age = 0;
	bool HasDeriverLicence;
	bool DoYouHaveRecommandion;
};

stPersonInfo ReadPersonInfo()
{
	stPersonInfo Info;

	cout << "Please Enter Your Age? ";
	cin >> Info.age;

	cout << "Do you have Drive Licence? ";
	cin >> Info.HasDeriverLicence;

	cout << "Do You Have Recommandation? ";
	cin >> Info.DoYouHaveRecommandion;


	return Info;

}

bool IsAccecpted(stPersonInfo  Info)
{
	if (Info.DoYouHaveRecommandion)
		return true;

	else
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