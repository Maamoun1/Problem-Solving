#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<iomanip>
using namespace std;
/*
write a program to find client by accountnumber and print it to the screen
*/
struct stClintData
{
	string AccountNumber = "";
	string PinCode = "";
	string Name = "";
	string Phone = "";
	float AccountBalance = 0;
};

vector<string> SplitString(string S1, string Delim)
{
	vector<string> vString;
	short pos = 0;
	string sWord;

	while ((pos = S1.find(Delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);
		if (sWord != "")
		{
			vString.push_back(sWord);
		}

		S1.erase(0, pos + Delim.length());

	}
	if (S1 != "")
	{
		vString.push_back(S1);
	}

	return vString;
}

stClintData ConvertLineToRecord(string s1, string seperator)
{
	stClintData ClintData;
	vector<string> vClintData;

	vClintData = SplitString(s1, seperator);

	ClintData.AccountNumber = vClintData.at(0);
	ClintData.PinCode = vClintData.at(1);
	ClintData.Name = vClintData.at(2);
	ClintData.Phone = vClintData.at(3);
	ClintData.AccountBalance = stod(vClintData.at(4));

	return ClintData;
}

vector<stClintData> LoadClientsDataFromFile(string FileName)
{
	fstream MyFile;
	vector<stClintData>vClientData;
	stClintData ClientData;

	MyFile.open(FileName, ios::in);

	if (MyFile.is_open())
	{
		string line;

		while (getline(MyFile, line))
		{
			ClientData = ConvertLineToRecord(line, "#//#");
			vClientData.push_back(ClientData);

		}
		MyFile.close();
	}
	return vClientData;
}

void PrintClintData(stClintData& Info)
{

	cout << "Account Number: " << Info.AccountNumber << endl;
	cout << "Pind Code     : " << Info.PinCode << endl;
	cout << "Name          : " << Info.Name << endl;
	cout << "phone         : " << Info.Phone << endl;
	cout << "Account Balance :  " << Info.AccountBalance << endl;
}

bool FindClientByAccountNumber(stClintData &ClientData,string AccountNumber)
{
	vector<stClintData>vClientData = LoadClientsDataFromFile("MyFile.txt");
	
	for (stClintData& C : vClientData)
	{
		if (C.AccountNumber == AccountNumber)
		{
			ClientData = C;
			return true;
		}
	}
	return false;	
}

string ReadClientAccountNumber()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);

	return S1;
}


int main()
{	
	stClintData ClientData;
	string AccountNumber = ReadClientAccountNumber();

	if (FindClientByAccountNumber(ClientData, AccountNumber))
	{
		PrintClintData(ClientData);
	}
	else
	{
		cout << "\nClient with Account Number (" << ClientData.AccountNumber << " is not Found \n";
	}



	system("Pause > 0");
	return 0;
}