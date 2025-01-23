#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using namespace std;
/*
write a program to read a string then make a function to split each word in vector
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
		vString.push_back(sword);
	}
	return vString;
}





int main()
{
	vector<string>vString;

	vString = SplitString(ReadString(), " ");

	cout << "Token = " << vString.size() << endl;
	for (string& s1 : vString)
	{
		cout << s1 << endl;
	}

	system("Pause > 0");

	return 0;
}