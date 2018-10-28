#include"Term.h"

Term::Term()
{
	exp = 0;
	coef = 0;
	next = NULL;
	prev = NULL;
}
Term::Term(int exp, int coef)
{
	this->exp = exp;
	this->coef = coef;
	this->next = NULL;
	this->prev = NULL;
}
Term::Term(int exp, int coef, Term* next, Term* prev)
{
	this->exp = exp;
	this->coef = coef;
	this->next = next;
	this->prev = next;
}