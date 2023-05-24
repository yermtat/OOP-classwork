#include<iostream>

using namespace std;

class Point
{
public:
	int x;
	int y;

	Point() : x{ 0 }, y{ 0 } {
		/*x = 0; 
		y = 0; */
		cout << "Parameterless" << endl; 
	}
	Point(int x, int y) : x{ x }, y{ y } {
		/*this->x = x; 
		this->y = y; */
		cout << "With parameters" << endl;
	}

};

class Rectangle {
public:
	Point LeftUpperCorner;
	int width;
	int height;
	Rectangle() : width{ 0 }, height{ 0 }, LeftUpperCorner{ 15, 20 }
	{
		/*LeftUpperCorner.x = 15;
		LeftUpperCorner.y = 20;
		width = 0;
		height = 0;*/
		cout << "(Rectangle) Parameterless" << endl;
	}

	Rectangle(int x, int y, int width, int height) : LeftUpperCorner{x, y}, width{width}, height{height}
	{
		/*LeftUpperCorner.x = x;
		LeftUpperCorner.y = y;
		this->width = width;
		this->height = height;*/
		cout << "(Rectangle) with parameters" << endl;
	}
};



int main() {

	//int a = 5;	// копирующая инициализация
	//int b{ 5 }; // унифицированная инициализация
	//int c(5);	// прямая инициализация

	/*Point p1;
	Point p2{ 52, 15 };*/


	Rectangle rect;
	Rectangle rect1{ 25, 33, 15, 7 };
}
