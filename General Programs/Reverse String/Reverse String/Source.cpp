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
	cin.getline(str,80);
	cin.ignore();

	for (l = 0; str[l] != '\0'; l++);    //finding length of string
	
	for (int i = 0, j = l - 1; i < l /2; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}

	cout << "Reverse String is\t" << str<<endl;
	return 0;
}