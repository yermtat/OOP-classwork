#include<iostream>

using namespace std;

class Animal {  // ����� � ������ ���� ���� �� ���� ����� ����������� ����� - ���� ����� ��������� ����������� �������. 
public:			// ������� ������ ������������ ������ ����������
	string name;

	// Pure virtual method
	virtual void Sound() = 0;   // ���� � ������ ���� ������ ����������� ������, � ��� ����� - ����� ������ �������� �������������
};

class Dog : public Animal {    // ���� �����, ����������� �� ������������, �� ��������� ����������� ������ �� ������������� - �� ��� ���������� �����������
public:
	int age;
	/*void Sound() override {
		cout << name << " gaw gaw" << endl;
	}*/
};

class Cat : public Animal {
public:
	float price;
	void Sound() override {
		cout << name << " nya" << endl;
	}
};

//void info(Animal* animal) {
//	cout << "This is " << animal->name << endl;
//	animal->Sound();  //
//}

//void info(Animal& animal) {
//	cout << "This is " << animal.name << endl;
//	animal.Sound();  //
//}

int main() {

	// Animal animal; // ������� ������ ������������ ������ ����������

	Animal* // ����� ������ ��� ��������� ��� ������ �� ������������ ���� ���� �� �����������

}