#include<iostream>
#include<string>
#include<cctype>
using namespace std;
/*
write a program to read a string then count all vowels in that string
*/
string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}

bool IsVowel(char Letter)
{
	Letter = tolower(Letter);

	return ((Letter == 'a') || (Letter == 'e') || (Letter == 'i') || (Letter == 'o') || (Letter == 'u'));
}

short CountVowelInString(string S1)
{
	short CountVowel = 0;

	for (short i = 0; i < S1.length(); i++)
	{
		if (IsVowel(S1[i]))
			++CountVowel;
	}
	return CountVowel;
}

int main()
{

	string S1 = ReadString();

	cout << "\nNumber Of Vowels is: " << CountVowelInString(S1) << endl;



	return 0;
}