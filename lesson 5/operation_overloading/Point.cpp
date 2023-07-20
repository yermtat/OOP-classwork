#include "Point.h"
#include<iostream>

using namespace std;

void Point::show() {
	cout << "(" << x << ", " << y << ")\n";
}

// оверлоадинг операторов объ€вл€етс€ вне класса
void Point::read() {
	cin >> x;
	cin.ignore(1);
	cin >> y;
}



