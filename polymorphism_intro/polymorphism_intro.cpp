#include<iostream>

using namespace std;

template <class T> //статический полиморфизм
T foo(T a, T b) { // при компил€ции  под каждый используемый тип данных создаетс€ сво€ функци€
	return a + b;
}


// virtual override - ищет есть ли у объекта дочернего класса сво€ верси€ этого виртуального метода и если есть, вызываетс€ она, если нет - верси€ родительска€
// работает только через ссылку или указатель на объект, т.к. при параметре в виде объекта в функции создатс€ копи€ со свойствами только родительского объекта
class Animal {
public:
	string name;
	virtual void Sound() {
		cout << "Some sound" << endl;
	}
};

class Dog : public Animal {    // если функци€ в родительском классе виртуал, то если в дочерних эта функци€ переопределена, она автоматически становитс€ оверрайд, даже если не писать
public:
	int age;
	void Sound() override {
		cout << name << " gaw gaw" << endl;
	}
};

class Cat : public Animal {
public:
	float price;
	void Sound() override {
		cout << name << " nya" << endl;
	}
};

//void info(Dog dog) {
//	cout << "This is " << dog.name << endl;
//	dog.Sound();
//}
//
//void info(Cat cat) {
//	cout << "This is " << cat.name << endl;
//	cat.Sound();
//}

//void info(Animal* animal) {
//	cout << "This is " << animal->name << endl;
//	animal->Sound();  //
//}

//void info(Animal& animal) {
//	cout << "This is " << animal.name << endl;
//	animal.Sound();  //
//}

void info(Animal animal) { // создат копию и поэтому выдаст саунд родительского объекта
	cout << "This is " << animal.name << endl;
	animal.Sound();  //
}


int main() {
	/*cout << foo(2, 5) << endl;
	cout << foo(2.3, 5.78) << endl;
	string str1 = "Atilla";
	string str2 = "String";
	cout << foo(str1, str2) << endl;*/

	Animal animal;
	animal.name = "666";
	//animal.Sound();

	Dog dog;
	dog.name = "Bobik";
	//dog.Sound();

	Cat cat;
	cat.name = "Murka";
	//cat.Sound();

	Animal& cat1 = cat; // ссылка на базовый класс, под который можно хранить любой объект дочернего класса
	Animal& dog1 = dog;
	Animal* cat2 = new Cat();
	cat2->name = "Alexander";
	Animal* dog2 = new Dog();
	dog2->name = "Innokentiy";

	//dog1.Sound(); // dog1 видит только пол€ энимал, т.к. мы ссылаемс€ на родительский класс
	((Dog*)(dog2))->age; // апкастинг(???)

	/*dog1.Sound();
	cat1.Sound();
	dog2->Sound();
	cat2->Sound();*/

	info(cat);
	//info(cat1); //ошибка т.к. ссылка на род. класс
	//info(cat2);

	// и кэт и дог €вл€ютс€ энимал поэтому функци€ принимающа€ анимал примет и их тоже

	/*info(&cat);
	info(cat2);
	info(&dog1);*/

	info(cat);
	/*info()*/

	

}