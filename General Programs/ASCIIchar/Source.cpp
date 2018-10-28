/*Program for displaying character against entered ASCII Code until the user press '0'*/

#include <iostream>
using namespace std;

int main()
{
	int ac;
	cout << "Enter code (0-255)?\t";
	cin>>ac;
	do
	{
		cout << "Character against ASCII Code " << ac << " is\t" << static_cast<char>(ac) << "\n\n";
		cout << "Enter code again or\nTo end program press '0'?" << "\n";
		cin >> ac;
	} while (ac != 0);
	return 0;
}