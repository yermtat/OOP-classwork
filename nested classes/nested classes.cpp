#include<iostream>

using namespace std;

//class Enclosing
//{
//public:
//private:
//	class Inner {
//	public:
//	private:
//	};
//};


class Car {
private:
	string model;
	int releaseYear;
	class Engine
	{
	public:
		bool isWorked;
		int horsePower;
		int cylinders;
		Engine(int horsePower, int cylinders) :
			horsePower(horsePower),
			cylinders(cylinders)
		{
			isWorked = false;
		}

		//inner class не видит прайвет пол€ внешнего класса. можно отправить ссылкой через метод, и прайвет значение изменитс€
		void start() {
		
			isWorked = true;
			cout << "Engine vnnnnnnnnn...." << endl;
		}
	};

	// чтобы использовать внутренний класс в пол€х внешнего - внутренний объ€вл€етс€ первым

	Engine* engine;
public:
	Car(string model, int releaseYear, int horsePower, int cylinders) :
		model(model),
		releaseYear(releaseYear)
	{
		engine = new Engine(horsePower, cylinders);
		cout << "Car bombastic, fantastic!" << endl;
	}
	void move() {
		engine->start();
		cout << "Poyexali..." << endl;
	}

	~Car()
	{
		delete engine;
	}
};

int main() {

	Car bumbleBee("Camarro", 2006, 2500, 8);
	bumbleBee.move();
}