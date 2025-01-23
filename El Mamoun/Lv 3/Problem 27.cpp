#include<iostream>
#include<string>
#include<cctype>
using namespace std;
/*
write a program to read a chararcter then invert it is case and print it.
*/
char ReadChar()
{
	char Ch1;
	cout << "\nPlease Enter Your Char? \n";
	cin >> Ch1;

	return Ch1;
}

char InvertCharacterCase(char Ch1)
{
	return (islower(Ch1) ? toupper(Ch1) : tolower(Ch1));
	
}


int main()
{

	char Ch1 = ReadChar();
	cout << "\nChar After Inverting Case: \n";

	Ch1 = InvertCharacterCase(Ch1);
	cout << Ch1 << endl;


	return 0;
}