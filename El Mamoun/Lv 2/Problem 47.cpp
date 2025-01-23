#include<iostream>
#include<cmath>
using namespace std;
/*
write a program to print round of numbers , don not use built in round function.

*/
float GetFractionPart(float Number)
{
	float Fraction = 0;
	Fraction = Number - int(Number);
	
	return Fraction;
}

float MyRound(float Number)
{
	int IntPart = 0;
	
	IntPart = int(Number);
	float FractionPart = GetFractionPart(Number);

	if (abs(FractionPart) > 0.5)
	{
		if (Number > 0)
			return ++IntPart;
		else
			return --IntPart;
	}
	else
	{
		return IntPart;
	}
}

float ReadNumber()
{
	float number = 0;

	cout << "Please Enter a Number? ";
	cin >> number;

	return (float)number;

}


int main()
{
	float Number = ReadNumber();

	cout << "\nMy Round Result: " << MyRound(Number) << endl;
	cout << "\nMy C++ Result  : " << round(Number) << endl;




	return 0;
}