#ifndef TERM_H
#define TERM_H
#include <iostream>
#include <math.h>
using namespace std;

class Term
{
private:
	int exp;
	int coef;
	Term* next;
	Term* prev;
	friend class Polynomial;
public:
	Term();
	Term(int exp, int coef);
	Term(int exp, int coef, Term* next, Term* prev);
	friend ostream& operator<<(ostream& os, const Polynomial& x);
	friend istream & operator>>(istream& is, Polynomial& X);
	friend Polynomial operator+(const Polynomial& A, const Polynomial& B);
	friend Polynomial operator-(const Polynomial& A, const Polynomial& B);
	friend Polynomial operator*(const Polynomial& A, const Polynomial& B);
};


#endif