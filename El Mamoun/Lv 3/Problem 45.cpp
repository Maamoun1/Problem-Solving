#include<iostream>
#include<string>
using namespace std;
/*
write a program to read a bank client data record and convert it to one line
*/
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

	cout << "Enter Account Number? ";
	getline(cin, ClintData.AccountNumber);

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

string ConvertDataToRecord(stClintData ClintData,string Seperator)
{
	string StClintRecord = "";

	StClintRecord += ClintData.AccountNumber + Seperator;
	StClintRecord += ClintData.PinCode + Seperator;
	StClintRecord += ClintData.Name + Seperator;
	StClintRecord += ClintData.Phone + Seperator;
	StClintRecord += to_string(ClintData.AccountBalance);

	return StClintRecord;
}


int main()
{
	cout << "Please Enter a Clint Data: \n";

	stClintData ClintData;
	ClintData = ReadNewClint();
	
	cout << "Client Record For Saving is: \n" <<
		ConvertDataToRecord(ClintData, "#//#");


	system("Pause > 0");
	return 0;
}