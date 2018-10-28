/*Program for checking whether the entered number is perfect square or not*/

#include <iostream>

using namespace std;

int main()
{
	int n,a1;
	float a;
	cin >> n;
	a1 = sqrt(n);				//stores sqrt result in float
	a = sqrt(n);				//stores sqrt result in int i.e, without decimal
	if (a1 != a)				//if float!=int then it means that the number has some froctional part or it is not a perfect square
		cout << "Number is not perfect square" << endl;
	else
		cout << "Number is perfect square" << endl;
	return 0;
}