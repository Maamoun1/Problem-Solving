#include<iostream>
#include<string>
#include<cctype>
using namespace std;
/*
write a program to read a string then count each word in that string
*/
string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}

short CountWordsInString(string S1)
{
	string delim = " ";
	short pos = 0, CountWord = 0;
	string sword = "";

	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sword = S1.substr(0, pos);

		if (sword != "")
		{
			CountWord++;
		}

		S1.erase(0, pos + delim.length());
	}

	if (S1 != "")
	{
		CountWord++;
	}
	return CountWord++;
}

int main()
{

	
	cout << "\nThe Number of words In your String is: " <<
		CountWordsInString(ReadString());



	system("Pause > 0");

	return 0;
}