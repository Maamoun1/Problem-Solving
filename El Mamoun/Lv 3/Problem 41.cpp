#include<iostream>
#include<string>
#include<vector>
using namespace std;
/*
write a program to read string and reverse its words
*/
string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}

vector<string> SplitString(string S1, string delim)
{
	vector<string>vString;

	short pos = 0, CountWord = 0;
	string sword = "";

	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sword = S1.substr(0, pos);

		if (sword != "")
		{
			vString.push_back(sword);
		}

		S1.erase(0, pos + delim.length());
	}

	if (S1 != "")
	{
		vString.push_back(S1);
	}
	return vString;
}

string ReverseWordsInString(string S1,string delim)
{
	vector<string>vString;

	vString = SplitString(S1, " ");

	string S2 = "";

	for (short i = vString.size()-1; i >= 0; i--)
	{
		S2 = S2 + vString.at(i) + delim;
	}
	return S2.substr(0, S2.length() - delim.length());
}



int main()
{
	string S1 = ReadString();
	
	cout << ReverseWordsInString(S1, " ");


	system("Pause > 0");

	return 0;
}