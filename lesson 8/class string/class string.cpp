#include<iostream>

using namespace std;

int main() {
	/*string str = "Nadir Zamanov";
	cout << str << endl;
	cin >> str;
	cout << str << endl;*/

	string word;
	cout << sizeof(word) << endl;
	cout <<"size: " << word.size() << endl;
	cout <<"capacity: " << word.capacity() << endl;

	for (size_t i = 0; i < 14; i++)
	{
		word += "a";
	}

	cout << "size: " << word.size() << endl;
	cout << "capacity: " << word.capacity() << endl;
	word += "a";
	cout << "size: " << word.size() << endl;
	cout << "capacity: " << word.capacity() << endl;
	word += "a";
	cout << "size: " << word.size() << endl;
	cout << "capacity: " << word.capacity() << endl;
	for (size_t i = 0; i < 16; i++)
	{
		word += "a";
	}

	cout << "size: " << word.size() << endl;
	cout << "capacity: " << word.capacity() << endl;

	word.clear(); // очистится не память, обнулится сайз
	cout << "size: " << word.size() << endl;
	cout << "capacity: " << word.capacity() << endl;

	// сайз - размер строки, по которому мы строку выводим, записываем, проводим с ней какие-либор операции
	// капасити - реальный размер
	// принцип работы похож на жетский диск: инфа не удаляется, поверх нее просто пишется новая, капасити - общая емкость строки как общая емкость диска
}