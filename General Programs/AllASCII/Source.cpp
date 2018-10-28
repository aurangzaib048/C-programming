/*Program for displaying all ASCII Codes and characters associated with each code*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int ac = 0;
	cout << "ASCII Codes:\n\n";
	while (ac <= 255)
	{
		cout << setw(5) << static_cast <char> (ac); 		//or	printf("%d = %c\t\t", ac, ac);
		ac++;
	}
	cout << endl;
	return 0;
}