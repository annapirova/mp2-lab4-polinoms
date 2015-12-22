#include "list.h"
#include "polinom.h"
#include <iostream>

using namespace std;

void main()
{
	try
	{
	List c;
	c.InsertFirst(new Node(1));
	c.InsertFirst(new Node(2));
	c.InsertFirst(new Node(3));
	List::Insert(c.GetFirst(), new Node(4));
	List::DeleteNext(c.GetFirst()->next->next->next);
	Node* current = c.GetFirst();
	while (current!=0)
	{
		cout << current->value << endl;
		current = current->next;
	}
	}
	catch (const char* error)
	{
		cout<<error<<endl;
	}
}