 /*класс или структура Монома (double коэффициент, целая свернутая степень)*/
#pragma once
#include <iostream>


class Monom
{
private:
	double coef;
	int power;
public:
	Monom(double _coef, int x, int y, int z);
	Monom(double _coef = 0, int _power = 0);
	double GetCoef() const;
	int GetX() const;
	int GetY() const;
	int GetZ() const;
	int GetPower() const;
	void SetCoeff(double _coef);
	//bool operator ==(const Monom& m2);
	//bool operator !=(const Monom& m2);
	//bool operator < (const Monom& m2);
	//friend Monom operator* (int a, Monom& m);
};

std::ostream& operator << (std::ostream& ostr, const Monom& m);
