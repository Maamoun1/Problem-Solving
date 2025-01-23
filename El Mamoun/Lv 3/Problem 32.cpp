#include<iostream>
#include<string>
#include<cctype>
using namespace std;
/*
write a program to read a character the check if it is vowel or not
*/
char ReadChar()
{
	char Ch1;
	cout << "Please Enter a Character?\n";
	cin >> Ch1;
	return Ch1;
}

bool IsVowel(char Letter)
{
	Letter = tolower(Letter);
	
	return ((Letter == 'a') || (Letter == 'e') || (Letter == 'i') || (Letter == 'o') || (Letter == 'u'));
}


int main()
{

	char Ch1 = ReadChar();

	if (IsVowel(Ch1))
		cout << "\nYes: Letter \'" << Ch1 << "\' is Vowel. \n";
	else
		cout << "\No: Letter \'" << Ch1 << "\' is not Vowel. \n";

	

	return 0;
}