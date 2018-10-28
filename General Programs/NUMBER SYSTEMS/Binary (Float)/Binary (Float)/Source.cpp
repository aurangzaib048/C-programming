/*
Program for coverting "Decimal (Float) number into Binary".
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	long long  rem, i = 1, binary_D = 0, binary_F = 0, decimal, fractional1;
	float num, temp, fractional;
	cout << "Enter the float to be converted?\t";
	cin >> num;

	temp = num;
	decimal = num;									//Seperate Decimal part
	fractional = num - decimal;						//Seperate Fractionalal part

	cout << "Decimal Part =\t" << decimal << "\nFractional Part =\t" <<setprecision(3)<<fixed<< fractional << endl;

	do												//Converts Decimal part into Binary
	{
		rem = decimal % 2;
		binary_D = binary_D + (i*rem);
		decimal = decimal / 2;
		i = i * 10;
	} while (decimal > 0);

	if (fractional != 0)
	{
		long long i = 1;
		while (fractional / 1.0 != static_cast<int>(fractional) / 1)		//converts fractional part into decimal
			fractional *= 10;

		fractional1 = fractional;
		while (fractional1 > 1000)			//Reduce Fractional part to 4 digits
			fractional1 /= 10;

		do									//Converts Fractional part into Binary
		{
			rem = fractional1 % 2;
			binary_F = binary_F + (i*rem);
			fractional1 /= 2;
			i *= 10;
		} while (fractional1 > 0);
	}
	
	cout << "Binary of " << temp << " is:\n" << binary_D;		//Displays binary of Decimal part
	if (fractional != 0)
		cout << "." << binary_F;							//Displays binary of Fractional part
	cout << endl;
	return 0;
}