#include "MyClass.h"
#include <iostream>

// Constructor definition
MyClass::MyClass() {
  // Allocate memory for myStructPtr
  myStructPtr = new MyStruct;
}

// Member function to display myInt using arrow operator
void MyClass::display() {
  std::cout << "Value of myInt is: " << myStructPtr->myInt << std::endl;
}

// Main function
int main() {
  // Create an object of MyClass
  MyClass obj;

  // Assign a value to myInt using arrow operator
  obj.myStructPtr->myInt = 10;

  // Display the value of myInt using arrow operator
  obj.display();

  // Deallocate memory for myStructPtr
  delete obj.myStructPtr;

  return 0;
}
