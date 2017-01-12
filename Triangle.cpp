
#include <iostream>
#include <math.h>
#include "Shape.h"

struct Triangle : public Shape {
  double a, b, c;

  Triangle(double one, double two, double three) {
    a = one;
    b = two;
    c = three;
  }

  virtual double perimeter() const override {
    return a + b + c;
  }

  virtual double area() const override {
    double p = (a + b + c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
  }

};

	int main() {
		Shape* tri = new Triangle(2.0, 4.0, 6.0);

		std::cout << tri->perimeter() << " " << tri->area() << std::endl;

		return 0;
	}
