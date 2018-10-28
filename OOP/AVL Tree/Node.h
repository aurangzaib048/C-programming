#ifndef NODE_H
#define NODE_H

template<typename T>
class Node
{
	T data;
	Node<T> *next;
	template <typename T>
	friend class Stack;
	template <typename T>
	friend class Queue;

public:
	Node<T>()
	{
		data=d;
		next=n;
	}
	Node<T>(T d,Node* n):data(d),next(n)
	{
	}
	Node<T>(T d)
	{
		data=d;
		next=0;
	}



};



#endif