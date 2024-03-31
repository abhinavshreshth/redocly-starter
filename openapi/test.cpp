#include <iostream>
#include <string>
using namespace std;

// Base class representing a Shape
class Shape {
public:
  // Virtual function for calculating area
  virtual double area() const {
    cout << "Base class area()" << endl;
    return 0.0;
  }

  // Virtual destructor
  virtual ~Shape() {}
};

// Derived class representing a Rectangle, inheriting from Shape
class Rectangle : public Shape {
private:
  double length;
  double width;

public:
  // Constructor
  Rectangle(double l, double w) : length(l), width(w) {}

  // Override base class's area function
  double area() const override {
    cout << "Rectangle area()" << endl;
    return length * width;
  }
};

// Derived class representing a Circle, inheriting from Shape
class Circle : public Shape {
private:
  double radius;

public:
  // Constructor
  Circle(double r) : radius(r) {}

  // Override base class's area function
  double area() const override {
    cout << "Circle area()" << endl;
    return 3.14159 * radius * radius;
  }
};

int main() {
  // Create objects of Rectangle and Circle
  Rectangle rectangle(4.0, 6.0);
  Circle circle(5.0);

  // Declare a pointer to Shape class and point it to Rectangle object
  Shape *shapePtr = &rectangle;

  // Call area() function through the pointer
  // Polymorphism: The correct area() function (Rectangle's area) is called at
  // runtime
  cout << "Area of Rectangle: " << shapePtr->area() << endl;

  // Point the pointer to Circle object
  shapePtr = &circle;

  // Call area() function through the pointer
  // Polymorphism: The correct area() function (Circle's area) is called at
  // runtime
  cout << "Area of Circle: " << shapePtr->area() << endl;

  return 0;
}
