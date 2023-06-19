#include<iostream>

using namespace std;

class Printer {

	
public:
	int qt;
	virtual void print(string page) {
		cout << "printed page: " << endl;
		cout << page << endl;
	}

};


class Epson : public Printer{
	string model;
	string print_type;
public: 
	Epson(string model, string print_type) : model(model), print_type(print_type) {};
	void print(string page) override {
		cout << "Printed by Epson " << model << ", " << print_type << endl;
		cout << page << endl;
	}
};

class HP : public Printer {
	string model;
	string print_type;
public:
	HP(string model, string print_type) : model(model), print_type(print_type) {};
	void print(string page) override {
		cout << "Printed by HP "<< model << ", " << print_type << endl;
		cout << page << endl;
	}
};

void print_page(Printer& printer, string page) {
	cout << "Printing is starting" << endl;
	printer.print(page);
}

int main() {
	
	Epson epson("234", "dot matrix");
	HP hp("88000555", "laser");

	print_page(epson, "My name is Walter White");
	print_page(hp, "never gonnas give ypu up");


}