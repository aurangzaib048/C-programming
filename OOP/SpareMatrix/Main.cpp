#include"SparseMatrix.h"

int main()
{
	SparseMatrix obj;
	int n;
	int choice;
	int r,c,dt;
ag:	cout<<"\t\t Menu"
		<<endl<<"1. Insert data"
		<<endl<<"2. Display"
		<<endl<<"3. Remove"<<endl;
	cout<<"------------------------------------";
	cout<<endl<<"Enter choice: ";
	cin>>choice;

	switch(choice)
	{
	case 1:
		cout<<"Enter Row: ";
		cin>>r;
		while(r<0)
		{
			cout<<"Invalid"<<" Enter again: ";
			cin>>r;
		}
		cout<<"Enter Col: ";
		cin>>c;
		while(c<0)
		{
			cout<<"Invalid"<<" Enter again: ";
			cin>>c;
		}
		cout<<endl<<"Enter data: ";
		cin>>dt;

		obj.InsertCell(r,c,dt);
		break;

	case 2:
		obj.display();
		break;

	case 3:
		cout<<"Enter row to remove: ";
		cin>>r;
		cout<<"Enter col to remove: ";
		cin>>c;
		obj.RemoveCell(r,c);
		break;

	default:
		cout<<"Nothing "<<endl;
		break;

	}
	cout<<endl;
	char ch;
	cout<<"Do u want to show menu : ";
	cin>>ch;
	if(ch=='Y' || ch=='y')
	{
		system("cls");
		goto ag;
	}
	

	return 0;
}