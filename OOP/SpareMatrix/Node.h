#ifndef NODE_H
#define NODE_H

class Node
{
	int row;
	int col;
	int data;
	Node* nextRow;
	Node* nextCol;
	friend class SparseMatrix;

public:
	Node(int r=0,int c=0,int d=0,Node* nr=0,Node* nc=0);

};





#endif