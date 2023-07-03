#include<iostream>

using namespace std;

class Animal {
public:
	string name;
	virtual void Sound() {
		cout << "Some sound" << endl;
	}
};

class Dog : public Animal {    
public:
	int age;
	void Sound() override {
		cout << name << " gaw gaw" << endl;
	}
	void FooDog() {
		cout << "Dog foo" << endl;
	}
};

class Cat : public Animal {
public:
	float price;
	void Sound() override {
		cout << name << " nya" << endl;
	}
	void FooCat() {
		cout << "Cat foo" << endl;
	}
};

class CheshireCat : public Cat {
public:
	void Sound() override {
		cout << name << " Smile" << endl;
	}
	void fooCheshireCat() {
		cout << "Cheshire cat foo" << endl;
	}
};

void someFunc(Animal* animal) {
	animal->Sound();
	//Cat& cat = (Cat&)animal;

	Cat* cat = dynamic_cast<Cat*> (animal); // проверяет возможно ли преобразование и если нет возвращает нулл 
	if (cat != nullptr) cat->FooCat();
}

void someFuncRef(Animal& animal) {
	animal.Sound();
	try {
		Cat& cat = dynamic_cast<Cat&> (animal);
		cat.FooCat();
	}
	catch (bad_cast cast) {
		cout << "Invalid cast" << endl;
	}
}

int main() {
	// dynamic_cast<new_type>(expression)

	Cat cat;
	Dog dog;
	CheshireCat cheCat;
	Animal animal;
	/*someFunc(&cat);
	someFunc(&dog);
	someFunc(&cheCat);
	someFunc(&animal);*/

	someFuncRef(dog);

}