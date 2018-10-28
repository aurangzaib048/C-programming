/*Program that searches the entered character (non-spaced) in the entered string (of length 50) and displays it's number of occurences*/

#include <iostream>
using namespace std;

int main()
{
	char string[51], ch;
	int count=0,l;
	cout << "Enter String?\t";
	cin.getline(string, 51);
	cin.ignore();
	cout << "Enter character that you want to search in the string?\t";
	cin >> ch;

	for (l = 0; string[l] != '\0'; l++);

	for (int i = 0; i <= l; i++)
	{
		if (string[i] == ch)
			count++;
	}

	cout << "Entered character occurs in the string " << count << " times\n";
	return 0;
}