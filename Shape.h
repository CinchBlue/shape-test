#ifndef SHAPE_H
#define SHAPE_H

struct Shape {
	virtual ~Shape() {}

	virtual double perimeter() const = 0;

	virtual double area() const = 0;
};


class Dot : public Shape {
	virtual double perimeter() const override {
		return 0;
	}

	virtual double area() const override {
		return 0;
	}
};















#endif // SHAPE_H
