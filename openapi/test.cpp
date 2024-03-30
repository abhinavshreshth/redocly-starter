#include <iostream>
using namespace std;

class MyClass {
public:
  int value;

  // Overloading the dot operator (this is invalid and won't compile)
  int operator.(int val) { return value + val; }
};

// Overloading the ternary conditional operator (this is invalid and won't
// compile)
int operator? (bool condition, int a, int b) { return condition ? a : b; }

int main() {
  MyClass obj;
  obj.value = 10;

  // Attempting to use the overloaded dot operator
  cout << "Value: " << obj .10 << endl; // This will cause a compilation error

  // Attempting to use the overloaded ternary conditional operator
  int result = true ? 10 : 20; // This will cause a compilation error

  return 0;
}
