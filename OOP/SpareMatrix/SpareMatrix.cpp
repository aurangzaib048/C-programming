#include"SparseMatrix.h"
#include<iostream>

using namespace std;


SparseMatrix:: SparseMatrix()
{
	head=new Node(-1,-1,0,0,0);
}


void SparseMatrix::InsertCell(int r, int c, int val)
{
	Node * data=new Node(r,c,val,0,0);
	
	if(isExisting(r,c))
	{
		Node * curR=head;
	
		Node * eRow=head;
	
		while(curR->nextRow!=NULL)
		{
			if(r==curR->nextRow->row)
			{
				eRow=curR->nextRow;
				break;
			}
			curR=curR->nextRow;
		}
		curR=eRow;
		while(curR->nextCol!=NULL)
		{
			if(c==curR->nextCol->col)
			{
				curR->nextCol->data=val;
				break;
			}
			curR=curR->nextCol;
		}
		delete data;
		data=0;
	}

	
	else if(!IsExistRow(r) && !IsExistCol(c))
	{
		Node * nCol=new Node(-1,c,0,0,0);
		Node * nRow=new Node(r,-1,0,0,0);

		Node * curR=head;
		Node * curC=head;
		if(head->nextRow==NULL)
		{
			head->nextRow=nRow;
		}
		else if(head->nextRow->row>r)
		{
			Node * temp=curR->nextRow;
			head->nextRow=nRow;
			nRow->nextRow=temp;
		}
		else 
		{
			while(curR->nextRow!=NULL && curR->nextRow->row<r)
			{
				curR=curR->nextRow;
			}
			if(curR->nextRow==NULL)
			{
				curR->nextRow=nRow;
			}
			else
			{
				Node * temp=curR->nextRow;
				curR->nextRow=nRow;
				nRow->nextRow=temp;
			}

		}

		if(head->nextCol==NULL)
		{
			head->nextCol=nCol;
		}
		else if(head->nextCol->col>c)
		{
			Node * temp=curC->nextCol;
			head->nextCol=nCol;
			nCol->nextCol=temp;
		}
		else 
		{
			while(curC->nextCol!=NULL && curC->nextCol->col<c )
			{
				curC=curC->nextCol;
			}
			if(curC->nextCol==NULL)
			{
				curC->nextCol=nCol;
			}
			else
			{
				Node * temp=curC->nextCol;
				curC->nextCol=nCol;
				nCol->nextCol=temp;
			}

		}
		

		nRow->nextCol=data;
		nCol->nextRow=data;

	}
	else if(IsExistRow(r) && IsExistCol(c))
	{
		Node * curR=head;
		Node * curC=head; 
		Node * eRow;
		Node * eCol;

		while(curR->nextRow!=NULL)
		{
			if(r==curR->nextRow->row)
			{
				eRow=curR->nextRow;
				break;
			}

			curR=curR->nextRow;
		}
		curR=eRow;
		while(curR->nextCol!=NULL && curR->nextCol->col<c)
		{
			curR=curR->nextCol;
		}
		if(curR->nextCol==NULL)
		{
			curR->nextCol=data;
		}
		else
		{
			Node * temp=curR->nextCol;
			curR->nextCol=data;
			data->nextCol=temp;
		}

		while(curC->nextCol!=NULL)
		{
			if(c==curC->nextCol->col)
			{
				eCol=curC->nextCol;
				break;
			}

			curC=curC->nextCol;
		}
		curC=eCol;
		while(curC->nextRow!=NULL && curC->nextRow->row<r)
		{
			curC=curC->nextRow;
		}
		if(curC->nextRow==NULL)
		{
			curC->nextRow=data;
		}
		else
		{
			Node * temp=curC->nextRow;
			curC->nextRow=data;
			data->nextRow=temp;
		}

	}
	else if(IsExistRow(r))
	{
		if(!IsExistCol(c))
		{
			Node * curR=head;
			Node * curC=head; 
			Node * nCol=new Node(-1,c,0,0,0);
			
			Node * eRow;
			

			while(curR->nextRow!=NULL)
			{
				if(r==curR->nextRow->row)
				{
					eRow=curR->nextRow;
					break;

				}

				curR=curR->nextRow;
			}
			curR=eRow;
			while(curR->nextCol!=NULL && curR->nextCol->col<c)
			{
				curR=curR->nextCol;
			}
			if(curR->nextCol==NULL)
			{
				curR->nextCol=data;
			}
			else
			{
				Node * temp=curR->nextCol;
				curR->nextCol=data;
				data->nextCol=temp;
			}

			if(head->nextCol==NULL)
			{
				head->nextCol=nCol;
			}
			else if(head->nextCol->col>c)
			{
				Node * temp=curC->nextCol;
				head->nextCol=nCol;
				nCol->nextCol=temp;
			}
			else 
			{
				while(curC->nextCol!=NULL && curC->nextCol->col<c )
				{
					curC=curC->nextCol;
				}
				if(curC->nextCol==NULL)
				{
					curC->nextCol=nCol;
				}
				else
				{
					Node * temp=curC->nextCol;
					curC->nextCol=nCol;
					nCol->nextCol=temp;
				}

			}
			
			nCol->nextRow=data;
		}
		
	}
	else if(IsExistCol(c))
	{
		if(!IsExistRow(r))
		{
			Node * curR=head;
			Node * curC=head; 
			Node * nRow=new Node(r,-1,0,0,0);
			Node * eCol;

			while(curC->nextCol!=NULL)
			{
				if(c==curC->nextCol->col)
				{
					eCol=curC->nextCol;
					break;
				}

				curC=curC->nextCol;
			}
			curC=eCol;
			while(curC->nextRow!=NULL && curC->nextRow->row<r)
			{
				curC=curC->nextRow;
			}
			if(curC->nextRow==NULL)
			{
				curC->nextRow=data;
			}
			else
			{
				Node * temp=curC->nextRow;
				curC->nextRow=data;
				data->nextRow=temp;
			}

			if(head->nextRow==NULL)
			{
				head->nextRow=nRow;
			}
			else if(head->nextRow->row>r)
			{
				Node * temp=curR->nextRow;
				head->nextRow=nRow;
				nRow->nextRow=temp;
			}
			else 
			{
				while(curR->nextRow!=NULL && curR->nextRow->row<r )
				{
					curR=curR->nextRow;
				}
				if(curR->nextRow==NULL)
				{
					curR->nextRow=nRow;
				}
				else
				{
					Node * temp=curR->nextRow;
					curR->nextRow=nRow;
					nRow->nextRow=temp;
				}

			}
			nRow->nextCol=data;

		}
	}



}

