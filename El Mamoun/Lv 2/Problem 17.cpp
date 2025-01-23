#include<iostream>
using namespace std;
/*
write a program to guess a 3-letter password (all captial)
*/
string ReadPassword()
{
	string Password;

	cout << "Please Enter Your Password 3 letter (all Captial)? \n";
	cin >> Password;

	return Password;
}

bool GuessPassword(string OriginalPassword)
{
	cout << "\n";
	string word = "";
	int CountTrial = 0;

	for (short i = 65; i <= 90; i++)
	{
		for (short j = 65; j <= 90; j++)
		{
			for (short k = 65; k <= 90; k++)
			{
				word = word + char(i);
				word = word + char(j);
				word = word + char(k);

				++CountTrial;
				cout << "Trial[" << CountTrial << "]: " << word << endl;

				if (word == OriginalPassword)
				{		
					cout << "\nPassword is " << word << endl;
					cout << "Found After " << CountTrial << " Trial(s) \n";
					return true;
				}
				word = "";
			}
		}
	}
	return false;
}


int main()
{

	GuessPassword(ReadPassword());

	return 0;
}