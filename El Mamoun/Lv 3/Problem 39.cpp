#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using namespace std;
/*
write a program to join vector of strings into a one string with seperators
*/
string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}

string JoinString(vector<string>&vString,string delim)
{
	string S1 = "";

	for (string &s : vString)
	{
		S1 = S1 + s + delim;
	}
	return S1.substr(0, S1.length() - delim.length());
}



int main()
{
	vector<string>vString{ "Ahmed","Ali","Mamoun","Timo" };

	cout << "\nVector After Join: \n";
	cout << JoinString(vString, " ");

	system("Pause > 0");

	return 0;
}