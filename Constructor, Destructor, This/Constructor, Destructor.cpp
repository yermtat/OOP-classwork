#include<iostream>

using namespace std;

class Car
{private:
	char model[20];
	char marka[20];
	short year;
public:

	int* liter;

	Car(); // пустой конструктор - constructor without parameters

	// у любого класса по умолчанию есть конструктор, но если мы создаем конструктор сами дефолтный удаляется
	Car(const char* model, const char* marka, int year);


	Car(const char* model, int year);

	void showInfo();
	const char* getModel();
	const char* getMarka();
	int getYear();

	void setModel(const char* model);
	void setMarka(const char* marka);
	void setYear(int year);

	
	// деструктор та же по умолчанию есть у любого класса
	// destructor, вызывается когда объект умирает
	~Car();
	
};

Car::Car() { // пустой конструктор - constructor without parameters
	this->liter = new int[1000];
	cout << "constructor without parameters" << endl;
	setMarka("empty");
	setModel("empty");
	setYear(2023);
}
// у любого класса по умолчанию есть конструктор, но если мы создаем конструктор сами дефолтный удаляется
Car::Car(const char* model, const char* marka, int year) { // конструктор это метод который вызывается при создании объектов. всегда должен быть паблик
	cout << "constructor with parameters (Model, Marka year)" << endl;
	setMarka(marka);    // конструктор с параметрами - constructor with parameters
	setModel(model);
	setYear(year);
}

Car::Car(const char* model, int year) {
	cout << "constructor with parameters (Model, year)" << endl;
	setMarka("");
	setModel(model);
	setYear(year);
}

void Car::showInfo() {
	cout << "Marks:\t" << this->marka << endl;
	cout << "Model:\t" << this->model << endl;
	cout << "Year:\t" << this->year << endl;
	cout << "______________________" << endl;
}

// в любой метод первым параметром неявно отправляется this
const char* Car::getModel() {
	return this->model;
}
const char* Car::getMarka() {
	return this->marka;
}
int  Car::getYear() {
	return this->year;
}

void  Car::setModel(const char* model) {
	strcpy_s(this->model, 20, model);
}
void  Car::setMarka(const char* marka){
	strcpy_s(this->marka, 20, marka);
}
void  Car::setYear(int year){
	if (year > 1885 && year <= 2023) {
		this->year = year;
	}
	else {
		this->year = 2023;
	}
}

Car::~Car()
{
	cout << "Destructor " << this->marka << endl;
	delete liter;
}

void foo(Car car) {
	car.setModel("Alillyah");

}

int main() {

	/*Car car1;
	car1.setMarka("MBW");
	car1.setModel("5");
	car1.getYear(2022);
	car1.showInfo();*/

	/*Car car1("BMW", "5", 2020);
	car1.showInfo();
	Car car2;
	car2.showInfo();

	Car* car = new Car("Zaporojets", "303", 1973);
	delete car;

	Car car3("C++", 1983);
	car3.showInfo();

	foo(car3);*/

	Car* carcar;
	while (true)
	{
		carcar = new Car;
		delete carcar;
	}

	// все что должно делаться в начале программы можно сунуть в конструктор, а все что в конце - в деструктор
}