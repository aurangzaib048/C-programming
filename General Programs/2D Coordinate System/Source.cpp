#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cout << "Enter x and y?\n";
	cin >> x >> y;
	if (x>0)
	{
		if (y>0)
			cout << "First Quadrent \n";
		else if (y<0)
			cout << " Fourth Quadrent \n";
		else if (y == 0)
			cout << " x-axis \n";
	}
	else if (x < 0)
	{
		if (y > 0)
			cout << " Second Quadrent \n";
		else if (y < 0)
			cout << " Third Quadrent \n";
		else if (y == 0)
			cout << " x-axis\n";
	}
	else if (x == 0)
	{
		if (y == 0)
			cout << " Origin\n";
		else if (y != 0)
			cout << " y-axis\n";
	}
	return 0;
}