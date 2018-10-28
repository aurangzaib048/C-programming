#include"Polynomial.h"

Polynomial::Polynomial()
{
	head = new Term(0, 0);
	tail = new Term(0, 0);
	head->next = tail;
	tail->prev = head;
}
void Polynomial::insertTerm(int exp, int coef)
{
	Term* t = new Term(exp, coef);
	if (head->next != tail)
	{
		Term* ptr = head->next;
		while (ptr != tail && ptr->exp >= t->exp)
		{
			if (ptr->exp == t->exp)
			{
				ptr->coef = ptr->coef + t->coef;
				return;
			}
			ptr = ptr->next;
		}
		t->prev = ptr->prev;
		t->next = ptr;
		ptr->prev->next = t;
		ptr->prev = t;
	}
	else
	{
		t->prev = head;
		t->next = tail;
		head->next = t;
		tail->prev = t;
	}
}
Polynomial& Polynomial::operator = (const Polynomial& A)
{
	this->~Polynomial();
	Term* temp = A.head->next;
	while (temp != A.tail)
	{
		this->insertTerm(temp->exp, temp->coef);
		temp = temp->next;
	}
	return *this;
}
int Polynomial::operator()(int n)
{
	int answer = 0;
	Term* temp = this->head->next;
	while (temp != this->tail)
	{
		answer += temp->coef*pow(n, temp->exp);
		temp = temp->next;
	}
	return answer;
}

Polynomial::~Polynomial()
{
	if (head->next != tail)
	{
		Term* temp = head->next;
		while (temp == tail)
		{
			head->next = head->next->next;
			head->next->prev = head;
			delete temp;
			temp = head->next;
		}
	}
}