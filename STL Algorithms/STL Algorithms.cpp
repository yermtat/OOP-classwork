#include<iostream>
#include<algorithm>
#include <vector>

using namespace std;

class Cat {
public:
	string name;
	int age;
	int life;
	Cat(string name, int age, int life) : name(name), age(age), life(life) {}    

	int operator()(const Cat& cat) {
		return cat.age;
	}

	/*friend bool operator>(const Cat& left, const Cat& right) {
		return left.age > right.age;
	}
	friend bool operator<(const Cat& left, const Cat& right) {
		return left.age < right.age;
	}
	friend bool operator>=(const Cat& left, const Cat& right) {
		return left.age >= right.age;
	}
	friend bool operator<=(const Cat& left, const Cat& right) {
		return left.age <= right.age;
	}*/

	friend ostream& operator<<(ostream out, const Cat& cat) {
		out << cat.name << '\t' << cat.age;
	}
	
};

bool age_compare(const Cat& left, const Cat& right) {
	return left.age < right.age;
}

bool isPrime(int number);
void showVector(const vector<int>& vec);

bool isEven(int number);


int main() {
	// STL ALgorithm
	/*int numb;*/

	vector<int> numbs{ 13, 18, 9, 728, 1, 3, 7, 668 };

	//cout << "Enter any number for search in vector: " << endl;
	//cin >> numb;
//	auto result = find(numbs.begin(), numbs.end(), numb); // find возвращает итератор элемента который мы ищем, если не находит возвращает итератор энд
//
//
//	/*cout << *result << endl;*/
//
//	if (result != numbs.end()) {
//		cout << *result << " in this vector!" << endl;
//	}
//	else {
//		cout << "there is no " << numb << " in this vector" << endl;
//	}



	/*auto result_fif = find_if(numbs.begin(), numbs.end(), isPrime);

	if (result_fif != numbs.end()) {
		cout << "One or mone prime in this vector" << endl;
	}
	else {
		cout << "There is none prime numbers" << endl;
	}*/

	/*showVector(numbs);
	vector<int> new_numbs;*/
	/*copy(numbs.begin(), numbs.end(), back_inserter(new_numbs));
	showVector(new_numbs);*/

	/*copy_if(numbs.begin(), numbs.end(), back_inserter(new_numbs), isPrime);*/
	/*copy_if(numbs.begin(), numbs.end(), back_inserter(new_numbs), isEven);
	showVector(new_numbs); */

	/*int arr[] {13, 18, 9, 728, 1, 3, 7, 668 };
	auto result_arr = find(arr, arr + 7, 9);
	if (result_arr != arr + 7) {
			cout << *result_arr << " in this vector!" << endl;
		}
		else {
			cout << "there is no " << 9 << " in this vector" << endl;
		}
	*/

	/*cout << *(max_element(numbs.begin(), numbs.end())) << endl;
	cout << *(min_element(numbs.begin(), numbs.end())) << endl;*/

	vector<Cat> cats{
		Cat{"Kuroneko", 150, 8},
		Cat{"Alexander from Macedonia", 18, 4},
		Cat{"Gaius Julius Caesar", 55, 0},
		Cat{"Vasilius", 8, 4},
		Cat{"Strelka", 19, 9},
		Cat{"Arsenius", 8, 1},
		Cat{"Puss in boots", 15, 1},
		Cat{"Simba", 5, 7},
		Cat{"Barbie",39, 0},
		Cat{"Ken", 37, 0},
		Cat{"Chuck", 83, INT32_MAX} };

	auto max_cat = max_element(cats.begin(), cats.end(), age_compare);
	auto min_cat = min_element(cats.begin(), cats.end(), age_compare);

	/*auto max_cat = max_element(cats.begin(), cats.end());
	auto min_cat = min_element(cats.begin(), cats.end());*/

	cout << (*max_cat).name << endl;
	cout << (*min_cat).name << endl;


	sort(cats.begin(), cats.end(), age_compare);
	
	for (int i = 0; i < 11; i++)
	{
		cout << "Name: " << cats[i].name << endl;
		cout << "Age: " << cats[i].age << endl;
		cout << "Lifes left: " << cats[i].life << endl;
		cout << '\n';
	}

}

bool isPrime(int number) {
	if (number == 1) return false;
	for (size_t i = 2; i <= number / 2; i++)
	{
		if (number % i == 0) return false;
	}
	return true;
}

void showVector(const vector<int>& vec) {
	for (int item : vec)
	{
		cout << item << ' ';
	}
	cout << '\n';

}

bool isEven(int number) {
	return !(number % 2);
}