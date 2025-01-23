#include<iostream>
using namespace std;
/*
write a program to a program to read how many keys to generate and fill them in array then print them oSn the screen
*/

enum enCharType { CaptialLetter = 1,SmallLetter = 2,SpecialCharacter = 3,Digit = 4 };

int RandomNumber(int From, int To)
{

	int randNumber = rand() % (To - From + 1) + From;

	return randNumber;
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

string GenerateWord(enCharType CharType, short Length)
{
	string word = "";

	for (short i = 1; i <= Length; i++)
	{
		word = word + GetRandomCharcter(CharType);
	}

	return word;
}

string GenerateKey(string Seperator = "-")
{
	string Key = "";

	Key = Key + GenerateWord(enCharType::CaptialLetter, 4) + Seperator;
	Key = Key + GenerateWord(enCharType::CaptialLetter, 4) + Seperator;
	Key = Key + GenerateWord(enCharType::CaptialLetter, 4) + Seperator;
	Key = Key + GenerateWord(enCharType::CaptialLetter, 4);

	return Key;
}

void FillArrayWithKeys(string arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = GenerateKey();
	}
}

void PrintStringArray(string arr[100], int arrLength)
{
	cout << "\n";

	for (int i = 0; i < arrLength; i++)
	{
		cout << "Array[" << i << "]: " << arr[i] << endl;
	}
	cout << endl;
}



int main()
{
	srand((unsigned)time(NULL));

	string arr[100];
	int arrLength;
	arrLength = ReadPostiveNumber("How Many Keys do you need? ");

	FillArrayWithKeys(arr, arrLength);

	cout << "\nArray  elements : \n";
	PrintStringArray(arr, arrLength);
	

	return 0;
}