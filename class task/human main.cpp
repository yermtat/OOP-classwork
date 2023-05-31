#include "Human.h"
#include<iostream>

using namespace std;

int main() {

	Human human1;

	cin >> human1;
	cout << human1 << endl;

	Human human2;

	cin >> human2;
	cout << human2 << endl;

	cout << boolalpha << (human2 == human1) << endl;
	cout << boolalpha << (human2 != human1) << endl;
	cout << boolalpha << (human2 < human1) << endl;
	cout << boolalpha << (human2 > human1) << endl;
	cout << boolalpha << (human2 <= human1) << endl;
	cout << boolalpha << (human2 >= human1) << endl;

}