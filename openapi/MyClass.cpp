#include <iostream>
#include <memory>

class MyClass {
public:
  MyClass() { std::cout << "MyClass Constructor" << std::endl; }

  ~MyClass() { std::cout << "MyClass Destructor" << std::endl; }

  void doSomething() { std::cout << "Doing something..." << std::endl; }
};

int main() {
  // Using std::unique_ptr
  {
    std::cout << "Using std::unique_ptr:" << std::endl;
    std::unique_ptr<MyClass> uniquePtr(new MyClass);
    uniquePtr->doSomething();
    // Memory automatically released when uniquePtr goes out of scope
  } // Here, MyClass Destructor will be called automatically

  std::cout << std::endl;

  // Using std::shared_ptr
  {
    std::cout << "Using std::shared_ptr:" << std::endl;
    std::shared_ptr<MyClass> sharedPtr1(new MyClass);
    std::shared_ptr<MyClass> sharedPtr2 = sharedPtr1; // Shared ownership
    sharedPtr1->doSomething();
    sharedPtr2->doSomething();
    // Memory automatically released when sharedPtr1 and sharedPtr2 both go out
    // of scope
  } // Here, MyClass Destructor will be called automatically

  return 0;
}
