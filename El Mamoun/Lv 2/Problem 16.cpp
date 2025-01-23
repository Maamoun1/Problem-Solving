#include<iostream>
using namespace std;
/*
write a program to print all words fromm AAA to ZZZ	
*/

void PrintWordsFromAAAToZZZ()
{
	cout << "\n";
	string word = "";

	for (short i = 65; i <= 90; i++)
	{
		for (short j = 65; j <= 90; j++)
		{
			for (short k = 65; k <= 90; k++)
			{
				word = word + char(i);
				word = word + char(j);
				word = word + char(k);

				cout << word << endl;

				word = "";                            

			}
		}
	}
}


int main()
{

	PrintWordsFromAAAToZZZ();


	return 0;
}