#include <iostream>
#include<string>
#pragma once
using namespace std;

class Complex
{
public:
	Complex();
	Complex(double Re, double Im);
	Complex abs();
	friend bool operator==(const Complex& value_one, const Complex& value_two);
	friend bool operator!=(const Complex& value_one, const Complex& value_two);
	friend bool operator>(const Complex& value_one, const Complex& value_two);
	friend bool operator<(const Complex& value_one, const Complex& value_two);
	friend bool operator<=(const Complex& value_one, const Complex& value_two);
	friend bool operator>=(const Complex& value_one, const Complex& value_two);
	friend Complex operator+(const Complex& value_one, const Complex& value_two);
	friend Complex operator*(const Complex& value_one, const Complex& value_two);
	friend Complex operator-(const Complex& value_one, const Complex& value_two);
	friend ostream& operator<<(ostream& os, const Complex& other);
	friend istream& operator>>(istream& os, Complex& other);
	Complex& operator=(const Complex& value_two);


private:
	double Re=0, Im=0;
};

