#include <iostream>
#include <cmath>

using namespace std;
const double PI = 3.141592653589793;

class Point {
protected:
	double startX, startY, endX, endY;
public:
	void setStartCoordinates(double x, double y) {
		this->startX = x;
		this->startY = y;
	}
	void setEndCoordinates(double x, double y) {
		this->endX = x;
		this->endY = y;
	}
};

class Otrezok : public Point {
public:
	double getLength() {
		return sqrt(pow(endX - startX, 2) + pow(endY - startY, 2));
	}
};

class Circle : public Otrezok {
private:
	double radius, area, circlelengh;
public:
	void setRadius() {
		radius = getLength();
	}

	void setArea() {
		area = PI * pow(radius, 2);
	}

	void setCirclelen() {
		circlelengh = 2 * PI * radius;
	}

	double getArea() {
		return area;
	}

	double getCirclelen() {
		return circlelengh;
	}
};

int main() {
	setlocale(LC_ALL, "ru");
	double startX;
	double startY;
	double endX;
	double endY;

	cout << "Введите координаты начала радиуса: ";
	cin >> startX >> startY;
	cout << "Введите координаты конца радиуса: ";
	cin >> endX >> endY;

	Circle circle;
	circle.setStartCoordinates(startX, startY);
	circle.setEndCoordinates(endX, endY);
	circle.setRadius();
	circle.setArea();
	circle.setCirclelen();

	cout << "Длина радиуса: " << circle.getLength() << endl;
	cout << "Площадь окружности: " << circle.getArea() << endl;
	cout << "Длина окружности: " << circle.getCirclelen() << endl;
	return 0;
}