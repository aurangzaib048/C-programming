#include<iostream>
#include<string>
using namespace std;

int main()
{
	int length, width, area, type, cr_no;
	float cost;
	char crown, cb, glass;
	string color;
	cout << "Enter type of  the frame that you would like to frame:\n1 = Regular frame\n2 = fancy frame\n?\t";
	cin >> type;
	while (type != 1 && type != 2)
	{
		cout << "Please enter only '1' or '2' \nEnter type again?\t";
		cin >> type;
	}
	cout << "Enter length and width of the frame (in inches)?\t";
	cin >> length >> width;
	area = length*width;
	cout << "Area=\t" << area << endl;
	cout << "Do u want to put card-board behind the picture? \n('y'=yes and 'n'=no)\t(y/n)? \t";
	cin >> cb;
	cout << "Do u want to put glass on top of the picture?\n('y'=yes and 'n'=no)\t(y/n)?\t";
	cin >> glass;
	cin.ignore();
	cout << "Enter color that you would like to apply on frame \"In word\"\t";
	getline (cin,color);
	cout << "Do u want to put crown on the frame?\n('y'=yes and 'n'=no)\t(y/n)?\t";
	cin >> crown;
	if (crown == 'y')
	{
		cout << "How many crowns do u want to put on the frame (Max 4)?\t";
		cin >> cr_no;
		while (cr_no > 4)
		{
			cout << "Please enter crowns less than 5.\nEnter number of crowns again(Max 4)?\t";
			cin >> cr_no;
		}
	}
	if (type == 1)
		cost = 0.15*area;
	else
		cost = 0.25*area;
	cout << "Cost(Area)=\t" << cost << endl;
	if (cb == 'y')
		cost = cost + (0.02 * area);
	cout << "Cost(cb)=\t" << cost << endl;
	if (glass == 'y')
		cost = cost + (0.07 * area);
	cout << "Cost(glass)=\t" << cost << endl;
	if (crown == 'y')
		cost = cost + (cr_no * 0.35);
	cout << "Cost(Crown)=\t" << cost << endl;
	if (color!="white")
		cost = cost + (0.10*area);
	cout << "Cost(color)=\t" << cost << endl;
	cout << "Your total cost for applying frame with entered information will be\t$" << cost << endl;
	return 0;
}