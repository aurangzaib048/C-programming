#include"AVL.h"

template<typename T>
AVL<T>::AVL()
{
	root=0;
}

template<typename T>
bool AVL<T>::Insert(T d)////////////////////
{
	Stack<avlNode<T> *> S;
	avlNode<T>* c=root; avlNode<T>* p=NULL;
	bool flag=false;

	if(root==NULL)
	{
		root=new avlNode<T>(d);
		return true;
	}
	while(c!=NULL)
	{
		if(d<c->data)
		{
			p=c;
			c=c->left;
		}
		else if(d>c->data)
		{
			p=c;
			c=c->right;
		}
		else if(c->data==d)
		{
			cout<<"Aleady exists "<<endl;
			return false;
		}

		S.push(p);
	}

	if(d<p->data)
	{
		p->left=new avlNode<T>(d);
		flag=true;
	}
	else if(d>p->data)
	{
		p->right=new avlNode<T>(d);
		flag=true;
	}

	while(!S.IsEmpty())
	{
		avlNode<T> * temp=S.pop();
		if(temp->left && temp->right)
			temp->height=max(temp->left->height,temp->right->height)+1;  //max not implement
		else if(temp->right)
			temp->height=temp->right->height+1;
		else if(temp->left)
			temp->height=temp->left->height+1;

		if(!S.IsEmpty())
			balance(temp,S.seek());
		else
			balance(temp,0);

	}
	return flag;

}

template<typename T>
int AVL<T>::diff(avlNode<T> *temp)
{
	int leftH,rightH;
	if(temp->left)
		leftH= temp->left->height;
	else
		leftH=-1;
	if(temp->right)
		rightH=temp->right->height;
	else
		rightH=-1;
    int totalH= leftH-rightH;
	return totalH;
}

template<typename T>
void AVL<T>::balance(avlNode<T> *temp,avlNode<T>* p)
{
    int bal_factor = diff (temp);
    if (bal_factor > 1)
    {
        if (diff (temp->left)>0)
			RotateRight (temp,p);
        else
			RotateLeftRight(temp,p);
    }
    else if (bal_factor < -1)
    {
        if (diff (temp->right)>0)
			RotateRightLeft(temp,p);
        else
			RotateLeft (temp,p);
    }

}

template<typename T>
avlNode<T>* AVL<T>::FindMin(avlNode<T>*& p)
{
	if(root==0)
	{
		cout<<"Root is NUll";
		return NULL;
	}
	return FindMin(root,p);
}

template<typename T>
avlNode<T>* AVL<T>::FindMin(avlNode<T>* c,avlNode<T>*& p)
{
	avlNode<T>* curr=c;
	while(curr->left!=0)
	{
		p=curr;
		curr=curr->left;
	}
	return curr;

}

template<typename T>
avlNode<T>* AVL<T>::FindMax(avlNode<T>*& p)
{
	if(root==0)
	{
		cout<<"Root is NUll";
		return NULL;
	}
	p=0;
	return FindMax(root,p);
}

template<typename T>
avlNode<T>* AVL<T>::FindMax(avlNode<T>* c,avlNode<T>*& p)
{
	avlNode<T>* curr=c;
	while(curr->right!=0)
	{
		p=curr;
		curr=curr->right;
	}
	return curr;

}


template<typename T>
avlNode<T>* AVL<T>::SearchTree(T key,avlNode<T> * &p)
{
	return SearchTree(root,key,p);
}

template<typename T>
avlNode<T>* AVL<T>:: SearchTree(avlNode<T>* c, T key, avlNode<T>*& p)
{
	if(c==NULL)
	{
		cout<<"NOt Found"<<endl;
		return NULL;
	}
	if(c->data==key)
	{
		return c;
	}
	
	
	if(c->right && key>c->data)
	{
		p=c;
		SearchTree(c->right,key,p);
	}
	else if(c->left && key<c->data)
	{
		p=c;
		SearchTree(c->left,key,p);
	}

}

template<typename T>
avlNode<T>* AVL<T>:: SearchTree(avlNode<T>* c,T key, avlNode<T>*& p,Stack<avlNode<T>*>& S)
{
	while(c!=NULL)
	{
		if(key<c->data)
		{
			p=c;
			S.push(p);
			c=c->left;
		}
		else if(key>c->data)
		{
			p=c;
			S.push(p);
			c=c->right;
		}
		else
			break;
	}
	return c;

}

template<typename T>
void AVL<T>::PrintTree()
{
	PrintTree(root,0);
}

template<typename T>
void AVL::PrintTree(avlNode<T>*& c,int t)
{
	if(c==NULL)
	{
		cout<<"No elememts";
		return;
	}
	if(c->left==0 && c->right==0)
	{
		for(int i=0;i<t;i++)
		{
			cout<<"\t";
		}
		cout<<c->data<<"("<<c->height<<")"<<endl;
		return;
	}
	if(c->right!=NULL)
	{
		PrintTree(c->right,t+1);
	}
	for(int i=0;i<t;i++)
	{
		cout<<"\t";
	}
	cout<<c->data<<"("<<c->height<<")"<<endl;
	if(c->left!=0)
	{
		PrintTree(c->left,t+1);
	}

}

