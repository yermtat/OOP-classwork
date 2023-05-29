#pragma once
class Point
{
private:
	double x;
	double y;
public:
	Point():Point(0, 0) {}
	Point(double x, double y):x{x}, y{y} {}
	void show();
	void read();
	
	
	/*Point add(const Point& point) {
		return Point(this->x + point.x, this->y + point.y);
	}*/

	/*static Point add(const Point& point1, const Point& point2) {
		return Point(point1.x + point2.x, point1.y + point2.y);
	}*/

	// из-за того что х и у прайвет пришлось писать в классе
	friend Point operator+(const Point& left, const Point& right) {
		return Point(left.x + right.x, left.y + right.y);
	}

	friend Point operator-(const Point& left, const Point& right) {
		return Point(left.x - right.x, left.y - right.y);
	}

	friend Point operator*(const Point& left, double value) {
		return Point(left.x * value, left.y * value);
	}
	friend Point operator*(double value, const Point& left) {
		return Point(left.x * value, left.y * value);
	}

	friend Point operator/(const Point& left, double value) {
		return Point(left.x / value, left.y / value);
	}

	// unar minus
	const Point operator-() {
		return Point(-x, -y);
	}

	// -- ++
	Point& operator--() {
		--x;
		--y;
		return *this;
	}
	Point& operator++() {
		++x;
		++y;
		return *this;
	}

	const Point operator--(int) {
		Point point(x, y);
		--(*this);
		return point;
	}

	const Point operator++(int) {
		Point point(x, y);
		++(*this);
		return point;
	}
	
};

