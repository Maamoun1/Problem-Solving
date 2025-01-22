#include<iostream>
#include<string>
using namespace std;
/*
Problem 2: Write a program to ask the use to enter his/her name and  print it on screen.
*/

string ReadName()
{
	string Name;

	cout << "\nPlease Enter Your Name? ";
	getline(cin, Name);
	
	return Name;
}

void PrintName(string name)
{
	cout << "Your Name is " << name << endl;
}


int main()
{

	PrintName(ReadName());

	return 0;
}