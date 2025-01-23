#include<iostream>
#include<string>
#include<vector>
using namespace std;
/*
write a program to remove all punctuations from a string
*/
string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}

string RemovePunctuationsFromString(string S1)
{
	string S2 = "";

	for (short i = 0; i < S1.length(); i++)
	{
		if (!ispunct(S1[i]))
		{
			S2 = S2 + S1[i];
		}
	}
	return S2;
}


int main()
{
	string S1 = ReadString();

	cout << "\nOriginal String. \n" << S1 << endl;

	cout << "\nPauncation Removed. \n";
	cout << RemovePunctuationsFromString(S1) << endl;




	system("Pause > 0");

	return 0;
}