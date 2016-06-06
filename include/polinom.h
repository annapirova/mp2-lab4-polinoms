// ����� ������� - ������������� ����������� ������ �������
// ������������ �������� ������, ������� ������, �������� ������,  
// ����� ������, �������� ���������(������� ������������� �������), 
// ��������� ���������
#pragma once
#include "monom.h"
#include "list.h"
#include <string>
#include <sstream>
#include <cstdlib>

class Polinom
{
private:
	List list;
public:
	Polinom();
	void AddMonom(const Monom& m); 
	Polinom operator + (Polinom& p);
	Polinom operator * (double number);
	Polinom operator - (Polinom& p);
	Polinom operator * (Polinom& p);
	friend std::ostream& operator << (std::ostream& ostr, /*const*/ Polinom& p);
	friend std::istream& operator >> (std::istream& istr, Polinom& p);
	//Polinom operator = (Polinom& p);
}; 

//std::ostream& operator << (std::ostream& ostr, const Polinom& p);
