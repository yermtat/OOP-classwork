#include<iostream>

using namespace std;

class Animal {  // когда в классе есть хотя бы один чисто виртуальный метод - этот класс считается абстрактным классом. 
public:			// Создать объект абстрактного класса невозможно
	string name;

	// Pure virtual method
	virtual void Sound() = 0;   // если у класса есть только виртуальные методы, и нет полей - такие классы называют интерфейсными
};

class Dog : public Animal {    // если класс, наследующий от абстрактного, не реализует виртуальные методы из родительского - он сам становится абстрактным
public:
	int age;
	/*void Sound() override {
		cout << name << " gaw gaw" << endl;
	}*/
};

class Cat : public Animal {
public:
	float price;
	void Sound() override {
		cout << name << " nya" << endl;
	}
};

//void info(Animal* animal) {
//	cout << "This is " << animal->name << endl;
//	animal->Sound();  //
//}

//void info(Animal& animal) {
//	cout << "This is " << animal.name << endl;
//	animal.Sound();  //
//}

int main() {

	// Animal animal; // Создать объект абстрактного класса невозможно

	Animal* // можно писать как указатель или ссылку на родительский даже если он абстрактный

}