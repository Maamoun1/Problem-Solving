#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<iomanip>
using namespace std;
/*
write a program to read a client file and show them on the screen as follows:
*/
struct stClintData
{
	string AccountNumber = "";
	string PinCode = "";
	string Name = "";
	string Phone = "";
	float AccountBalance = 0;
};

string Tabs(short NumberOfTabs)
{
	string t = "";
	for (int i = 1; i < NumberOfTabs; i++)
	{
		t = t + "\t";
	}
	return t;
}

void ShowHeader(short numOfClient)
{
	cout << "\n" << Tabs(5) << "Client List(" << numOfClient << ") Client(s). \n";
	cout << "\n____________________________________________________________________________________________\n\n";

	cout << "| " << left << setw(15) << "Account Number";
	cout << "| " << left << setw(10) << "Pin Code";
	cout << "| " << left << setw(30) << "Client Name";
	cout << "| " << left << setw(15) << "Phone";
	cout << "| " << left << setw(12) << "Balance";

	cout << "\n____________________________________________________________________________________________\n\n";

}

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

void PrintClintRecord(stClintData ClintData)
{

	cout << "| " << setw(15) << left << ClintData.AccountNumber;
	cout << "| " << setw(10) << left << ClintData.PinCode;
	cout << "| " << setw(30) << left << ClintData.Name;
	cout << "| " << setw(15) << left << ClintData.Phone;
	cout << "| " << setw(12) << left << ClintData.AccountBalance;
}

void PrintAllClientData(vector<stClintData>vClintData)
{
	ShowHeader(vClintData.size());

	for (stClintData &Client : vClintData)
	{
		PrintClintRecord(Client);
		cout << endl;
	}
}



int main()
{
	vector<stClintData>vClientData = LoadClientsDataFromFile("MyFile.txt");

	PrintAllClientData(vClientData);

	system("Pause > 0");
	return 0;
}