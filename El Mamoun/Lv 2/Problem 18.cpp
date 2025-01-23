#include<iostream>
using namespace std;
/*
write a program to read a text and encrypt it , decrypt it
*/

string ReadText()
{
	string Text = "";

	cout << "\nPlease Enter Your Text? ";
	cin >> Text;

	return Text;
}

string EncryptText(string Text, short EncryptKey)
{
	
	for (short i = 0; i < Text.length(); i++)
	{
		Text[i] = char((int)Text[i] + EncryptKey);
	}

	return Text;
}

string DecryptText(string Text, short EncryptKey)
{
	
	for (short i = 0; i < Text.length(); i++)
	{
		Text[i] = char((int)Text[i] - EncryptKey);

	}

	return Text;
}



int main()
{
	short EncryptKey = 2;
	string Text = ReadText();

	string TextAfterEncrypt = EncryptText(Text, EncryptKey);
	string TextAfterDecrypt = DecryptText(TextAfterEncrypt, EncryptKey);

	cout << "\nText Before Encryption  : " << Text << endl;
	cout << "Text After Encryption   : " << TextAfterEncrypt << "\n";
	cout << "Text After DEncryption  : " << TextAfterDecrypt << "\n";

	return 0;
}