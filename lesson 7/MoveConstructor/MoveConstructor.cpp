#include"DynamicArray.h"
#include<iostream>

using namespace std;

//void foo(DynamicArray arr) {
//	arr.randomize();
//}

DynamicArray foo(DynamicArray arr) {
	//arr.randomize();
	return arr;
}

int main() {
	DynamicArray d1;
	//d1.randomize();
	//d1.show();

	/*foo(d1);*/
	d1 = foo(d1); // ��������� ������, ���� (� ���������� �������), ���� (�� ������� ����), ������

	//DynamicArray d2(d1);
	//d1.show();

	//DynamicArray d3 = d1; // copy constructor �.�. ��� �������� ������� ��������� ��
	//d3.show();

	//DynamicArray d4; // assign operator �.�. ������ ������� ��������� � ����� ������������� �1
	//d4 = d1;
	//d4.show();
}