#include <iostream>
#include "fraction-1.h"
using namespace std;

fraction fraction::operator+(fraction f2)
{
	int n = numerator * f2.denominator + f2.numerator * denominator;
	int d = denominator * f2.denominator;

	return fraction(n, d);
}

fraction fraction::operator-(fraction f2)
{
	int n = numerator * f2.denominator - f2.numerator * denominator;
	int d = denominator * f2.denominator;

	return fraction(n, d);
}

fraction fraction::operator*(fraction f2)
{
	int n = numerator * f2.numerator;
	int d = denominator * f2.denominator;

	return fraction(n, d);
}

fraction fraction::operator/(fraction f2)
{
	int n = numerator * f2.denominator;
	int d = denominator * f2.numerator;

	return fraction(n, d);
}

 ostream& operator<<(ostream& out, fraction& f)
{
	out << f.numerator << "/" << f.denominator << endl;
	return out;
}


istream& operator>>(istream& in, fraction& f)
{
	cout << "Please enter your fraction, first the numerator then the denominator;" << endl;
	cin >> f.numerator;
	cin >> f.denominator;
	return in;
}

int gcd(int n, int d)
{
	n = (n < 0) ? -n : n;			// make u non-negative
	d = (d < 0) ? -d : d;			// make v non-negative

	while (n > 0)
	{
		if (n < d)
		{
			int t = n;	        // swap u and v
			n = d;
			d = t;
		}

		n -= d;
	}

	return d;				// the GCD of u and v
}