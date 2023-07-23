#include<iostream>
#include<typeinfo>

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

	Cat* cat = dynamic_cast<Cat*> (animal); // проверяет возможно ли преобразование и если нет возвращает нулл. используем его а не статик каст т.к. тут может быть не только кэт
	if (cat != nullptr) cat->FooCat();
	Dog* dog = dynamic_cast<Dog*> (animal); 
	if (dog != nullptr) dog->FooDog();
	CheshireCat* che = dynamic_cast<CheshireCat*> (animal); 
	if (che != nullptr) che->fooCheshireCat();

}

void someFuncTypeId(Animal* animal) {
	animal->Sound();
	const type_info& type = typeid(*animal);
	if (type == typeid(Cat)) {
		static_cast<Cat*>(animal)->FooCat();
	}
	if (type == typeid(Dog)) {
		static_cast<Dog*>(animal)->FooDog();
	}
	if (type == typeid(CheshireCat)) {
		static_cast<CheshireCat*>(animal)->fooCheshireCat();
	}

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

	//someFuncRef(dog);

	someFuncTypeId(&cat);
	someFuncTypeId(&dog);
	someFuncTypeId(&cheCat);

}