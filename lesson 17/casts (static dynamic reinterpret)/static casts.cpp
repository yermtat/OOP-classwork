#include<iostream>

using namespace std;

int main() {
	 
	// C style typecasting

	//float price = (float)2.5; //(float)	������� ��� ����������� ������������� ���� ��� ����� �������� � ��������� ������� ������
	//float other_price = 2.5f;
	//char symbol = (char)67;
	//int number = 'S';

	
	// static_cast<new_type>(expression) - ��� �������������� ��������������
	// dynamic_cast<new_type>(expression) - ��� ������������ ��������������
	// const_cast<new_type>(expression)
	// reinterpret_cast<new_type>(expression)  - ����� � ����������� �� ���������� ������������ ��� ����� ������������� 

	double numb = 23.65;
	float numb2 = static_cast<float>(numb);  // ����� ���������� ����� ������������, �� ��������� ��������� �� ��� ��������� ����������

	int a = 10;
	int b = 4;
	float result = static_cast<float>(a) / b;
	cout << result << endl;


	int* ptrA = &a;
	double* ptrDbl = (double*)ptrA;
	double* ptrD = static_cast<double*>(ptrA);
	cout << ptrDbl;

}