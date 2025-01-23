#include<iostream>
#include<string>
#include<cctype>
using namespace std;
/*
write a program to read a string then count/small / captial letters in that string
*/
string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}

char InvertCharacterCase(char Ch1)
{
	return (islower(Ch1) ? toupper(Ch1) : tolower(Ch1));

}

string InvertAllLetters(string S1)
{
	for (int i = 0; i < S1.length(); i++)
	{

		S1[i] = InvertCharacterCase(S1[i]);
	}
	return S1;
}

int CountCaptiallLetter(string S1)
{
	int Count = 0;
	for (int i = 0; i < S1.length(); i++)
	{
		if (isupper(S1[i]))
		{
			++Count;
		}
	}
	return Count;
}

int CountSmalllLetter(string S1)
{
	int Count = 0;
	for (int i = 0; i < S1.length(); i++)
	{
		if (islower(S1[i]))
		{
			++Count;
		}
	}
	return Count;
}

int main()
{

	string S1 = ReadString();
	cout << "\nString After Inverting All Letters Case: \n";

	cout << "\nString Length = " << S1.length() << endl;
	cout << "Captial Letters Counts = " << CountCaptiallLetter(S1) << endl;
	cout << "Small Letters Counts   = " << CountSmalllLetter(S1) << endl;



	return 0;
}