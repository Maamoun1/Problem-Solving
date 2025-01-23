#include<iostream>
#include<string>
#include<cctype>
using namespace std;
/*
write a program to read a string and read a chararcter then count the chararcter in that string 
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


short CountCharacterInString(string S1 , char Ch1)
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


int main()
{

	string S1 = ReadString();
	char Ch1 = ReadChar();

	cout << "Letter \'" << Ch1 << "\' Count = " << CountCharacterInString(S1, Ch1);


	return 0;
}