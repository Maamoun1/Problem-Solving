#include<iostream>
#include<string>
using namespace std;
/*
write a program to read a string then print the first letter of each word in that string
*/
string ReadString()
{
	string s1;

	cout << "Please Enter Your String? ";
	getline(cin, s1);

	return s1;
}

void PrintFirstLetterOfEachWord(string S1)
{
	bool IsFirstLetter = true;

	for (int i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ' && IsFirstLetter)
		{
			cout << S1[i] << endl;
		}
	
		IsFirstLetter = (S1[i] == ' ' ? true : false);
	}
}

int main()
{

	PrintFirstLetterOfEachWord(ReadString());

	return 0;
}