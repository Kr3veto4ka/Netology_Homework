#pragma once
#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:

	Fraction& cut();

	Fraction(int numerator, int denominator);

	auto operator<=>(const Fraction&) const = default;
	friend std::ostream& operator<<(std::ostream& out, const Fraction& F);


	Fraction operator+(Fraction& F);

	Fraction operator-(Fraction& F);

	Fraction operator*(Fraction& F);

	Fraction operator/(Fraction& F);

	Fraction& operator-();

	Fraction& operator++();

	Fraction& operator++(int);

	Fraction& operator--();

	Fraction& operator--(int);
};