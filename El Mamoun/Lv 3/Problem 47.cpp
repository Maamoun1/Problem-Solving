#include<iostream>
#include<string>
#include<fstream>
#include<vector>
using namespace std;
/*
write a program to ask you to enter clients and save them to file.
*/
string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}

struct stClintData
{
	string AccountNumber = "";
	string PinCode = "";
	string Name = "";
	string Phone = "";
	float AccountBalance = 0;
};

stClintData ReadNewClint()
{
	stClintData ClintData;
	cout << "\n\nAdding New Clint: \n";

	cout << "Enter Account Number? ";
	getline(cin >> ws, ClintData.AccountNumber);

	cout << "Enter PinCode? ";
	getline(cin, ClintData.PinCode);

	cout << "Enter Name? ";
	getline(cin, ClintData.Name);

	cout << "Enter Phone? ";
	getline(cin, ClintData.Phone);

	cout << "Enter Account Balance? ";
	cin >> ClintData.AccountBalance;

	return ClintData;
}

string ConvertRecordToLine(stClintData& ClintData, string seperator)
{
	string stClintRecord = "";

	stClintRecord += ClintData.AccountNumber + seperator;
	stClintRecord += ClintData.PinCode + seperator;
	stClintRecord += ClintData.Name + seperator;
	stClintRecord += ClintData.Phone + seperator;
	stClintRecord += to_string(ClintData.AccountBalance) ;


	return stClintRecord;
}

void AddDataLineToFile(string Line,string FileName="MyFile.txt")
{
	fstream myFile;

	myFile.open(FileName, ios::out | ios::app);

	if (myFile.is_open())
	{
		myFile << Line << "\n";

		myFile.close();
	}
}

void AddClint()
{
	stClintData ClintData;
	ClintData = ReadNewClint();
	AddDataLineToFile(ConvertRecordToLine(ClintData, "#//#"));
}

void AddNewClint()
{
	char AddMore = 'Y';

	do
	{
		system("Cls");
		cout << "Adding New Client: \n";

		AddClint();
		cout << "\nClient Added Successfully, do you want to add more Clients? ";
		cin >> AddMore;

	} while (toupper(AddMore) == 'Y');

}




int main()
{

	AddNewClint();

	

	system("Pause > 0");
	return 0;
}