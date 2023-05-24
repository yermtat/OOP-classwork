#include<iostream>
//#include<string.h>
#include "Teacher.cpp"

using namespace std;

//class Teacher
//{
//public:
//	// fields
//	char* name[50];
//	char* surname[50];
//	int age{};
//
//	// class methods (�� ���������� ������ member fucntions)
//	void info(); // ���� ��������� ������� ������ ������ �� ��� ����� ������
//};
//
//void Teacher::info() { 
//		cout << "Name: " << name << endl;
//		cout << "LastName: " << surname << endl;
//		cout << "Age; " << age << endl;
//}

struct Student // ������ �� ���������
{
	char name[50];
	char surname[50];
	int age{};

	void info() {
		cout << "Name: " << name << endl;
		cout << "LastName: " << surname << endl;
		cout << "Age; " << age << endl;
	}
};

void showInfo(Student student) {
	cout << "Name: " << student.name << endl;
	cout << "LastName: " << student.surname << endl;
	cout << "Age; " << student.age << endl;
}

int main() {
	// 4 �������� ���
	// Encapsulation
	// Polymorphism
	// Inheritance
	// Abstraction

	/*cout << sizeof(Student) << endl;
	cout << sizeof(Teacher) << endl;*/

	// ������ �� ��������� private
	/*Student st1;
	st1.age = 25;
	Teacher tch1;
	tch1.age = 2; */// ��� ����� ������� ������ ���� ��������� ������ ��� ������

	/*Student st1;
	strcpy_s(st1.name, "Atilla");
	strcpy_s(st1.surname, "Ismayil");
	st1.age = 25;
	Teacher tch1;
	strcpy_s(tch1.name, "Nadir");
	strcpy_s(tch1.surname, "Zamanov");
	tch1.age = 42;

	st1.info();
	tch1.info();*/



	// PPP - public, protected, private
	// public ����� ���� � ������ ������ � ��� �������
	// private ����� ������ ������ ������ 
	// protected �������� ������ ������ � ��� �������� �������, � ��� �� ������������� �������

	Teacher teacher;
	teacher.setAge(-5);
	cout << teacher.getAge() << endl;
	teacher.setAge(42);
	cout << teacher.getAge() << endl;

	// ��������� ������������, ����� ������ �� ����� ��� ���� �������� � ��� �� ����� �����������, �������� ���������� ������� ����� ���� � �����. � �����
	// ������ ���������� ����� ����� �������������� ����� ������ �������� � ������������

}