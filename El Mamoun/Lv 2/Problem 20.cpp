#include<iostream>
#include<cstdlib>
using namespace std;
/*
write a program to print random small letter , captial letter,speical character and digit in order.
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


int main()
{
	srand((unsigned)time(NULL));

	cout << GetRandomCharcter(enCharType::CaptialLetter) << endl;
	cout << GetRandomCharcter(enCharType::SmallLetter) << endl;
	cout << GetRandomCharcter(enCharType::SpecialCharacter) << endl;
	cout << GetRandomCharcter(enCharType::Digit) << endl;


	return 0;
}