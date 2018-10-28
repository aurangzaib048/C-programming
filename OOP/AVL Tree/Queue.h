#ifndef QUEUE_H
#define QUEUE_H

#include"Node.h"

template <typename T>
class Queue
{
public:
	Node<T> * front;
	Node<T> * rear;
public:
	Queue<T>()
	{
		front=rear=0;
	}
	bool IsEmpty()
	{
		if(rear==0)
			return true;
		else
			return false;
	}
	T seek()
	{
		T val;
		if(!IsEmpty())
		{
			val=front->data;
		}
		return val;
	}

	void enQueue(T val)
	{
		Node<T> * t=new Node<T>(val);
		if(rear==0)
			rear=front=t;
		else
		{
			rear->next=t;
			rear=t;
		}

		
	}
	T deQueue()
	{
		if(!IsEmpty())
		{
			Node<T> * t=front;
			front=front->next;
			T val=t->data;
			if(front==0)
			{
				rear=0;
			}
			delete t;
			return val;
		}
		else
			exit(1);
		
	}
	void display()
	{
		Node<T>* cur=front;
		while(cur!=0)
		{
			cout<<cur->data<<" ";
			cur=cur->next;
		}
		cout<<endl;
	}


	~Queue()
	{
		Node<T>* d;
		while(front!=0)
		{
			d=front;
			front=front->next;
			delete d;
			d=0;
		}
	}


};





#endif