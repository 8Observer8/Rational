#include "rational.h"

Rational::Rational(int numerator, int denominator) :
    mNumerator(numerator),
    mDenominator(denominator)
{
}

int Rational::numerator() const
{
    return mNumerator;
}

void Rational::setNumerator(int numerator)
{
    mNumerator = numerator;
}

int Rational::denominator() const
{
    return mDenominator;
}

void Rational::setDenominator(int denominator)
{
    mDenominator = denominator;
}

const Rational operator*(const Rational &lhs, const Rational &rhs)
{
    return Rational(lhs.mNumerator * rhs.mNumerator,
                    lhs.mDenominator * rhs.mDenominator);
}

const Rational operator+(const Rational &lhs, const Rational &rhs)
{
    Rational result;

    // Общий знаменатель
    int commonDenominator = lhs.denominator() * rhs.denominator();

    // Числитель
    int a = lhs.numerator() * rhs.denominator();
    int b = rhs.numerator() * lhs.denominator();
    result.setNumerator(a + b);

    // Знаменатель
    result.setDenominator(commonDenominator);

    return result;
}

const Rational operator-(const Rational &lhs, const Rational &rhs)
{
    Rational result;

    // Общий знаменатель
    int commonDenominator = lhs.denominator() * rhs.denominator();

    // Числитель
    int a = lhs.numerator() * rhs.denominator();
    int b = rhs.numerator() * lhs.denominator();
    result.setNumerator(a - b);

    // Знаменатель
    result.setDenominator(commonDenominator);

    return result;
}
