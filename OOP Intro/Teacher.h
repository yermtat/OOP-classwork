#pragma once
#include<iostream>

using namespace std;

class Teacher
{
private:	
	int age{};
public:
	// fields
	char name[50];
	char surname[50];
	

	// class methods (по стандартам плюсов member fucntions)
	void info(); // если прописать функцию внутри класса то она будет инлайн
	

	int getAge(); // getter - acsessor

	void setAge(int value); // setter - mutator
};
