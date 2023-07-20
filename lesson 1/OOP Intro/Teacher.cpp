#include "Teacher.h"

void Teacher::info() {
	cout << "Name: " << name << endl;
	cout << "LastName: " << surname << endl;
	cout << "Age; " << age << endl;
}

int Teacher::getAge() {
	return age;
}

void Teacher::setAge(int value) {
	if (value > 0) {
		age = value;
	}
}