#ifndef _DATVALUE_H
#define _DATVALUE_H

#include <iostream>
class TDatValue
{
public:
	virtual TDatValue * GetCopy() = 0; //создание копии
	~TDatValue () {}
};
typedef TDatValue *PTDatValue;
#endif