#ifndef AVL_H
#define AVL_H

#include"avlNode.h"
#include<iostream>
#include"Stack.h"
#include"Queue.h"

using namespace std;

template<typename T>

class AVL
{
	avlNode<T>* root;

public:

	AVL();
	bool Insert(T data);

	int diff(avlNode<T> *temp);

	void balance(avlNode<T> *temp,avlNode<T>*p);

	void PrintTree(avlNode<T>*& root,int t);
	void PrintTree();

	void RotateRight(avlNode<T>* p,avlNode<T>* Q);
	void RotateLeft(avlNode<T>* p,avlNode<T>* Q);

	void RotateLeftRight(avlNode<T>* p,avlNode<T>* Q);
	void RotateRightLeft(avlNode<T>* p,avlNode<T> *Q);


	avlNode<T>* FindMin(avlNode<T>* t,avlNode<T>*& p);
	avlNode<T>* FindMin(avlNode<T>*& p);

	avlNode<T>* FindMax(avlNode<T>* t,avlNode<T>*& p);
	avlNode<T>* FindMax(avlNode<T>*& p);

	avlNode<T>* SearchTree(avlNode<T>* c,T key,avlNode<T>*& p,Stack<avlNode<T>*&);
	avlNode<T>* SearchTree(avlNode<T>* t,T key,avlNode<T> *& p);
	avlNode<T>* SearchTree(T key,avlNode<T> *& p);

	void swap(T &,T &);

	bool remove(T);

	void levelOrder();
	void levelOrder(avlNode<T>* c);

	void Destory(avlNode<T>* c);

	~AVL();
};

#endif