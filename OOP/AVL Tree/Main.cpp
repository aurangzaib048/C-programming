#include"AVL.h"
#include<iostream>

using namespace std;

int main()
{
	AVL<int> A;
	avlNode<int>* find;
	avlNode<int>* pfind;
	bool done;
	int choice;
	char ch;

	//A.Insert(7);
	//A.Insert(2);
	//A.Insert(20);
	//A.Insert(1);
	//A.Insert(4);
	//A.Insert(15);
	//A.Insert(3);
	//A.Insert(5);
	//A.Insert(8);			//rr

	//A.Insert(25);
	//A.Insert(30);			//ll

	//A.Insert(18);			//rl

	//A.Insert(10);
	//A.Insert(16);
	//A.Insert(19); 
	//A.Insert(17);			//lr

	A.Insert(50);
	A.Insert(17);
	A.Insert(76);
	A.Insert(9);
	A.Insert(23);
	A.Insert(54);
	A.Insert(14);
	A.Insert(19);
	A.Insert(72);
	A.Insert(12);
	A.Insert(67);
	/*A.Insert(22);
	A.Insert(25);
	A.Insert(28);
	A.Insert(33);
	A.Insert(2);
	A.Insert(7);
	A.Insert(9);
	A.Insert(12);
	A.Insert(14);
	A.Insert(18);
	A.Insert(20);
	A.Insert(24);
	A.Insert(27);
	A.Insert(30);
	A.Insert(32);
	A.Insert(1);
	A.Insert(4);
	A.Insert(6);
	A.Insert(11);
	A.Insert(17);
	A.Insert(29);
	A.Insert(3);*/

	/*A.Insert(1);
	A.Insert(2);
	A.Insert(3);
	A.Insert(4);
	A.Insert(5);
	A.Insert(6);*/

	/*A.Insert(7);
	A.Insert(8);
	A.Insert(9);*/
	
	
	do
	{
		cout<<"\t\tMenu"<<endl;
		cout<<"1. Insert"<<endl;
		cout<<"2. Search"<<endl;
		cout<<"3. Delete"<<endl;
		cout<<"4. Print Sidewise Tree"<<endl;
		cout<<"5. Print Level-Order Tree"<<endl;
		

		cout<<endl;
		cout<<"Enter Choice: ";
		cin>>choice;
	
		
		switch (choice)
		{
		case 1:
			int data;
			cout<<"Enter Data: ";
			cin>>data;
			done=A.Insert(data);
			if(done)
				cout<<"Data is inserted "<<endl;
			else
				cout<<"Data is not inserted "<<endl;
			break;
		case 2:
			int key;
			cout<<"Enter Data: ";
			cin>>key;
			//find=A.SearchTree(key,pfind);
			if(find==0)
				cout<<"NOt found"<<endl;
			else
			{
				cout<<"Found";
				cout<<pfind->data;
			}
			
			break;
		case 3:
			int del;
			cout<<"Which elemet want to remove: ";
			cin>>del;
			done=A.remove(del);
			if(done)
				cout<<"Removed "<<endl;
			else
				cout<<"Not found "<<endl;		
			break;
		case 4:
			cout<<"Tree is(Sideway): "<<endl;
			//A.PrintTree();
			break;
		case 5:
			cout<<"Tree is(LevelOrder): "<<endl;
			//A.levelOrder();
			break;

		default:
			cout<<"Invalid Choice";
			break;
		}

		cout<<endl<<"DO u want to enter again(y/n)";
		cin>>ch;

	}while(ch=='y' || ch=='Y');

	
	


	return 0;
}