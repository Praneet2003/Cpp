// Methods are functions that belongs to the class.
// There are two ways to define functions that belongs to a class:-
// 1:) Inside class definition.
// 2:) Outside class definition.
//Eg:- on inside class defining.
#include<iostream>
using namespace std;
class MyClass {        // The class
  public:              // Access specifier
    void myMethod(){  // Method/function defined inside the class
      cout << "Hello World!";
    }
};

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}

//Eg:- Outside class Defining.

#include <iostream>
using namespace std;
class MyClass {        // The class
  public:              // Access specifier
    void myMethod();   // Method/function declaration
};

// Method/function definition outside the class
void MyClass::myMethod() {
  cout << "Hello World!";
}

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}