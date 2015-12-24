#include "polinom.h"

Polinom::Polinom (/*Monom *m*/)
{

}

void Polinom::AddMonom(Monom& _m) 
{
	Node* current = list.GetFirst();
	Node* previous = 0;
	while (current!=0)
	{
		if ((_m.GetPower())==(current->m.GetPower()))
		{
			double sum = _m.GetCoef()+current->m.GetCoef();
			if (sum==0)
			{
				List::DeleteNext(previous);
			}	
			else
			{
				current->m.SetCoeff(sum);
			}
			break;
		}
		if ((_m.GetPower())>(current->m.GetPower()))
		{
			List::Insert(previous, new Node(_m));
			break;
		}
		previous = current;
		current = current->next;
	}
}