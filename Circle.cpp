#include "Shape.h"

struct Circle : public Shape {

	double radius;

	Circle(double radius) : 
		radius(radius) {}

	virtual
	double perimeter() const {
		// return WHAT?
	}

	virtual
	double area() const {
		// return WHAT?
	}
};

#include <iostream>

int main() {

	// Constructor setups up the Circle "struct" or class
	Circle c(3.0);

	std::cout << c.perimeter() << std::endl;
	std::cout << c.area() << std::endl;

}
