#include<iostream>
#include<cstdlib>
using namespace std;
/*
write a program to read how many keys to generate and print them on the screen.
*/
enum enCharType { SmallLetter = 1, CaptialLetter = 2, Digit = 3, SpecialCharacter = 4 };

int RandomNumber(int From, int To)
{

	int random = rand() % (To - From + 1) + From;
	return random;
}

char GetRandomCharcter(enCharType CharType)
{

	switch (CharType)
	{
	case enCharType::CaptialLetter:
		return char(RandomNumber(65, 90));

	case enCharType::SmallLetter:
		return char(RandomNumber(97, 122));

	case enCharType::SpecialCharacter:
		return char(RandomNumber(33, 47));

	case enCharType::Digit:
		return char(RandomNumber(48, 57));
	}
}

int ReadPostiveNumber(string message)
{
	int number{ 0 };
	do
	{
		cout << message;
		cin >> number;

	} while (number < 0);

	return number;
}

string GenerateWord(enCharType CharType , short Length)
{
	string word = "";

	for (short i = 1; i <= Length; i++)
	{
		word = word + GetRandomCharcter(CharType);
	}

	return word;
}

string GenerateKey(string Seperator= "-")
{
	string Key = "";
	
	Key = Key + GenerateWord(enCharType::CaptialLetter,4) + Seperator;
	Key = Key + GenerateWord(enCharType::CaptialLetter, 4) + Seperator;
	Key = Key + GenerateWord(enCharType::CaptialLetter, 4) + Seperator;
	Key = Key + GenerateWord(enCharType::CaptialLetter, 4);

	return Key;
}

void GenerateKeys(short HowManyKeys)
{
	cout << "\n";

	for (short i = 1 ;i<= HowManyKeys; i++)
	{
		cout << "Key[" << i << "]: " 
			 << GenerateKey() << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	GenerateKeys(ReadPostiveNumber("How Many Keys Do you want? "));

	return 0;
}