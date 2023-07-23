#include<iostream>

using namespace std;

class Point {
private:
	int x;
	int y;
public:
	Point(int x, int y) : x(x), y(y) {
		cout << "Point (" << x << ", " << y << ") was created!" << endl;
	}
	~Point()
	{
		cout << "Point (" << x << ", " << y << ") was deleted!" << endl;
	}
	void change(int x, int y) {
		this->x = x;
		this->y = y;
	}
};

class Image {
	string name;
	int width;
	int height;
	Point position; // ����� ����� ���������� ������ ����� ����� - ��� ����������. ����� �������� ������ ������ � �����, �� ��� ��������� �����
public:
	Image(string name, int width = 100, int height = 100, int x = 0, int y = 0) : 
		name(name), width(width), height(height), position(Point (x, y))
	{
		cout << "Image: " << name << " was created!" << endl;
	}
	~Image()
	{
		cout << "Image: " << name << " was deleted!" << endl;
	}
	void moveTo(int x, int y) {
		cout << "Image: " << name << "was moved to point (" << x << ", " << y << ")" << endl;
		position.change(x , y);
	}
};

int main() {
	//  relations - ��������� ����� ��������� � ��������
	// is - �������� (����� ���� ����� ������������� ������� ������)
	// has - ����� (��������)
	// depends on - ������� ��
	// uses - ����������
	// part-whole - �����-�����

	// ����������� - ����� ���� ����� �������� � ���� ������ ������� ������ 
	// 1. ������-����� ������ � ������ �������-������
	// 2. ������-����� ����� ������� � ������ ������ ������ �������-������
	// 3. ������-����� �� ���������� ��� �������-������
	// 4. ������-����� �� �������� ���������� �� �������-����� 

	Image image1("Mojna Lizu?");
	image1.moveTo(123, 100);
	Image image2("Malevich cross");
	image2.moveTo(255, 255);
}