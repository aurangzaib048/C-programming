/*
Summary: Reverses a given string
*/

#include<iostream>
using namespace std;

int main()
{
	char str[80];
	int temp, l;
	cout << "Enter string :";
	cin.getline(str, 80);
	cin.ignore();
	for (l = 0; str[l] != '\0'; l++);    //finding length of string
	//cout << "l="<<l<<"\tl/2="<<l/2<<endl;
	cout << "Reverse String is\t";
	for (int i = l - 1; i >= 0; i--)
	{
		cout << str[i];
	}
	cout << endl;
	return 0;
}