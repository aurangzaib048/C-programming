#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
#include"Term.h"

class Polynomial
{
private:
	Term* head;
	Term* tail;
public:
	Polynomial();
	Polynomial& operator=(const Polynomial& A);
	void addAfter(Term* y, int exp, int coef);
	void addBefore(Term* y, int exp, int coef);
	void insertTerm(int exp, int coef);
	friend Polynomial operator+(const Polynomial& A, const Polynomial& B);
	friend Polynomial operator-(const Polynomial& A, const Polynomial& B);
	friend Polynomial operator*(const Polynomial& A, const Polynomial& B);
	friend ostream& operator<<(ostream& os, const Polynomial& x);
	friend istream & operator>>(istream& is, Polynomial& X);
	~Polynomial();
	int operator()(int n);
};

#endif