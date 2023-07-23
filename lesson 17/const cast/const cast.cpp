#include<iostream>

using namespace std;

void foo(const int* a, const int& b, int* c) {
	int* fooA = const_cast<int*> (a);
	//a = 25;
	*fooA = 136;
	const_cast<int&>(b) = 69;
	const int* fooC = const_cast<const int*> (c);
	*fooC = 45;

}

int main() {

	// const_cast<new_type>(expression)  

	// убрать или добавить константу в изначально констатном значении нельзя
	// работает только с указателями
	
	//int a = 5;
	//const int* ptrA = &a;

	////*ptrA = 25;
	//int* ptr = const_cast<int*>(ptrA);
	//*ptr = 25;
	//cout << a << endl;


	int numb1 = 12; // если будет конст инт не сработает
	int numb2 = 10;
	int numb3 = 36;
	cout << "Before function call" << endl;
	cout << "numb1 = " << numb1 << endl;
	cout << "numb2 = " << numb2 << endl;
	foo(&numb1, numb2, &numb3);
	cout << "After functiom call" << endl;
	cout << "numb1 = " << numb1 << endl;
	cout << "numb2 = " << numb2 << endl;
	//foo(&numb1, numb2); 
}