#include<iostream>
#include<string>
#include<cctype>
using namespace std;
/*
write a program to read a string then print all vowels in that string
*/
string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}

bool IsVowel(char Letter)
{
	Letter = tolower(Letter);

	return ((Letter == 'a') || (Letter == 'e') || (Letter == 'i') || (Letter == 'o') || (Letter == 'u'));
}

void PrintAllVowesInString(string S1)
{

	for (short i = 0; i < S1.length(); i++)
	{
		if (IsVowel(S1[i]))
		{
			cout << S1[i] << "   ";
		}
	}
}

int main()
{

	string S1 = ReadString();

	cout << "\nVowels in String are: ";
	PrintAllVowesInString(S1);


	system("Pasuse > 0");

	return 0;
}