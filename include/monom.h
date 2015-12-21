 /*класс или структура Монома (double коэффициент, целая свернутая степень)*/
#ifndef _TMONOM_H
#define _TMONOM_H

#include <iostream>
#include "datvalue.h"

using namespace std;

class TMonom : public TDatValue
{
protected:
		int Coefficient; //коэффициент монома
		int Index; //степени
public:
	TMonom (int CValue = 1, int IValue = 0) 
	{
		Coefficient = CValue;
		Index = IValue;
	}
	virtual TDatValue *GetCopy(); //изготовить копию?!

	void SetCoefficient (int CValue)
	{
		Coefficient = CValue;
	}
	int GetCoeff(void)//?!
	{
		return Coefficient;
	}

	void SetIndex (int IValue)
	{
		Index = IValue;
	}

	int GetIndex(void)//?!
	{
		return Index;
	}

	TMonom& operator= (const TMonom &tm)
	{
		if (&tm != this)
		{
			Coefficient = tm.Coefficient;
			Index = tm.Index;
		}
		return *this;
	}

	int operator == (const TMonom &tm)
	{
		return (Coefficient==tm.Coefficient) && (Index==tm.Index);//сделать иначе
	}

	int operator< (const TMonom &tm)//или лучше bool сделать?
	{
		return Index<tm.Index;
	}

	friend ostream& operator << (ostream &ostr, TMonom &tm)
	{
		ostr << tm.Coefficient << " " << tm.Index;
		return ostr;
	}

friend class TPolinom;

};

typedef TMonom *PTMonom;
#endif;