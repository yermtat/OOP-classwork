#include<iostream>

using namespace std;

class Test
{
	int a;
	int b;

public:
	Test(int a, int b) : a{a}, b{b} {}

};

//void Foo(Test&& test) {
//
//}

void foo(int&& a) {

}

int main() {

	int number = 5; // ����� lvalue, �� ���� ����� ��������� ��������
	number = 6; // ������������ ����������� 

	int& refNumber = number; // refnumber ������ � ���� lvalue. lvalue ������
	int&& rRefNumber = number + 5; // �������� ��������� rvalue �� �������� ������������� ����� ���� �������������� � �������

	Test&& test = Test(1, 4);

	/*int* arr = new int[10];
	foo(arr);*/
}