#include <iostream>

#include "Shape.h"

class Dot : public Shape {
	virtual double perimeter() const override {
		return 0;
	}

	virtual double area() const override {
		return 0;
	}
};

int main() {
	Shape* dot = new Dot;

	std::cout << dot->perimeter() << std::endl;

	return 0;
}
