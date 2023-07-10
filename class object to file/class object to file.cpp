#include<iostream>
#include<fstream>
#include<iomanip>
#include<Windows.h>

using namespace std;

void RusificationMessage(const char* message) {
	char rusMessage[256];
	CharToOemA(message, rusMessage);
	cout << rusMessage;
}

int RussianMenu() {
	RusificationMessage("\n������� 1 ��� ���������� � ����");
	RusificationMessage("\n������� 2 ��� ������ �� �����");
	RusificationMessage("\n������� 3 ��� ������ ������\n");

	int choice;
	cin >> choice;
	return choice;
}


class Man {
	char* name;
	char* surname;
	int age;
public:
	Man(char* name, char* surname, int age);
	Man();
	~Man();

	void Put();
	void Show();
	void SaveToFile();
	static void ShowfromFile();
};

Man::Man() {
	name = nullptr;
	surname = nullptr;
	age = 0;
}

Man::Man(char* name, char* surname, int age) {
	this->name = new char[strlen(name) + 1];
	if (!this->name) {
		RusificationMessage("������ ��� ��������� ������!");
		exit(1);
	}
	strcpy_s(this->name, strlen(name) + 1, name);

	this->surname = new char[strlen(name) + 1];
	if (!this->surname) {
		RusificationMessage("������ ��� ��������� ������!");
		exit(1);
	}
	strcpy_s(this->surname, strlen(surname) + 1, surname);

	this->age = age;
}

Man::~Man() {
	delete[] name;
	delete[] surname;
}

void Man::Put() {
	char tmp[1024];
	RusificationMessage("\n������� ���: \n");
	cin >> tmp;

	if (name) delete[] name;

	name = new char[strlen(tmp) + 1];

	if (!name) {
		RusificationMessage("������ ��� ��������� ������ !!!");
		exit(1);
	}
	strcpy_s(this->name, strlen(name) + 1, tmp);

	RusificationMessage("\n������� �������: \n");
	cin >> tmp;

	if (surname) delete[] surname;

	surname = new char[strlen(tmp) + 1];

	if (!surname) {
		RusificationMessage("������ ��� ��������� ������ !!!");
		exit(1);
	}
	strcpy_s(this->name, strlen(surname) + 1, tmp);

	RusificationMessage("������� �������: \n");
	cin >> age;
}

void Man::Show() {
	RusificationMessage(" \n���\n");
	cout << name << '\n';
	RusificationMessage(" \n�������\n");
	cout << surname << '\n';
	RusificationMessage(" \n�������\n");
	cout << age << '\n';
}

void Man::SaveToFile() {
	int size;
	fstream file("men.txt", ios::out | ios::binary | ios::app);
	if (!file) {
		RusificationMessage("���� �� �������� ��� ������ !!!");
		exit(1);
	}
	file.write((char*)&age, sizeof(int));

	size = strlen(name);
	file.write((char*)&size, sizeof(int));
	file.write((char*)name, size * sizeof(char));

	size = strlen(surname);
	file.write((char*)&size, sizeof(int));
	file.write((char*)surname, size * sizeof(char));

	file.close();
}

void Man::ShowfromFile() {
	fstream file("men.txt", ios::in | ios::binary);
	if (!file) {
		RusificationMessage("���� �� �������� ��� ������!!!");
		exit(1);
	}
	char* name, * surname;
	int age;
	int tmp;

	while (file.read((char*)&age, sizeof(int))) {
		RusificationMessage("\n���:\n");
		file.read((char*)&tmp, sizeof(int));
		name = new char[tmp + 1];
		if (!name) {
			RusificationMessage("������ ��� ��������� ������ !!!");
			exit(1);
		}
		file.read((char*)name, tmp * sizeof(char));
		name[tmp] = '\0';

		RusificationMessage("\n�������:\n");
		file.read((char*)&tmp, sizeof(int));
		surname = new char[tmp + 1];
		if (!surname) {
			RusificationMessage("������ ��� ��������� ������ !!!");
			exit(1);
		}
		file.read((char*)surname, tmp * sizeof(char));
		surname[tmp] = '\0';
		cout << surname;

		RusificationMessage("\n�������: \n");
		cout << age << '\n';
		delete[] name;
		delete[] surname;

	}
}

void main() {
	Man* man;
	do
	{
		switch (RussianMenu())
		{
		case 1:
			man = new Man;
			man->Put();
			man->SaveToFile();
			break;
		case 2:
			Man::ShowfromFile();
			break;
		case 3:
			RusificationMessage("������");
			return;
		default:
			RusificationMessage("������");
			break;
		}
	} while (true);
}