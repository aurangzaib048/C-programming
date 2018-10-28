#ifndef AVLNODE_H
#define AVLNODE_H

template<typename T>
class avlNode
{
public:
	T data;
	avlNode<T>* left;
	avlNode<T>* right;

	int height;
	template<typename T>
	friend class AVL;

public:
	avlNode(T d=0)
	{
		data=d;
		left=0;
		right=0;
		height=0;
	}

};




#endif