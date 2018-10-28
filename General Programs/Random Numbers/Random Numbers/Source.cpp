/*Program to display random numbers using function rand()*/

#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
	srand(time(0));
	for (int i = 1; i <= 25; i++)
	{
		
		cout << rand() << "\t";
	}
	cout << endl;
	return 0;
}