#include<iostream>
#include<string>
#include<cctype>
using namespace std;
/*
write a program to read a string then invert all it is letter`s case and print it.
*/
string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}

char InvertCharacterCase(char Ch1)
{
	return (islower(Ch1) ? toupper(Ch1) : tolower(Ch1));

}

string InvertAllLetters(string S1)
{
	for (int i = 0; i < S1.length(); i++)
	{

		S1[i] = InvertCharacterCase(S1[i]);
	}
	return S1;
}

int main()
{

	string S1 = ReadString();
	cout << "\nString After Inverting All Letters Case: \n";

	S1 = InvertAllLetters(S1);
	cout << S1 << endl;


	return 0;
}