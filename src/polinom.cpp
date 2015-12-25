#include "polinom.h"

Polinom::Polinom ()
{
	list.InsertFirst(new Node(Monom(0, 9, 9, 9)));
}

void Polinom::AddMonom(Monom& _m) 
{
	Node* current = list.GetFirst()->next;
	Node* previous = list.GetFirst();
	while (previous!=0)
	{
		if ((_m.GetPower())==(previous->m.GetPower()))
		{
			double sum = _m.GetCoef()+previous->m.GetCoef();
			if (abs(sum) > 1e-12)
			{
				List::DeleteNext(previous);
			}	
			else
			{
				current->m.SetCoeff(sum);
			}
			break;
		}
		else if ((_m.GetPower())>(previous->m.GetPower()))
		{
			List::Insert(previous, new Node(_m));
			break;
		}
		else 
		{
			previous = current;
			current = current->next;
		}
	}
}