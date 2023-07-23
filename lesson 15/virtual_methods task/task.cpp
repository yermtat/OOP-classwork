#include<iostream>

using namespace std;

class Employer {
public:
	string name;
	int money;
	Employer(string name, int money) : name(name), money(money) {}
	virtual void print() = 0;
};

class President : public Employer {
public:
	int president_srok;
	President(string name, int money, int srok) : Employer(name, money), president_srok(srok) {}
	void print() override {
		cout << "It's his " << president_srok << " presidenting time" << endl;
	}
};

class Manager : public Employer {
public:
	int years;
	Manager(string name, int money, int years) : Employer(name, money), years(years) {}
	void print() override {
		cout << "This manager works " << years << " years" << endl;
	}
};

class Worker : public Employer {
public:
	int work_type;
	Worker(string name, int money, int work_type) : Employer(name, money), work_type(work_type) {}
	void print() override {
		cout << "This worker does " << work_type << " type of work" << endl;
	}
};




class Shape {
public:

	virtual int area() = 0;
};

class Rectangle : Shape{
public:

	int a;
	int b;

	Rectangle(int a, int b) : a(a), b(b) {}
	int area() override {
		return a * b;
	}
};

class Circle : Shape {
public:

	int radius;

	Circle(int radius) : radius(radius) {}
	int area() override {
		return 3.14 * radius * radius;
	}
};

class Triangle : Shape {
public:
	int katet1;
	int katet2;

	Triangle(int katet1, int katet2) : katet1(katet1), katet2(katet2) {}
	int area() override {
		return katet1 * katet2 / 2;
	}
};

class Trapezoid : Shape {
public:
	int a;
	int b;
	int height;

	Trapezoid(int a, int b, int height) : a(a), b(b), height(height) {}
	int area() override {
		return (a + b) * height / 2;
	}
};

int main() {
	/*Задание №1 Создать абстрактный базовый класс Employer (служащий) с чисто виртуальной функцией Print(). 
	Создайте три производных класса: President, Manager, Worker. Переопределите функцию Print() для вывода информации, 
	соответствующей каждому типу служащего.*/

	President pr("Funny Valentine", 34234235, 3);
	pr.print();

	/*Задание №2 Создать абстрактный базовый класс с виртуальной функцией – площадь.
	Создать производные классы: прямоугольник, круг, прямоугольный треугольник, трапеция со своими функциями площади. 
	Для проверки определить массив ссылок на абстрактный класс, которым присваиваются адреса различных объектов*/

	Rectangle rect(3, 5);
	Circle circle(5);
	Triangle triangle(3, 4);
	Trapezoid(4, 5, 7);
	Shape* shape[4];
	shape[0] = &rect;
	shape[1] = &circle;

	
}