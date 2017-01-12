#include <iostream>
#include "Shape.h"

class Rectangle : public Shape {
private:
  double base;
  double height;
public:
  ~Rectangle(){};
  
  Rectangle(double base, double height) {
    this->base = base;
    this->height = height;
  }
  virtual double perimeter() const override {
    return (2 * this->base) + (2 * this->height);
  }
  virtual double area() const override {
    return this->base * this->height;
  }
};

int main(void) {
  Rectangle* r = new Rectangle(5, 10);
  
  std::cout << r->perimeter() << std::endl;
  std::cout << r->area() << std::endl;
 
  return 0;
}
  

  
