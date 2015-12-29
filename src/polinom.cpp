#include "polinom.h"

Polinom::Polinom ()
{
	list.GetHead()->m = Monom(0.0, -1);
}

void Polinom::AddMonom(const Monom& _m) 
{
	Node* current = list.GetHead()->next;
	Node* previous = list.GetHead();
	while (_m.GetPower() < current->m.GetPower())
	{
		previous = current;
		current = current->next;
	}

	if(_m.GetPower() == current->m.GetPower())
	{
		current->m.SetCoeff(current->m.GetCoef() + _m.GetCoef());
		if(current->m.GetCoef() == 0.0)
		{
			List::DeleteNext(previous);
		}
	}
	else // _m.GetPower() > current->m.GetPower()
	{
		List::Insert(previous, new Node(_m));
	}
}

Polinom Polinom:: operator + (Polinom& P)
{
	Polinom Q(*this);
	Node* p = P.list.GetHead()->next;
	Node* q = Q.list.GetHead()->next;
	Node* q1 = Q.list.GetHead();
	while(true)
	{
		if(p->m.GetPower() == q->m.GetPower())
		{
			if(p->m.GetPower() == -1)
			{
				break;
			}
			else
			{
				q->m.SetCoeff(q->m.GetCoef() + p->m.GetCoef());
				p = p->next;
				if(q->m.GetCoef() == 0)
				{
					List::DeleteNext(q1);
					q = q1->next;
				}
				else
				{
					q1 = q;
					q = q->next;
				}
			}
		}
		else
		{
			if(p->m.GetPower() < q->m.GetPower())
			{
				q1 = q;
				q = q->next;
			}
			else // p->m.GetPower() > q->m.GetPower()
			{
				List::Insert(q1, new Node(p->m));
				q1 = q1->next;
				p = p->next;
			}
		}
	}
	return Q;
}