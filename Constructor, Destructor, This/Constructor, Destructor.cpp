#include<iostream>

using namespace std;

class Car
{private:
	char model[20];
	char marka[20];
	short year;
public:

	int* liter;

	Car(); // ������ ����������� - constructor without parameters

	// � ������ ������ �� ��������� ���� �����������, �� ���� �� ������� ����������� ���� ��������� ���������
	Car(const char* model, const char* marka, int year);


	Car(const char* model, int year);

	void showInfo();
	const char* getModel();
	const char* getMarka();
	int getYear();

	void setModel(const char* model);
	void setMarka(const char* marka);
	void setYear(int year);

	
	// ���������� �� �� �� ��������� ���� � ������ ������
	// destructor, ���������� ����� ������ �������
	~Car();
	
};

Car::Car() { // ������ ����������� - constructor without parameters
	this->liter = new int[1000];
	cout << "constructor without parameters" << endl;
	setMarka("empty");
	setModel("empty");
	setYear(2023);
}
// � ������ ������ �� ��������� ���� �����������, �� ���� �� ������� ����������� ���� ��������� ���������
Car::Car(const char* model, const char* marka, int year) { // ����������� ��� ����� ������� ���������� ��� �������� ��������. ������ ������ ���� ������
	cout << "constructor with parameters (Model, Marka year)" << endl;
	setMarka(marka);    // ����������� � ����������� - constructor with parameters
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

// � ����� ����� ������ ���������� ������ ������������ this
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

	// ��� ��� ������ �������� � ������ ��������� ����� ������ � �����������, � ��� ��� � ����� - � ����������
}