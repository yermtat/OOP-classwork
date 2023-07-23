#include"DynamicArray.h"
#include<iostream>

using namespace std;

//void foo(DynamicArray arr) {
//	arr.randomize();
//}

DynamicArray foo(DynamicArray arr) {
	//arr.randomize();
	return arr;
}

int main() {
	DynamicArray d1;
	//d1.randomize();
	//d1.show();

	/*foo(d1);*/
	d1 = foo(d1); // сработает дефолт, копи (в переменную функции), копи (из ретерна сюда), ассайн

	//DynamicArray d2(d1);
	//d1.show();

	//DynamicArray d3 = d1; // copy constructor т.к. при создании объекта сработает он
	//d3.show();

	//DynamicArray d4; // assign operator т.к. объект сначала создается а потом присваивается д1
	//d4 = d1;
	//d4.show();
}