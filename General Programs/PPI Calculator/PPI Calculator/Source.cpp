/*Program to calculate the "Pixel Density" or "Pixels Per Inch" of a display*/

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	float display, ppi, diagonal;
	int length, width;
	cout << "Enter no. horizontal pixels (width)?\t";
	cin >> length;
	cout << "Enter no. vertical vertical (length)?\t";
	cin >> width;
	cout << "Enter display size diagonally (in inches)?\t";
	cin >> display;
	diagonal = sqrt(pow(length,2) + pow(width,2));
	ppi = diagonal / display;
	cout << "Your display's size is " << display << " and resolution is " << length << " x " << width << ".\n";
	cout << "PIXEL DENSITY(PPI) of your display = \t" << setw(5) << setprecision(2) << fixed << ppi << endl;
	return 0;
}