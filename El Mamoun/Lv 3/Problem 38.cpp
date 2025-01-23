#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using namespace std;
/*
write a program to read a string then trim left,right,all
*/
string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}

string TrimLeft(string S1)
{

	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] !=' ')
		{
			return S1.substr(i, S1.length() - i);
		}
	}
	return "";
}

string TrimRight(string S1)
{

	for (short i = S1.length()-1; i >= 0; i--)
	{
		if (S1[i] != ' ')
		{
			return S1.substr(0, i + 1);
		}
	}
	return "";
}

string Trim(string S1)
{
	return TrimLeft(TrimRight(S1));
}


int main()
{
	string S1 = ReadString();

	cout << "Trim Left  = " << TrimLeft(S1) << endl;
	cout << "Trim Right = " << TrimRight(S1) << endl;
	cout << "Trim = " << Trim(S1) << endl;

	system("Pause > 0");

	return 0;
}