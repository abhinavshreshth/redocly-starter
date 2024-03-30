#ifndef MYCLASS_H
#define MYCLASS_H

// Define a simple structure
struct MyStruct {
  int myInt;
};

// Define a class containing a pointer to MyStruct
class MyClass {
public:
  MyStruct *myStructPtr; // Pointer to MyStruct

  // Constructor
  MyClass();

  // Member function to display myInt using arrow operator
  void display();
};

#endif
