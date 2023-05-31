#pragma once
#include<iostream>
#in
using namespace std;

class Human
{
public:
	char name[20];
	char lastname[20];
	int age;

	/*Human(char* name,char* lastname, int age) : name{name ? new char[strlen(name) + 1] : nullptr }, 
		lastname{ lastname ? new char[strlen(lastname) + 1] : nullptr }, age{ age } {
		if (name && lastname) {
			strcpy_s(this->name, strlen(name) + 1, name);
			strcpy_s(this->lastname, strlen(lastname) + 1, lastname);
		}
	}

	Human() : Human(nullptr, nullptr, 0) {

	}*/

	

	//Human(char name[50], char lastname[50], int age) : name{ name }, lastname{ lastname }, age{ age } {}

	//Human() : Human(nullptr, nullptr, 0){}

	Human(char name[], char lastname[], int age) {
		strcpy_s(this->name, name);
		strcpy_s(this->lastname, lastname);
		this->age = age;
	}


	friend ostream& operator<<(ostream& output, const Human& human) {
		output << "Name: " << human.name << " Lastname: " << human.lastname << " Age: " << human.age;
		return output;
	}

	friend istream& operator>>(istream& input, Human& human) {
		input >> human.name;
		input.ignore(1);
		input >> human.lastname;
		input.ignore(1);
		input >> human.age;
		return input;
	}

	friend bool operator>(const Human& left, const Human& right) {
		return left.age > right.age;
	}

	friend bool operator<(const Human& left, const Human& right) {
		return left.age < right.age;
	}

	friend bool operator>=(const Human& left, const Human& right) {
		return left.age >= right.age;
	}

	friend bool operator<=(const Human& left, const Human& right) {
		return left.age <= right.age;
	}

	friend bool operator==(const Human& left, const Human& right) {
		return left.age == right.age;
	}

	friend bool operator!=(const Human& left, const Human& right) {
		return !(left.age == right.age);
	}


};





