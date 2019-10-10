#include<iostream>
#include"Complex.h"

int main() {
	Complex a(4,3),b,c;
	b = c = a;
	cout << b;
	cout << c;
	cin >> a;
	cout << a;
	return 0;
}