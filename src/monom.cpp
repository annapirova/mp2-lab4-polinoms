#include "monom.h"

Monom::Monom(int _coef, int x, int y, int z)
{
	if ((x<0)||(y<0)||(z<0)||(x>9)||(y>9)||(z>9))
		throw "Incorrect power";
	coef = _coef;
	power = x*100+y*10+z;
}

int Monom::GetCoef() const
{
	return coef;
}

int Monom::GetX() const
{
	return (power/100);
}

int Monom::GetY() const
{
	return ((power%100)/10);
}

int Monom::GetZ() const
{
	return (power%10);
}

ostream& operator << (ostream& ostr, const Monom& m)
{
	if ((m.GetCoef()==0)||(m.GetPower()==0))
		cout<<m.GetCoef();
	else
		ostr<<m.GetCoef()<<"x^"<<m.GetX()<<"y^"<<m.GetY()<<"z^"<<m.GetZ();
	return ostr;
}

//Monom operator* (int a, Monom& m)
//{
//	Monom temp(m);
//	temp.coef = a*m.coef;
//	return temp;
//}
//
//bool Monom::Equal(const Monom& m1, const Monom& m2)
//{
//	return(m1.power==m2.power);
//}

int Monom::GetPower() const
{
	return power;
}

void Monom::SetCoeff(int _coef)
{
	coef=_coef;
}

Monom::Monom(int _coef, int _power)
	: coef(_coef), power(_power)
{
}

Monom Monom::operator*(const Monom& m)
{
	Monom temp;	
	temp.coef = this->coef * m.coef;
	int x = this->GetX() + m.GetX();
	int y = this->GetY() + m.GetY();
	int z = this->GetZ() + m.GetZ();
	if ((x>9)||(y>9)||(z>9))
		throw "Degree more than 9";
	temp.power = x*100 + y*10 + z;
	return temp;
}

void Monom:: SetPower (int x, int y, int z)
{
	power = x*100 + y*10 + z;
}

//istream& operator << (std::istream& istr, const Monom& m)
//{
//	
//}