#include<iostream>
#include<string>
#include<vector>
using namespace std;
/*
write a program to convert line data to record and print it.
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

vector<string> SplitString(string S1, string delim)
{
	vector<string>vString;

	short pos = 0, CountWord = 0;
	string sword = "";

	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sword = S1.substr(0, pos);

		if (sword != "")
		{
			vString.push_back(sword);
		}

		S1.erase(0, pos + delim.length());
	}

	if (S1 != "")
	{
		vString.push_back(S1);
	}
	return vString;
}

stClintData ConvertLineToRecord(string Line,string Seperator)
{
	vector<string>vClintData;
	stClintData ClintData;

	vClintData = SplitString(Line, "#//#");

	ClintData.AccountNumber = vClintData.at(0) ;
	ClintData.PinCode = vClintData.at(1) ;
	ClintData.Name = vClintData.at(2) ;
	ClintData.Phone = vClintData.at(3) ;
	ClintData.AccountBalance =stod( vClintData.at(4));

	return ClintData;
}

void PrintClintData(stClintData ClintData)
{

	cout << "Account Number  : " << ClintData.AccountNumber << "\n";
	cout << "Pin Code        : " << ClintData.PinCode << "\n";
	cout << "Name            : " << ClintData.Name << "\n";
	cout << "Phone           : " << ClintData.Phone << "\n";
	cout << "Account Balacne : " << ClintData.AccountBalance << "\n";

}



int main()
{
	string S2 = "A105#//#1234#//#Mamoun#//#044778#//#5000#//#";
	stClintData ClintData;

	cout << "\nLine Record is: \n" << S2 << endl;
	ClintData = ConvertLineToRecord(S2, "#//#");

	cout << "\nThe Following is the extracted Clint Record. \n";
	PrintClintData(ClintData);

	system("Pause > 0");
	return 0;
}