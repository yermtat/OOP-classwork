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
	

	// class methods (�� ���������� ������ member fucntions)
	void info(); // ���� ��������� ������� ������ ������ �� ��� ����� ������
	

	int getAge(); // getter - acsessor

	void setAge(int value); // setter - mutator
};
