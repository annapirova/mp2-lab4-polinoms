#pragma once
#include "monom.h"

struct Node
{
	Node *next;
	Monom m;

	Node(Monom _m = Monom()) : m(_m)
	{
		next = 0;
	}
};

class List
{
private:
	Node head;
	List& operator=(const List&);
public:
	List();
	List(const List& list);
	Node* GetHead();
	static void Insert(Node* curNode, Node* insNode);//нет доступа к полям объекта List
	~List();
	static void DeleteNext(Node* curNode);
};