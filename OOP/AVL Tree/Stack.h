#ifndef STACK_H
#define STACK_H

#include"Node.h"

template <typename T>
class Stack
{
	Node<T> * top;
public:
	Stack<T>()
	{
		top=0;
	}
	bool IsEmpty()
	{
		if(top==0)
			return true;
		else
			return false;
	}
	T seek()
	{
		T val;
		if(!IsEmpty())
		{
			val=top->data;
		}
		return val;
	}

	void push(T val)
	{
		top=new Node<T>(val,top);
		
	}
	T pop()
	{
		if(!IsEmpty())
		{
			Node<T> * temp=top;
			top=top->next;
			T val=temp->data;
			delete temp;
			return val;
		}
		else
			exit(1);
		
	}
	void display()
	{
		Node<T>* cur=top;
		while(cur!=0)
		{
			cout<<cur->data<<" ";
			cur=cur->next;
		}
		cout<<endl;
	}


	~Stack()
	{
		Node<T>* d;
		while(top!=0)
		{
			d=top;
			top=top->next;
			delete d;
			d=0;
		}
	}


};





#endif