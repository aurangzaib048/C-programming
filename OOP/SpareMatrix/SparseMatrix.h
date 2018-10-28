#ifndef SPARSEMATRIX_H
#define SPARSEMATRIX_H

#include"ConsoleFunctions.h"
#include"Node.h"

class SparseMatrix
{
	Node * head;
	ConsoleFunctions consoleHandle; //For display purpose

public:
	SparseMatrix();
	void InsertCell(int r, int c, int val);
	void RemoveCell(int r, int c);
	bool isExisting(int r, int c);
	bool IsExistRow(int r);
	bool IsExistCol(int c);
	Node* getPointertoCell(int r, int c);
	void display();
	~SparseMatrix();

};



#endif
