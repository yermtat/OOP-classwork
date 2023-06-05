#include<iostream>
#include<typeinfo>

using namespace std;

template <class T>
void foo(T a, T b) { // статический полиморфизм т.е. тип определяется при компиляции и создается нужная функция
	cout << typeid(a).name() << endl;
}

template <class T, class T1>
class Test {
	T field1;
	T1 field2;
public:

	Test(T a, T1 b) : field1{ a }, field2{ b } {}
	void showInfo() {
		cout << typeid(field1).name() << endl;
		cout << typeid(field2).name() << endl;
	}
};


template <>
class Test<double, float> {
	double field1;
	float field2;
public:

	Test(double a) : field1{ a } {}
	void showInfo() {
		cout << typeid(field1).name() << " " << typeid(field2).name() << endl;
	}
};


int main() {
	foo(4, 6);
	foo(4.5, 5.3);

	Test<int, char> test1 {5, 'f'};  // нужно явно указать какого типа поле будет, иначе компилятор не знает что компилировать
}