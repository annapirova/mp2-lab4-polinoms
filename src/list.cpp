#include "list.h"

List::List()
{
	first = 0;
}

void List::Insert(Node* curNode, Node* insNode)//предп, что указатели указывают на валидные звенья
{
	insNode->next=curNode->next;
	curNode->next=insNode;
}

Node* List::GetFirst()
{
	return first;
}

void List::InsertFirst(Node* node)
{
	node->next=first;
	first=node;
}

List::~List()
{
	Node* current = GetFirst();
	while (current!=0)
	{
		Node* temp=current->next;
		delete current;
		current=temp;
	}
}

void List::DeleteFirst()
{
	if (first!=0)
	{
		Node* temp = first;
		first = first->next;
		delete temp;
	}
	else
		throw "Empty list";
}

void List::DeleteNext(Node* curNode)
{
	if (curNode->next!=0)
	{
		Node* temp=curNode->next;
		curNode->next=curNode->next->next;
		delete temp;
	}
	else
		throw "DeleteNext Error";
}