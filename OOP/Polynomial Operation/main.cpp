#include"Polynomial.h"
#include"Term.h"
void menu();
int main()
{
	int choice;
	char ch;
	Polynomial a, b;
	do
	{
		system("cls");
	    cout<< "Main Menu\n"<<"1. Addition\n2. Subtraction\n3. Multiplication\n4. Evaluate\n\nSelect Option 1-5:";
		cin >> choice;
		if (choice == 1)
		{
			cout << "Enter 1st Polynomial\n ";
			cin >> a;
			cout << "Enter 2nd Polynomial=\n";
			cin >> b;
			cout << " " << a << endl;
			cout << " " << b << endl;
			cout << "Sum= " << a + b << endl;
		}
		else if (choice == 2)
		{
			cout << "Enter 1st Polynomial=\n";
			cin >> a;
			cout << "Enter 2nd Polynomial=\n";
			cin >> b;
			cout << " " << a << endl;
			cout << " " << b << endl;
			cout << "Diff= " << a - b << endl;
		}
		else if (choice == 3)
		{
			cout << "Enter 1st Polynomial=\n";
			cin >> a;
			cout << "Enter 2nd Polynomial=\n";
			cin >> b;
			cout << "\n " << a << endl;
			cout << " " << b << endl;
			cout << "Product=" << a * b << endl;
		}
		else if (choice == 4)
		{
			int n;
			cout << "Enter Polynomial=";
			cin >> a;
			cout << "Enter Value from which Polynomial will be Evaluated=";
			cin >> n;
			cout << "\n" << a << endl;
			cout << "=" << a(n) << endl;
		}		
		do
		
		{
			cout << endl << "Do You Want to Continue (Y = Yes , N = No) : ";
			cin >> ch;
		}while (ch != 'y' && ch != 'Y' && ch != 'N' && ch != 'n');
		if (toupper(ch) == 'N')
		{
			choice = 5;
		}
	} while (choice != 5);
	return 0;
}

ostream& operator<<(ostream& os, const Polynomial& x)
{
	Term* t = x.head->next;
	if (!(t ->next))
	{
		os << "0 \n";
		return os;
	}
	else
	{
		while (t->next)
		{
			if (t!= x.head->next)	 
			{
				if (t->exp != 0)
				{
					os << showpos << t->coef;
					os << noshowpos << "x^" << t->exp;
				}
				else
				{
					os << showpos << t->coef;
				}
			}
			else
			{
				if (t->exp != 0)
					os << t->coef << "x^" << t->exp;
				
				else
					os << showpos << t->coef;
				
			}
				t = t->next;
			
		}
		os << endl;
		return os;
	}

}
istream& operator>>(istream& is, Polynomial& x)
{
	if (!(x.head->next->next))
	{
		int n, e, c;
		cout << "Enter Number of Terms=";
		is >> n;
		for (int i = 0; i < n; i++)
		{
			cout << "Enter Exponent=";
			is >> e;
			cout << "Enter Coefficient=";
			is >> c;
			x.insertTerm(e, c);
		}
		return is;
	}
	else
	{
		Term* current = x.head->next;
		Term* temp;
		while (current != x.tail)
		{
			temp = current;
			current->next->prev = current->prev;
			current->prev->next = current->next;
			current = current->next;
			delete temp;
		}
		x.head->next = x.tail;
		is >> x;
		return is;
	}
}

Polynomial operator+(const Polynomial& a, const Polynomial& b)
{
	Polynomial c;
	Term* temp1 = a.head->next, *temp2 = b.head->next;
	while (temp1 != a.tail || temp2 != b.tail)
	{
		if (temp1 != a.tail&&temp2 != b.tail)
		{
			if (temp1->exp == temp2->exp)
			{
				if (temp1->coef + temp2->coef != 0)
				{
					c.insertTerm(temp1->exp, temp1->coef + temp2->coef);
				}
				temp1 = temp1->next;
				temp2 = temp2->next;
			}
			else if (temp1->exp > temp2->exp)
			{
				c.insertTerm(temp1->exp, temp1->coef);
				temp1 = temp1->next;
			}
			else
			{
				c.insertTerm(temp2->exp, temp2->coef);
				temp2 = temp2->next;
			}
		}
		else if (temp1 != a.tail)
		{
				c.insertTerm(temp1->exp, temp1->coef);
				temp1 = temp1->next;
		}
		else
		{
				c.insertTerm(temp2->exp, temp2->coef);
				temp2 = temp2->next;
		}
	}
	return c;
}
Polynomial operator-(const Polynomial& a, const Polynomial& b)
{
	Polynomial c;
	Term* temp1 = a.head->next, *temp2 = b.head->next;
	while (temp1 != a.tail || temp2 != b.tail)
	{
		if (temp1 != a.tail && temp2 != b.tail)
		{
			if (temp1->exp == temp2->exp)
			{
				if (temp1->coef - temp2->coef != 0)
				{
					c.insertTerm(temp1->exp, temp1->coef - temp2->coef);
				}
				temp1 = temp1->next;
				temp2 = temp2->next;
			}
			else if (temp1->exp > temp2->exp)
			{
				c.insertTerm(temp1->exp, temp1->coef);
				temp1 = temp1->next;
			}
			else
			{
				c.insertTerm(temp2->exp, temp2->coef);
				temp2 = temp2->next;
			}
		}
		else if (temp1 != a.tail)
		{
			c.insertTerm(temp1->exp, temp1->coef);
			temp1 = temp1->next;
		}
		else
		{
			c.insertTerm(temp2->exp, temp2->coef);
			temp2 = temp2->next;
		}
	}
	return c;
}
Polynomial operator*(const Polynomial& a, const Polynomial& b)
{
	Polynomial c;
	Term* temp1 = a.head->next, *temp2 = b.head->next;
	while (temp1 != a.tail)
	{
		temp2 = b.head->next;
		while (temp2 != b.tail)
		{
			c.insertTerm(temp1->exp + temp2->exp, temp1->coef*temp2->coef);
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
	}
	return c;
}
