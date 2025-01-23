#include<iostream>
#include<string>
#include<vector>
using namespace std;
/*
write a program to replace words in string using custome function
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

string LowerOfAllString(string s1)
{

	for (short i = 0; i < s1.length(); i++)
	{
		s1[i] = tolower(s1[i]);
	}

	return s1;
}

string JoinString(vector<string>vString, string delim)
{

	string sword = "";

	for (string& s : vString)
	{
		sword = sword + s + delim;
	}
	return sword.substr(0, sword.length() - delim.length());
}

string ReplaceWordsInString(string S1, string StringToReplace, string sReplaceTo,bool MatchCase=true)
{
	vector<string>vString = SplitString(S1, " ");
	
	for (string& s : vString)
	{
		if (MatchCase)
		{
			if (s == StringToReplace)
			{
				s = sReplaceTo;
			}
		}

		else
		{
			if (LowerOfAllString(s) == LowerOfAllString(StringToReplace))
			{
				s = sReplaceTo;
			}
		}

	}
	return JoinString(vString, " ");
}




int main()
{
	string S1 = ReadString();

	cout << "\nOriginal String: \n" << S1 << endl;

	cout << "\n\nReplace with Match case. \n";
	cout << ReplaceWordsInString(S1, "Ali", "Ahmed");

	cout << "\n\nReplace with don`t Match case. \n";
	cout << ReplaceWordsInString(S1, "Ali", "Ahmed", false);



	system("Pause > 0");

	return 0;
}