#include <gtest.h>
#include "polinom.h"
#include "monom.h"
#include <sstream>
// тесты мономов и полиномов

TEST(Monom, can_create_right_monom)
{
	ASSERT_NO_THROW(Monom m(2, 321));
}

TEST(Monom, coef_right_and_get_coef_right)
{
	Monom m(2, 321);
	EXPECT_EQ(2, m.GetCoef());
}

TEST(Monom, power_right_and_get_power_right)
{
	Monom m(2, 321);
	EXPECT_EQ(321, m.GetPower());
}

TEST(Monom, get_x_right)
{
	Monom m(2, 321);
	EXPECT_EQ(3, m.GetX());
}

TEST(Monom, get_y_right)
{
	Monom m(2, 321);
	EXPECT_EQ(2, m.GetY());
}

TEST(Monom, get_z_right)
{
	Monom m(2, 321);
	EXPECT_EQ(1, m.GetZ());
}

TEST(Monom, set_coef_right)
{
	Monom m(2, 321);
	m.SetCoeff(5);
	EXPECT_EQ(5, m.GetCoef());
}

TEST(Monom, set_power_right)
{
	Monom m(2, 321);
	m.SetPower(5, 6, 7);
	EXPECT_EQ(567, m.GetPower());
}

TEST(Monom, multiply_right_coeff)
{
	Monom m(2, 321);
	Monom m1(4, 123);
	Monom m2 = m*m1;
	EXPECT_EQ(8, m2.GetCoef());
}

TEST(Monom, multiply_right_power)
{
	Monom m(2, 321);
	Monom m1(4, 123);
	Monom m2 = m*m1;
	EXPECT_EQ(444, m2.GetPower());
}

//TEST(Monom, output)
//{
//	Monom m(2, 321);
//	stringstream ss;
//
//}