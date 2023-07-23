#include<iostream>

using namespace std;

class Base {
public:
	int basePublicField;
	void fooPublic() {
		cout << "Foo public";
	}
protected:
	int baseProtectedField;
	void fooProtected() {
		cout << "Foo protected";
	}
};

class Derived : /*public*/ private Base {
private:
	using Base::fooPublic;
public:
	//using Base::baseProtectedField; // ��� �� ��������� ����� ����������� ����, ����� ��
	//using Base::fooProtected;

	void fooProtected() = delete; //����� �������� ����� � �� ����� �������� � ��������� �������, � � ����� ������ ����
	// ���� ��������� ������������� ��� Base::fooProtected(); ������������ ����� ����� ���� ����� "��������"

};

class grandChild : public Derived {
public:
	/*void method() {
		fooProtected();
	}*/
};


class B;
class A /*: public B*/ { // ����������� ���� ����� � � � �� �����
public:
	A() {
		cout << "A constructor" << endl;
	}
	~A() {
		cout << "A destructor" << endl;
	}
};

class B : /*public A*/ public B{ // ������ � ������������ ������ ����
public:
	B() {
		cout << "B constructor" << endl;
	}
	~B() {
		cout << "B destructor" << endl;
	}
};

int main() {
	/*Derived derived;

	derived.baseProtectedField;
	derived.fooProtected();
	grandChild grand;
	grand.baseProtectedField;
	grand.fooPublic();*/
}