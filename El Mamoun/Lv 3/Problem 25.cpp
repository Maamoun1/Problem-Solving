#include<iostream>
#include<string>
#include<cctype>
using namespace std;
/*
write a program to read a string then lowercase the first letter of each word in that string
*/
string ReadString()
{
	string s1;

	cout << "Please Enter Your String? ";
	getline(cin, s1);

	return s1;
}

string LowerFirstLetterOfEachWord(string S1)
{
	bool IsFirstLetter = true;

	for (int i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ' && IsFirstLetter)
		{
			S1[i] = tolower(S1[i]);
		}
		IsFirstLetter = (S1[i] == ' ' ? true : false);
	}
	return S1;
}

int main()
{

	string S1 = ReadString();
	S1 = LowerFirstLetterOfEachWord(S1);

	cout << "\nString After Conversion: \n";
	cout << S1 << endl;

	return 0;
}