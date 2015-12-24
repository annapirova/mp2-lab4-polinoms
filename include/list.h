#pragma once
#include "monom.h"

struct Node
{
	Node *next;
	Monom m;

	Node(Monom _m) : m(_m)
	{
		next = 0;
	}
};

class List
{
private:
	Node *first;
public:
	List();
	static void Insert(Node* curNode, Node* insNode);//нет доступа к полям объекта List
	Node* GetFirst();
	void InsertFirst(Node* node);
	~List();
	void DeleteFirst();
	static void DeleteNext(Node* curNode);
};