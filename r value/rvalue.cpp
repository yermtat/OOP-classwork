#include<iostream>

using namespace std;

class Test
{
	int a;
	int b;

public:
	Test(int a, int b) : a{a}, b{b} {}

};

//void Foo(Test&& test) {
//
//}

void foo(int&& a) {

}

int main() {

	int number = 5; // слева lvalue, то чему можно присвоить значение
	number = 6; // присваивание копирование 

	int& refNumber = number; // refnumber хранит в сеье lvalue. lvalue ссылка
	int&& rRefNumber = number + 5; // передает выражение rvalue не создавая промежуточных копий если использоваться в функции

	Test&& test = Test(1, 4);

	/*int* arr = new int[10];
	foo(arr);*/
}