#include<iostream>
#include<format>

using namespace std;

//Base class - главный класс
//Derived class - наследовательный класс

class Vehicle
{
private:
	//fields
	//Engine 
	//Wheels



	//view info
	//view fuel
	//refuel
	//start

public:
};


class Truck : public Vehicle
{
private:


public:
};

class Bus : public Vehicle
{
private:

public:
};

class Tractor : public Vehicle
{
private:

public:
};

// наследовать возможно только паблик и протектед поля

class Person {
protected:
	string firstName;
	string lastName;
	int age;
public:
	Person() {
		cout << "Person default constructor" << endl;
	}

	Person(string firstName, string lastName, int age) :
		firstName(firstName), lastName(lastName), age(age) {
	
		cout << "Person constructor" << endl;
	}

	string getInfo() const {
		return format("FirstName: ();\n LastName: {};\n Age: {};\n", firstName, lastName, age);
	}

	string getGreetings(string msgText = "") const {
		string result = "I am " + firstName;
		if (!msgText.empty()) {
			result += ". I say:	";
			result += msgText;
		}
		else {
			result += ". I say nothing";
		}

		return result;
	}

	~Person() {
		cout << "Person destructor" << endl;
	}
};

class Student : public Person {
private:
	string faculty;
	double score;
public:
	Student(int score, string faculty = "Development") :
		faculty(faculty),
		score(score)
	{
		cout << "Student constructor" << endl;
	}

	Student(string firstName, string lastName, int age, int score, string faculty = "Development") :
		
		faculty(faculty),
		score(score)
	{
		this->firstName = firstName;
		this->lastName = lastName;
		this->age = age;
		cout << "Student constructor" << endl;
	}

	bool isSuccessfull() const {
		cout << "Hi. I am " << firstName << " " << lastName << endl;
		if (score >= 7) {
			cout << "I'm successful student. wow" << endl;
			return true;
		}
		cout << "Bextinizi bir daha sinayin" << endl;
		return false;
	}

	~Student() {
		cout << "student destructor" << endl;
	}
	
};

int main() {
	/*Person person = Person("Nadir", "zamanov", 42);
	cout << person.getInfo() << endl;
	cout << person.getGreetings("heeeyaaaaa");*/


	/*Student student1(8);
	student1.isSuccessfull();*/

	/*Student student(8);*/

	Student student3("Nadir", "Zamanov", 42, 12);
	student3.isSuccessfull();
	
}