#include<iostream>
#include<cmath>
using namespace std;
/*
write a program to print abs of numbers , don not use built in abs function.
*/

int MyAbs(int Number)
{

	if (Number > 0)
		return Number;

	else
		return Number * -1;
}


int main()
{
	
	cout << "My Abs Result  : " << MyAbs(-10) << endl;
	cout << "C++ abs Result : " << abs(-10) << endl;


	return 0;
}