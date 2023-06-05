#include<iostream>

using namespace std;

class Some {
	int some;
public:
	Some() {};
	Some( int some) : some{some} {}
	friend class Other;
};

class Other {
	int other;
	Some someField;
public:
	Other() {};
	Other(int other) : other{other}
	{
		someField.some = 35;
	}
	friend void foo(Other other);
	void showSome() {
		cout << someField.some << endl;
	}
};

void foo(Other other) { // имеет доступ к озер но не к сам. друг моего друга не мой друг
	cout << other.other << endl;
	other.showSome();

}

int main() {
	Other other{ 5 };
}