#include<iostream>
#include<string>
#include<cctype>
using namespace std;
/*
write a program to read a string and read a character then count the chararcter in that string 
*/
string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}

char ReadChar()
{
	char Ch1;
	cout << "Please Enter a Character?\n";
	cin >> Ch1;
	return Ch1;
}

char InvertLetterCase(char char1)
{
	return isupper(char1) ? tolower(char1) : toupper(char1);
}

short CountCharacterInString(string S1, char Ch1)
{
	int Count = 0;

	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] == Ch1)
		{
			++Count;
		}
	}
	return Count;
}

short CountNumberInString(string S1 , char Letter,bool MatchCase=true)
{
	int Counter = 0;

	for (int i = 0; i < S1.length(); i++)
	{		
		if (MatchCase)
		{
			if (S1[i] == Letter)
				++Counter;
		}

		else
		{
			if (tolower(S1[i]) == tolower(Letter))
				++Counter;
		}
	}
	return Counter;
}



int main()
{

	string S1 = ReadString();
	char Ch1 = ReadChar();

	cout << "\nLetter \'" << Ch1 << "\' Count = " << CountCharacterInString(S1, Ch1);
	cout << "\nLetter \'" << Ch1;
	cout << "\'Or \'" << InvertLetterCase(Ch1) << "\' Count = ";
	cout << CountNumberInString(S1, Ch1, false);


	return 0;
}