#include "list.h"
#include "polinom.h"
#include <iostream>

using namespace std;

void main()
{
	try
	{
	cout << "Enter polinom p1" <<endl;
	Polinom p1;
	cin >> p1;
	cout << "Enter polinom p2" <<endl;
	Polinom p2;
	cin >> p2;
	cout<<"Choose a operation"<<endl;

	cout<<"1. p1 + p2"<<endl;
	cout<<"2. p1 - p2"<<endl;
	cout<<"3. p2 - p1"<<endl;
	cout<<"4. p1*p2"<<endl;
	cout<<"If you want to finish, enter ""999"<<endl;
	int counter;
	cin >> counter;
	Polinom result;
	while (counter!=999)
	{
	switch (counter)
		{
		case 1: 
			{
				result = p1 + p2; 
				break;
			}
		case 2: 
			{
				result = p1 - p2; 
				break;
			}
		case 3: 
			{
				result = p2 - p1; 
				break;
			}
		case 4: 
			{
				result = p1 * p2;
				break;
			}
		default: cout <<"Incorrect enters" << endl; break;
		}
	cout << "Result of operation: " << result << endl;
	cout << "Please, choose the operation or enter 999" << endl;
	cin >> counter;
	}
	int ad = 9;
		
	}
	catch (const char* error)
	{
		cout<<error<<endl;
	}



	//	/*List c;
	//	List::Insert(c.GetHead(), new Node(1));
	//	List::Insert(c.GetHead(), new Node(2));
	//	List::Insert(c.GetHead(), new Node(3));
	//	List::Insert(c.GetHead()->next, new Node(Monom(4, 2, 0, 0)));
	//	List::DeleteNext(c.GetHead()->next->next->next);
	//	Node* current = c.GetHead()->next;
	//	while (current!=c.GetHead())
	//	{
	//		cout << current->m << endl;
	//		current = current->next;
	//	}
	//	cout << endl;

	//	List d(c);
	//	current = d.GetHead()->next;
	//	while (current!=d.GetHead())
	//	{
	//		cout << current->m << endl;
	//		current = current->next;
	//	}*/

	//	Monom m(12, 1, 2, 3), m2(2, 1, 0, 3), m3(1, 3, 0, 3), m4(-1, 3, 0, 3);
	//	//cout << m.GetCoef() << " " << m.GetX() << " " << m.GetY() << " " << m.GetZ() <<endl;
	//	//cout<<m<<endl;
	//	Polinom p;
	//	p.AddMonom(m);
	//	p.AddMonom(m2);
	//	p.AddMonom(m3);
	//	p.AddMonom(m4);

	//	Polinom q;
	//	q.AddMonom(Monom(-2, 1, 0, 3));
	//	q.AddMonom(Monom(1, 4, 0, 0));
	//	q.AddMonom(Monom(3, 1, 2, 3));
	//	cout<<q<<endl;
	//	//Polinom qq;
	//	//cin >> qq;
	//	int bt = 123;
	//	Polinom sum = p+q;
	//	Polinom multi = q*2;

	//	Polinom multi2 = q*0;

	//	Polinom subtr = q-p;
	//	p = q;
	//	int f = 111;



}