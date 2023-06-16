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
	//using Base::baseProtectedField; // как бы создаются новые аналогичные поля, такие же
	//using Base::fooProtected;

	void fooProtected() = delete; //метод удалится здесь и не будет доступен в следующих классах, и в самом классе тоже
	// если прописать использование как Base::fooProtected(); использовать здесь можно даже после "удаления"

};

class grandChild : public Derived {
public:
	/*void method() {
		fooProtected();
	}*/
};


class B;
class A /*: public B*/ { // наследовать друг друга а и б не могут
public:
	A() {
		cout << "A constructor" << endl;
	}
	~A() {
		cout << "A destructor" << endl;
	}
};

class B : /*public A*/ public B{ // ошибка в наследовании самого себя
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