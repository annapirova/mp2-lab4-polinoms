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
	Polinom (/*Monom *m*/);
	void AddMonom(Monom& m); 
};
