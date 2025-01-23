#include<iostream>
#include<string>
#include<vector>
using namespace std;
/*
write a program to replace words in strings.
*/
string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}

string ReplaceWordsInStringUsingBulitFunction(string S1,string StringToReplace,string sReplaceTo)
{
	short pos = S1.find(StringToReplace);

	while (pos !=std::string::npos)
	{
		S1.replace(pos, StringToReplace.length(), sReplaceTo);
		pos = S1.find(StringToReplace);

	}
	return S1;				
}




int main()
{
	string S1 = ReadString();

	cout << "\nOriginal String: \n" << S1 << endl;
	
	cout << "\nString After Replace: ";
	cout<<ReplaceWordsInStringUsingBulitFunction(S1, "Ali", "Ahmed");

	system("Pause > 0");

	return 0;
}