#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using namespace std;
/*
write a program to join array of strings into one string with seperators
*/
string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}

string JoinString(vector<string>& vString, string delim)
{
	string S1 = "";

	for (string& s : vString)
	{
		S1 = S1 + s + delim;
	}
	return S1.substr(0, S1.length() - delim.length());
}

string JoinString(string arrString[],short Length, string delim)
{
	string S1 = "";

	for (short i = 0; i < Length; i++)
	{
		S1 = S1 + arrString[i] + delim;

	}
    return S1.substr(0, S1.length() - delim.length());
}



int main()
{
	vector<string>vString{ "Ahmed","Ali","Mamoun","Timo" };
	string arrString[]{ "Ahmed","Ali","Mamoun","Timo" };

	cout << "\nVector After Join: \n";
	cout << JoinString(vString, " ");

	cout << "\n\nArray After Join: \n";
	cout << JoinString(arrString,4, " ");


	system("Pause > 0");

	return 0;
}