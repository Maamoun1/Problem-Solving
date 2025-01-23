#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<iomanip>
using namespace std;
/*
write a program to update client by accountnumber
*/
struct stClintData
{
	string AccountNumber = "";
	string PinCode = "";
	string Name = "";
	string Phone = "";
	float AccountBalance = 0;
	bool MarkForDelete = false;
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

string ConvertRecordToLine(stClintData& ClintData, string seperator = "#//#")
{
	string stClintRecord = "";

	stClintRecord += ClintData.AccountNumber + seperator;
	stClintRecord += ClintData.PinCode + seperator;
	stClintRecord += ClintData.Name + seperator;
	stClintRecord += ClintData.Phone + seperator;
	stClintRecord += to_string(ClintData.AccountBalance);

	return stClintRecord;
}

void PrintClintData(stClintData& Info)
{
	cout << "\nThe Following are the client details: \n\n";

	cout << "Account Number: " << Info.AccountNumber << endl;
	cout << "Pind Code     : " << Info.PinCode << endl;
	cout << "Name          : " << Info.Name << endl;
	cout << "phone         : " << Info.Phone << endl;
	cout << "Account Balance :  " << Info.AccountBalance << endl;
}

vector<stClintData> SaveClientDataToFile(string fileName, vector<stClintData>& vClientData)
{
	string DataLine;
	fstream myFile;

	myFile.open(fileName, ios::out);

	if (myFile.is_open())
	{
		for (stClintData& C : vClientData)
		{
			if (C.MarkForDelete == false)
			{
				DataLine = ConvertRecordToLine(C);
				myFile << DataLine << endl;

			}
		}
		myFile.close();
	}
	return vClientData;
}

bool FindClientByAccountNumber(vector<stClintData>& vClientData, stClintData& ClientData, string AccountNumber)
{

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

bool MarkClientForDeleteByAccountNumber(string AccountNumber, vector<stClintData>& vClientData)
{
	for (stClintData& C : vClientData)
	{
		if (C.AccountNumber == AccountNumber)
		{
			C.MarkForDelete = true;
			return true;
		}
	}

	return false;
}

stClintData ChangeClientRecord(string AccountNumber)
{
	stClintData Client;
	Client.AccountNumber = AccountNumber;
	cout << "\n\nEnter PinCode? ";
	getline(cin >> ws, Client.PinCode);
	cout << "Enter Name? ";
	getline(cin, Client.Name);
	cout << "Enter Phone? ";
	getline(cin, Client.Phone);
	cout << "Enter AccountBalance? ";
	cin >> Client.AccountBalance;
	return Client;
}

string ReadClientAccountNumber()
{
	string S1;
	cout << "Please Enter Your AccountNumber?\n";
	getline(cin, S1);

	return S1;
}

bool UpdateClientByAccountNumber(vector<stClintData>& vClientData, string AccountNumber)
{
	stClintData Client;
	char Answer = 'n';

	if (FindClientByAccountNumber(vClientData, Client, AccountNumber))
	{
		PrintClintData(Client);

		cout << "\nAre you sure you want delete the client? ";
		cin >> Answer;

		if (tolower(Answer == 'y'))
		{

			for (stClintData &C : vClientData)
			{
				if (C.AccountNumber == AccountNumber)
				{
					C = ChangeClientRecord(AccountNumber);
					break;
				}
			}

			SaveClientDataToFile("MyFile.txt", vClientData);

			cout << "\n\nClient Updated Successfully. ";
			return true;
		}
	}

	else
	{
		cout << "\nClient with Account Number(" << AccountNumber << ") not Found ! \n";
		return false;
	}
}



int main()
{
	vector<stClintData>vClientData = LoadClientsDataFromFile("MyFile.txt");
	string AccountNumber = ReadClientAccountNumber();

	UpdateClientByAccountNumber(vClientData, AccountNumber);





	system("Pause > 0");
	return 0;
}