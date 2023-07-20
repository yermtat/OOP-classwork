#include<iostream>

using namespace std;

class Point {
public:
	int x;
	int y;
	static int count; // статический филд для всего класса в единственном экземпляре

	Point() {
		x = 0;
		y = 0;
	}

};

int Point::count{ 0 };

int main() {

	Point point;
	point.x = 5;
	point.y = 7;
	point.count = 5;
	cout << point.x << endl;
	cout << point.y << endl;
	cout << point.count << endl;

	cout << Point::count << endl;
}