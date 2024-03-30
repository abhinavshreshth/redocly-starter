#include <iostream>

// Example class definition
class MyClass {
private:
  // Data member (private by default)
  int myNumber;

public:
  // Constructor (public by default)
  MyClass(int num) {
    myNumber = num; // Initialize the data member
  }

  // Member function (public by default)
  void displayNumber() {
    std::cout << "My number is: " << myNumber << std::endl;
  }
};

int main() {
  // Create an object of MyClass
  MyClass obj(42); // Calls the constructor with argument 42

  // Call the member function to display the number
  obj.displayNumber();

  return 0;
}
