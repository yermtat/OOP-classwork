#include<iostream>

using namespace std;

void foo()
{
	try // ������ ��������� ���� ��� � �������
	{
		throw 13;
	}
	catch (int ex)
	{
		cout << "Exception catched in func!" << endl;
		throw ex;
	}
	
}

int main() {
	/*int a = 5;
	int b = 2;*/
	/*if (b != 0) {
		cout << a /float(b) << endl;
	}
	else {
		cout << "Can not divide by zero" << endl;
	}*/

	// try catch throw (����������� ������, �������, �������) (� ��������� ������ ���� ��� finally)
	// exception 

	//try
	//{
	//	cout << "Before exception" << endl;
	//	/*throw 101;*/

	//	int a = 5;
	//	int b = 0;
	//	if (b == 0) throw b;
	//	cout << a / float(b) << endl;

	//	cout << "After exception" << endl;
	//}
	//catch (int ex)
	//{
	//	cout << "Exception catched!" << endl;
	//}


	//try {
	//	int key = 0;
	//	cin >> key;

	//	if (key == 1)
	//		throw 1;
	//	else if (key == 2)
	//		throw 2.5;
	//	else if (key == 3)
	//		throw "Alleluah";
	//	else
	//		//throw true; // ����� ������� ���-��, ���� �� ���� ���� ������ ������� ������
	//		throw new exception("Super trupper exception");
	//}
	//catch (int ex) // ��� ����� ������ ������ ������ ���� ������ � �� �����������, ����� ���������� ������� ������
	//{
	//	cout << "Int exception catched" << endl;
	//}
	//catch (double ex)
	//{
	//	cout << "Double exception catched" << endl;
	//}
	//catch (const char* ex)
	//{
	//	cout << "Char exception catched" << endl;
	//}
	//catch (/*...*/  exception ex) // ��� ��������� ������
	//{
	//	cout << "Other exception catched" << endl;
	//}
	//cout << "end of code" << endl;


	//try {
	//	foo();  // �������
	//}
	//catch (int ex) {
	//	cout << "Exception catched in main" << endl;
	//	throw ex; // �� ��������� �.�. � ���� ����������� �� ��������

	//}
	//
	//cout << "end of code" << endl;


	try {
		try {
			foo();
		}
		catch (int ex) {
			cout << "Exception catched in main in try" << endl;
		}
	}
	catch (int ex) {
		cout << "Exception catched in main" << endl;
		throw ex; // �� ��������� �.�. � ���� ����������� �� ��������

	}

	cout << "end of code" << endl;
}