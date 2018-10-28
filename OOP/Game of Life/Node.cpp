#include"Node.h"

Node::Node(int r,int c,int d,Node* nr,Node* nc)
{
	row=r;
	col=c;
	data=d;
	nextRow=nr;
	nextCol=nc;

}