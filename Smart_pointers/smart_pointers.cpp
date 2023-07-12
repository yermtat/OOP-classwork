#include<iostream>


using namespace std;

template<class T>
class my_auto_ptr
{
private:
	T* ptr;
public:
	explicit my_auto_ptr(T* ptr = nullptr) : ptr(ptr) {}
	~my_auto_ptr() { delete ptr; }

	T& operator* ()const {
		return *ptr;
	}
	T* operator-> ()const {
		return ptr;
	}

};



class Test
{
public:
	Test() { cout << "Constructed" << endl; }
	~Test() { cout << "Destructed" << endl; }
	void testFoo() {
		cout << "Foooooooooo" << endl;
	}

private:

};


class ForShared {
	string name;
	int* array;
public:
	ForShared(string name) : name(name)
	{
		array = new int[100000];
		cout << "Object" << name << " constructed" << endl;
	}
	~ForShared()
	{
		delete[] array;
		cout << "Object" << name << " destructed" << endl;
	}

	void Foo() {
		cout << "Foooooooooo" << endl;
	}
	
};

my_auto_ptr<Test> foo() {
	//Test* tmp = new Test;
	///*return;*/
	//throw new exception; // ���������� �� �������� ��������� �.�. ����� �� ������� ���������� ������ ������������ ������
	//delete tmp;

	my_auto_ptr<Test> tmp(new Test); 
	return tmp; // ����
}

auto_ptr<Test> foo1() {
	auto_ptr<Test> tmp(new Test);
	return tmp;

}

unique_ptr<Test> foo2() {
	unique_ptr<Test> tmp(new Test);
	return tmp;
}

int main() {
	// smart pointers - ������ ��� ��������� ������ ��������� �������
	// auto_ptr<T>
	// unique_ptr<T>
	// shared_ptr<T>
	// weak_ptr<T>

	//foo();

	/*my_auto_ptr<Test> test (foo());  // ��� ������ �� ������� ������ ��������� � ���� ����������� �������������� ������ ������� ����� �������� �������
	test->testFoo();*/

	//auto_ptr<Test> test1(foo1());  // � ���������� ����-��� ������ ��������� ����������� ������������
	//test1->testFoo(); // � ������� ��������� �������, �� ������ �� �������������. 

	// ������������ ����� �� ������ ������������ �.�. �� �� ���� ������������


	//unique_ptr<Test>test3 (foo2());   
	//test3->testFoo();

	//Test* test = new Test; // ���� ������� ������� ��������� ���������� - ���� ���� ���� ��������� ���� ���� � ��� �� �������, �� ��� �������� ������ �� ��� �������� � ��� �������
	//unique_ptr<Test> t1(test);
	//unique_ptr<Test> t2(test); 


	ForShared* shareObj = new ForShared("first");

	shared_ptr<ForShared> share1(shareObj);
	shared_ptr<ForShared> share2(share1);
	shared_ptr<ForShared> share3 = make_shared<ForShared>("second");
	cout << "Share " << share1.use_count() << " smart pointers" << endl;
	cout << "Share " << share3.use_count() << " smart pointers" << endl;


	
}