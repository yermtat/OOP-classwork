#include<iostream>

using namespace std;

class A {
public:
	A()
	{
		cout << "constructor A" << endl;
	}

	int fieldA;
	void methodA() {
		cout << "method a" << endl;
	}

	void print() {
		cout << "print A" << endl;
	}

	~A()
	{
		cout << "destructor A" << endl;
	}
};

class B {
public:

	B()
	{
		cout << "constructor B" << endl;
	}

	int fieldB;
	void methodB() {
		cout << "method b" << endl;
	}

	void print() {
		cout << "print B" << endl;
	}

	~B()
	{
		cout << "destructor B" << endl;
	}
};

class C : public A, public B { // ��������� ������������ � ����� � � ����� �. ���� ����� �������� ������� ������ � � �, �� ������������ 
								// ��������� � ���������� �������, �.�. �� ���� �, ���� �, � ���� � ���� �
public:
	C()
	{
		
		cout << "constructor C" << endl;
	}

	~C()
	{
		cout << "destructor C" << endl;
	}

	void print() {
		A::print();
		B::print();
		cout << "print C" << endl;
	}
};


class D : public A, public C {
public:

	D()
	{
		cout << "constructor D" << endl;
	}

	~D()
	{
		cout << "destructor D" << endl;
	}
};


class Base {
public:
	Base() {
		cout << "constructor Base" << endl;
	}
	~Base() {
		cout << "destructor Base" << endl;
	}
};

class DeriivedA : public Base {
public:
	DeriivedA() {
		cout << "constructor DeriivedA" << endl;
	}
	~DeriivedA() {
		cout << "destructor DeriivedA" << endl;
	}
};

class DeriivedB : public Base {
public:
	DeriivedB() {
		cout << "constructor DeriivedB" << endl;
	}
	~DeriivedB() {
		cout << "destructor DeriivedB" << endl;
	}
};

class DeriivedAB : public DeriivedA, public DeriivedB {
public:
	DeriivedAB() {
		cout << "constructor DeriivedAB" << endl;
	}
	~DeriivedAB() {
		cout << "destructor DeriivedAB" << endl;
	}
};

class Human {
public:
	string name;
	string lastname;
	int age;
	Human(string name, string lastname, int age) :
		name(name),
		lastname(lastname), 
		age(age)
	{}

	void showInfo() {
		cout << "Name: " << name << endl;
		cout << "Lastname: " << lastname << endl;
		cout << "Age: " << age << endl;
	}
};

class Student : public Human {
public:

	string groupName;
	Student(string name, string lastname, int age, string groupName) :
		Human(name, lastname, age),
		groupName(groupName) 
	{}

	void showInfo() {
		/*cout << "Name: " << name << endl;
		cout << "Lastname: " << lastname << endl;
		cout << "Age: " << age << endl;*/

		Human::showInfo();
		cout << "Group name: " << groupName << endl;
	}
};

int main() {
	/*C obj;*/

	/*obj.fieldA = 56;
	obj.fieldB = 78;
	obj.methodA();
	obj.methodB();*/

	//obj.print(); // print � ������ � ����������� � � �, �� ���� � � ��� ������ � � � � � ���� - ������

	/*obj.A::print();
	obj.B::print();*/



	/*Student at("Atilla", "ismayil", 14, "3_22_2_ru");
	at.showInfo();*/


	/*D objD;*/

	DeriivedAB objAB();
}