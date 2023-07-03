#include<iostream>

using namespace std;

int main() {
	// reinterpret_cast<new_type>(expression)
	/*int numb = 5;
	int* ptrNumb = &numb;

	int why = (int)ptrNumb;
	cout << why << endl;
	cout << ptrNumb << endl;
	
	int whyWhy = reinterpret_cast<int>(ptrNumb);
	cout << why << endl;
	cout << whyWhy << endl;
	cout << ptrNumb << endl;*/


	string str = "Atilla";
	int* a = reinterpret_cast<int*>(&str);  // по сути тоже небезопасный тайпкастинг, как и с стайл
	cout << a << endl;
}