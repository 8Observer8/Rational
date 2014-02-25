#ifndef RATIONAL_H
#define RATIONAL_H

namespace RationalStuff {
class Rational;
}

class Rational
{
public:
    Rational(int numerator = 0, int denominator = 1);

    int numerator() const;
    void setNumerator(int numerator);

    int denominator() const;
    void setDenominator(int denominator);

    friend const Rational operator*(const Rational& lhs, const Rational& rhs);
    friend const Rational operator+(const Rational& lhs, const Rational& rhs);
    friend const Rational operator-(const Rational& lhs, const Rational& rhs);
    template <typename stream_type>
    friend stream_type& operator<<(stream_type& stream, const Rational& r);

private:
    int mNumerator;
    int mDenominator;
};

template <typename stream_type>
stream_type &operator<<(stream_type &stream, const Rational &r)
{
    stream << r.mNumerator << "/" << r.mDenominator;
    return stream;
}

#endif // RATIONAL_H
