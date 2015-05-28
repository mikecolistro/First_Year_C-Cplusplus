#include <iostream>
using std::cout;
#include <iomanip>

#include "Complex.h"  // complex class definition

//Constructor
Complex::Complex( double realPart, double imaginaryPart )
    : real( realPart), imaginary( imaginaryPart )
{
}

//addition operator
Complex Complex::operator+( const Complex &operand2) const
{
     return Complex( real + operand2.real,
        imaginary + operand2.imaginary );
}

//subtraction operator
Complex Complex::operator-( const Complex &operand2) const
{
     return Complex( real - operand2.real,
        imaginary - operand2.imaginary );
}

 Complex &Complex::operator=( const Complex &right) 
{
	 real = right.real;
     imaginary = right.imaginary;
	return *this;
}

ostream &operator<<( ostream &output, const Complex &example){
	output << "(" << example.real << "," << example.imaginary << ")";
	return output;
}

istream &operator>>( istream &input, Complex &example){

	input.ignore();
	input >> setw(2) >> example.real;
	input.ignore();
	input >> setw(2) >> example.imaginary;
	return input;

}

void Complex::print() const
{
     cout << "(" << real << "," << imaginary << ")";
}
