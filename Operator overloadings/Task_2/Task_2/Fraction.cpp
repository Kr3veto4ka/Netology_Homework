#include "Fraction.h"

Fraction& Fraction::cut()
{
	int most;
	numerator_ > denominator_ ? most = numerator_ : most = denominator_;

	for (int i = most; i > 0; i--) 
	{
		if (denominator_ % i == 0 && numerator_ % i == 0) {
			denominator_ /= i;
			numerator_ /= i;
		}
	}
	return *this;
}

Fraction::Fraction(int numerator, int denominator)
{
	numerator_ = numerator;
	denominator_ = denominator;
}

Fraction Fraction::operator+(Fraction& F)
{
	int newnum = numerator_ * F.denominator_ + F.numerator_ * denominator_;
	int newden = denominator_ * F.denominator_;
	return Fraction(newnum, newden).cut();
}

Fraction Fraction::operator-(Fraction& F)
{
	int newnum = numerator_ * F.denominator_ - F.numerator_ * denominator_;
	int newden = denominator_ * F.denominator_;
	return Fraction(newnum, newden).cut();
}

Fraction Fraction::operator*(Fraction& F) { return Fraction(numerator_ * F.numerator_, denominator_ * F.denominator_).cut(); }

Fraction Fraction::operator/(Fraction& F) { return Fraction(numerator_ * F.denominator_, denominator_ * F.numerator_).cut(); }

Fraction& Fraction::operator-() { numerator_ = -numerator_;  return *this; }

Fraction& Fraction::operator++() { numerator_ += denominator_;  return *this; }

Fraction Fraction::operator++(int) { Fraction F = *this; numerator_ += denominator_; return F; }

Fraction& Fraction::operator--() { numerator_ - denominator_; return *this; }

Fraction Fraction::operator--(int) { Fraction F = *this; numerator_ -= denominator_; return F; }