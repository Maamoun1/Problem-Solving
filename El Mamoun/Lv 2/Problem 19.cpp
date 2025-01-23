#include<iostream>
#include<cstdlib>
using namespace std;
/*
write a program to print 3 random numbers from 1 to 10.
*/
int RandomNumber(int From, int To)
{
	int random = rand() % (To - From + 1) + From;	
	return random;
}


int main()
{

	srand((unsigned)time(NULL));
	cout << RandomNumber(1,10) << endl;

	return 0;
}