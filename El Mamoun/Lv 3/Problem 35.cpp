#include<iostream>
#include<string>
#include<cctype>
using namespace std;
/*
write a program to read a string then print each word in that string
*/
string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}

void PrintEachWordInString(string S1)
{
	string delim = " ";
	short pos = 0;
	string sword = "";

	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sword = S1.substr(0, pos);

		if (sword != "")
		{
			cout << sword << endl;
		}

		S1.erase(0, pos + delim.length());
	}

	if (S1 != "")
	{
		cout << S1 << endl;
   }

}

int main()
{
	
     PrintEachWordInString(ReadString());



	system("Pause > 0");

	return 0;
}