#include<iostream>

using namespace std;

class Address
{
private:
	string city;
	string street;
	int house;
	int apartment;
public:
	Address(string city, string street, int house, int apartment) :
		city(city), street(street), house(house), apartment(apartment) {}
	void Show() {
		cout << "City: " << city << "; " << endl;
		cout << "Street: " << street << ";" << endl;
		cout << "Mouse: " << house << ";" << endl;
		if (apartment != 0) {
			cout << "Apartment: " << apartment << ";" << endl;
		}
	}
};

class Student {
private:
	string firstName;
	string lastName;
	int age;
	float score;
	Address& address;
public:
	Student(string firstName, string lastName, int age, float score, Address& address) :
		firstName(firstName), lastName(lastName), age(age), score(score), address(address)
	{}

	void Show() {
		cout << "Hi! My name is " << firstName << " " << lastName << endl;
		cout << "I'm " << age << "years old" << endl;
		cout << "My address: ";
		address.Show();
	}
};


int main() {
	//  relations - ��������� ����� ��������� � ��������
	// is - �������� (����� ���� ����� ������������� ������� ������)
	// has - ����� (��������)
	// depends on - ������� ��
	// uses - ����������
	// part-whole - �����-�����


	// ��������� 
	// 1. ������-����� ������ � ������ �������-������
	// 2. ������-����� ����� ������� � ������ ����� ��� ������ �������-������
	// 3. ������-����� ����� ������������ ��� �������-������
	// 4. ������-����� �� �������� ���������� �� �������-����� 


}