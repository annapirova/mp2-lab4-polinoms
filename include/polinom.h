// класс Полином - упорядоченный односвязный список Мономов
// поддерживает операции Печать, Вставка монома, Удаление монома,  
// Поиск монома, Сложение полиномов(слияние упорядоченных списков), 
// Умножение полиномов
#pragma once
#include "monom.h"
#include "list.h"

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
	//friend std::istream& operator >> (std::istream& istr, Polinom& p);
	//Polinom operator = (Polinom& p);
}; 

//std::ostream& operator << (std::ostream& ostr, const Polinom& p);
