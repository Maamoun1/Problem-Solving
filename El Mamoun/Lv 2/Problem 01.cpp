#include<iostream>
using namespace std;
/*
write a program print the multiplication table from 1 to 10 as follow:
*/

void PrintHeader()
{
	cout << "\n\n\t\t\t\t Multiplication Table From 1 To 10 \n\n";

	for (short i = 1; i <= 10; i++)
	{
		cout << "\t" << i;
	}

	cout << "\n_________________________________________________";
	cout << "__________________________________ \n";
}

string ColumnSeperator(int Number)
{
	if (Number < 10)
		return "   |";

	else if (Number < 100)
		return"  |";

	else
		return" |";
}

void MultiplicationTableFrom1To12()
{
	PrintHeader();
	
	for (short i = 1; i <= 10; i++)
	{
		cout << " " << i << ColumnSeperator(i) << "\t";
		for (short j = 1; j <= 10; j++)
		{
			cout << (i * j) << "\t";
		}
		cout << endl;
	}
}



int main()
{

	MultiplicationTableFrom1To12();

	return 0;
}