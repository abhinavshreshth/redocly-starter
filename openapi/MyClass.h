#ifndef MYCLASS_H
#define MYCLASS_H

// Define a simple structure
struct MyStruct {
  int myInt;
  int name;
  double price;
  double vwap;
};

// Define a class containing a pointer to MyStruct
class MyClass {
public:
  MyStruct *DEAL; // Pointer to MyStruct

  // Constructor
  MyClass();

  // Member function to display myInt using arrow operator
  void display();
};

#endif