void SparseMatrix::RemoveCell(int r, int c)
{
	if(isExisting(r,c))
	{
		Node * curR=head;
		Node * eRow=head;

		while(curR->nextRow!=NULL)
		{
			if(r==curR->nextRow->row)
			{
				eRow=curR->nextRow;
				break;
			}
			curR=curR->nextRow;
		}
		curR=eRow;
		while(curR->nextCol!=NULL)
		{
			if(c==curR->nextCol->col)
			{
				delete curR->nextCol;
				curR->nextCol=0;
				break;
			}
			curR=curR->nextCol;
		}
	}
	else
		cout<<"Not Exsists"<<endl;
}

bool SparseMatrix::isExisting(int r, int c)
{
	bool flag=false;
	Node * curR=head;
	Node * eRow=head;
	while(curR->nextRow!=NULL)
	{
		if(r==curR->nextRow->row)
		{
			eRow=curR->nextRow;
			flag=true;
			break;
		}
		curR=curR->nextRow;
	}
	if(flag)
	{
		flag=false;
		curR=eRow;
		while(curR->nextCol!=NULL)
		{
			if(c==curR->nextCol->col)
			{
				flag=true;
				break;
			}
			curR=curR->nextCol;
		}
	}
	return flag;
}

bool SparseMatrix::IsExistRow(int r)
{
	bool flag=false;
	Node* t=head;
	while(t->nextRow!=NULL)
	{
		if(r==t->nextRow->row)
		{
			flag=true;
		}
		t=t->nextRow;
	}
	return flag;

}

bool SparseMatrix::IsExistCol(int c)
{
	bool flag=false;
	Node* t=head;
	while(t->nextCol!=NULL)
	{
		if(c==t->nextCol->col)
		{
			flag=true;
		}
		t=t->nextCol;
	}
	return flag;

}


Node* SparseMatrix::getPointertoCell(int r, int c)
{
	if(isExisting(r,c))
	{
		Node * temp;

		Node * curR=head;
		Node * curC=head; 

		Node * eRow;
			

		while(curR->nextRow!=NULL)
		{
			if(r==curR->nextRow->row)
			{
				eRow=curR->nextRow;
				break;
			}

			curR=curR->nextRow;
		}
		curR=eRow;
		while(curR->nextCol!=NULL && curR->nextCol->col!=c)
		{
			curR=curR->nextCol;
		}
		
		temp=curR->nextCol;

		return temp;
	
	}
	else
		return NULL;
}

void SparseMatrix::display()
{
	consoleHandle.setConsoleTitle("Sparse Matrix");
	//consoleHandle.SetColor(blue,red);
	system("cls");
	Node * curR=head;
	Node *curC;
	while(curR->nextRow!=NULL)
	{
		curC=curR->nextRow;
		while(curC->nextCol!=NULL)
		{
			consoleHandle.SetCursorAt(curR->nextRow->row,curC->nextCol->col);
			Sleep(600);
			cout<<curC->nextCol->data;
			curC=curC->nextCol;
		}
		curR=curR->nextRow;
	}


}

SparseMatrix::~SparseMatrix()
{
	Node * dR=head;
	Node * dC;
	Node * rN;
	while(dR->nextRow!=NULL)
	{
		dC=dR->nextRow;
	
		while(dC->nextCol!=NULL)
		{
			rN=dC->nextCol;
			if(rN->nextCol!=NULL)
			{
				dC->nextCol=rN->nextCol;
			}
			delete rN;
			rN=0;
			if(dC->nextCol->row<-1)
			{
				dC->nextCol=0;
			}
		}
		if(dR->nextRow->nextRow!=NULL)
		{
			dR->nextRow=dC->nextRow;
		}
		if(dC->nextRow==NULL)
		{
			dR->nextRow=0;
		}
		delete dC;
	}

	while(head!=NULL)
	{
		dC=head;
		head=head->nextCol;
		delete dC;
		dC=0;
	}

}