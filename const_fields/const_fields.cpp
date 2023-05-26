#include<iostream>

using namespace std;

class House {

	static int count;

public:
	bool hasDoor;
	bool hasWindow;
	bool hasRoof;
	const int fundament;
	 // инициализировать константу можно только через список инициализации
	// initialize list
	House()
		: hasDoor{ false }, hasWindow{ false }, hasRoof{ false }, fundament{ 0 }
	{
		count++;
	}

	House(int fundament) : fundament{ fundament } 
	{

	}
};

int House::count{ 0 };

int main() {

	/*House house1{ true, true, false };
	cout << house1.fundament << endl;*/

	House house1(25);
	cout << house1.fundament << endl;
	//house1.fundament = 45; // значение придается только один раз, потом изменить нельзя
}