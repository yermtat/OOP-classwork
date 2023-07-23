#include<iostream>
#include<format>

using namespace std;

class BaseClass {
private:
	int privateBaseField;
protected:
	int protectedBaseField;
public: 
	int publicBaseField;

};

class DerivedPublic : public BaseClass { // ���� ������� ������ ��������� - ����� ����� ������ ��������� ������ �������� �������� ���� �������������
public:

	void AccessInfo() {
		cout << ": public BaseClass" << endl;
		cout << "Have access public fields and methods" << publicBaseField << endl;
		cout << "Have access protected fields and methods" << protectedBaseField << endl;
		cout << "Don't have access protected fields and methods" << endl;
	}
};

class DerivedProtected : protected BaseClass {
public:
	void AccessInfo() {
		cout << ": public BaseClass" << endl;
		cout << "Have access public fields and methods" << publicBaseField << endl;
		cout << "Have access protected fields and methods" << protectedBaseField << endl;
		cout << "Don't have access protected fields and methods" << endl;
	}
};

class DerivedPrivate : private BaseClass {
public:
	void AccessInfo() {
		cout << ": public BaseClass" << endl;
		cout << "Have access public fields and methods" << publicBaseField << endl;
		cout << "Have access protected fields and methods" << protectedBaseField << endl;
		cout << "Don't have access protected fields and methods" << endl;
	}
};

class ThirdInstance : public DerivedPublic { // �������� ����� ��������� ������ ����� ��� ��� ��, ��� � ��� �������� ��� �������� ����� � ���������
public:
	void method() {
		publicBaseField = 5;
		protectedBaseField = 45;
		//privateBaseField = 34; // ������
	}
};

int main() {
	DerivedPublic publicDerived;
	publicDerived.AccessInfo();
	publicDerived.publicBaseField = 12;

	DerivedProtected protectedDerived;
	protectedDerived.AccessInfo();
	//protectedDerived.publicBaseField = 12; // ������, �.�. ������� ���, �� �������� ������������ �� ����������, � � ����� ���� ��� �� �����

	DerivedPrivate privateDerived;
	privateDerived.AccessInfo(); // 
	//privateDerived.publicBaseField = 12; // ������,  ��� �������, ������ ������� �� ��������

}