template<typename T>
void AVL<T>::levelOrder()
{
	levelOrder(root);
}

template<typename T>
void AVL<T>::levelOrder(avlNode<T> * c)
{
	 if (root == NULL)  return;

	 Queue<avlNode<T>*> q;
 
	 q.enQueue(c);
 
	 while (q.IsEmpty() == false)
	 {
		 avlNode<T> * temp = q.seek();
        cout <<temp->data<<" ";
		q.deQueue();
 
        if (temp->left != NULL)
			q.enQueue(temp->left);
 
        if (temp->right != NULL)
			q.enQueue(temp->right);

	}
}

template<typename T>
void AVL<T>::RotateRight(avlNode<T>* p,avlNode<T>* Q)
{
	if(p->left)
	{
		avlNode<T>* k=p->left;
		avlNode<T>* kr=k->right;
		if(p==root)
		{
			p -> left = k -> right;
			k -> right = p;

			int t=p->height-1;
			p->height=k->height-1;
			k->height=t;

			root=k;
		}
		else if(p==Q->left)
		{
			Q->left=p->left;
			Q->left->right=p;
			//p->right=p->left=0;
			p->left=kr;

			int t=p->height-1;
			p->height=k->height-1;
			k->height=t;

			Q->left=k;			
		}
		else if(p==Q->right)
		{
			Q->right=p->left;
			Q->right->right=p;
			//p->right=p->left=0;
			p->left=kr;

			int t=p->height-1;
			p->height=k->height-1;
			k->height=t;

			Q->right=k;
		}
	}
	
}

template<typename T>
void AVL<T>::RotateLeft(avlNode<T> * p,avlNode<T>* Q)
{
	if(p->right)
	{
		avlNode<T>* k=p->right;
		avlNode<T> * kr=k->left;
		if(p==root)
		{
			p->right = k->left;
			k->left= p;

			int t=p->height-1;
			p->height=k->height-1;
			k->height=t;

			root=k;
		}
		else if(p==Q->left)
		{
			Q->left=p->right;
			Q->left->left=p;
			//p->right=p->left=0;
			p->right=kr;

			int t=p->height-1;
			p->height=k->height-1;
			k->height=t;

			Q->left=k;			
		}
		else if(p==Q->right)
		{
			Q->right=p->right;
			Q->right->left=p;
			//p->right=p->left=0;
			p->right=kr;

			int t=p->height-1;
			p->height=k->height-1;
			k->height=t;

			Q->right=k;
		}
	}


}

template<typename T>
void AVL<T>::RotateLeftRight(avlNode<T>* p,avlNode<T>* Q)
{
	if(p->left)
		RotateLeft(p->left,p);

	p->left->height++;
	p->left->left->height++;

	RotateRight(p,Q);
}

template<typename T>
void AVL<T>::RotateRightLeft(avlNode<T>* p,avlNode<T>* Q)
{
	if(p->right)
		RotateRight(p->right,p);
	
	p->right->height++;
	p->right->right->height++;

	RotateLeft(p,Q);
}

template<typename T>
void AVL<T>:: swap(T & a,T & b)
{
	T temp;
	temp=a;
	a=b;
	b=temp;
}

template<typename T>
bool AVL::remove(T d)//////////////////////////
{
	avlNode<T>* pt=0;
	avlNode<T>* t=0;
	Stack<avlNode<T>*> S;

	t=SearchTree(root,d,pt,S);

	if(t==NULL)
	{
		return false;
	}

	if(t->right!=0 && t->left!=0)
	{
		avlNode<T>* ps=0;
		avlNode<T>* s=0;

		s=SearchTree(t->left->data,ps);

		s=FindMax(t->left,ps);

		swap(t->data,s->data);
		t=s;
		pt=ps;
	}

	if(t->left==0 && t->right==0)
	{
		if(t==root)
			root=0;
		else if(t==pt->left)
			pt->left=0;
		else if(t==pt->right)
			pt->right=0;

		delete t;
	}
	else if(t->left!=0 && t->right==0)
	{
		if(pt==0)
			root->left=t->left;
		else if(t==pt->right)
			pt->right=t->left;
		else if(t==pt->left)
			pt->left=t->left;
		
		delete t;
	}
	else if(t->right!=0 && t->left==0)
	{
		if(pt==0)
			root->right=t->right;
		else if(t==pt->right)
			pt->right=t->right;
		else if(t==pt->left)
			pt->left=t->right;

		delete t;

	}
	while (!S.IsEmpty())
	{
		avlNode<T>* temp=S.pop();
		if(!S.IsEmpty())
			balance(temp,S.seek());
	}
	return true;
}

template<typename T>
void AVL<T>::Destory(avlNode<T>* c)
{
	if(c!=NULL)
	{
		Destory(c->left);
		Destory(c->right);
		delete c;
	}
}

template<typename T>
AVL<T>::~AVL<T>()
{

	Destory(root);
	root=NULL;

}