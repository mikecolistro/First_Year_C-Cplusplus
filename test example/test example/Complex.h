
#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;
class Complex
{
 public:
	 Complex (double real= 0.0, double =0.0);  // constructor
     Complex operator+( const Complex & ) const;  // addition
     Complex operator-( const Complex & ) const;  // subtraction
     Complex &operator= ( const Complex &);  

	 friend ostream &operator<<( ostream &, const Complex &);
	 friend istream &operator>>( istream &, Complex & );

	 double realPart, imaginaryPart;

     void print() const;

private:
     double real;  // real part
     double imaginary;  // imaginary part
};

#endif
