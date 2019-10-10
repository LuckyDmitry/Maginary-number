#include "Complex.h"


Complex::Complex(){}

Complex::Complex(double Re, double Im)
{
	this->Re = Re;
	this->Im = Im;
}

Complex Complex::abs() {
	
	return Complex(Re*Re, Im * Im);
}

Complex& Complex::operator=(const Complex& value_one) {
	this->Re = value_one.Re;
	this->Im = value_one.Im;
	return *this;
}

bool operator==(const Complex& value_one, const Complex& value_two) {

	return(value_one.Re == value_two.Re && value_one.Im == value_two.Im);
}
bool operator!=(const Complex& value_one, const Complex& value_two) {

	return!(value_one.Re == value_two.Re && value_one.Im == value_two.Im);

}

bool operator>(const Complex& value_one, const Complex& value_two) {

	return(value_one.Re > value_two.Re && value_one.Im > value_two.Im);

}

bool operator<(const Complex& value_one, const Complex& value_two) {

	return(value_one.Re < value_two.Re && value_one.Im < value_two.Im);

}

bool operator>=(const Complex& value_one, const Complex& value_two) {

	return(value_one.Re >= value_two.Re && value_one.Im >= value_two.Im);

}

bool operator<=(const Complex& value_one, const Complex& value_two) {

	return(value_one.Re <= value_two.Re && value_one.Im <= value_two.Im);

}

Complex operator+(const Complex& value_one, const Complex& value_two) {

	return Complex(value_one.Re + value_two.Re, value_one.Im + value_two.Im);

}

Complex operator-(const Complex& value_one, const Complex& value_two) {

	return Complex(value_one.Re - value_two.Re, value_one.Im - value_two.Im);

}
Complex operator*(const Complex& value_one, const Complex& value_two) {

	return Complex(value_one.Re * value_two.Re, value_one.Im * value_two.Im);

}

ostream& operator<<(ostream& os, const Complex& other) {

	if(other.Im<0)
		return os << other.Re << other.Im << 'i' << endl;
	return os<< other.Re << '+' << other.Im << 'i' << endl;

}

istream& operator>>(istream& os,Complex& other) {

	return os >> other.Re >> other.Im;

}

