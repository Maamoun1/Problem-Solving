#include<iostream>
#include<string>
#include<cctype>
using namespace std;
/*s
write a program to read a string then uppper all letters,then lower all letters and print themS
*/
string ReadString()
{
	string s1;

	cout << "Please Enter Your String? ";
	getline(cin, s1);

	return s1;
}

string LowerAllLetters(string S1)
{
	bool IsFirstLetter = true;

	for (int i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ')
		{
			S1[i] = tolower(S1[i]);
		}
		IsFirstLetter = (S1[i] == ' ' ? true : false);
	}
	return S1;
}

string UpperAllLetters(string S1)
{
	bool IsFirstLetter = true;

	for (int i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ')
		{
			S1[i] = toupper(S1[i]);
		}
		IsFirstLetter = (S1[i] == ' ' ? true : false);
	}
	return S1;
}



int main()
{

	string S1 = ReadString();
	
	cout << "\nString After Upper: \n" << UpperAllLetters(S1) << endl;
	cout << "\nString After Lower: \n" << LowerAllLetters(S1) << endl;

	return 0;
}