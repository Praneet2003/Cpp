//Mutlilevel Inheritance:-
// A class can also be derived from one class,which is already derived from an other class.
//Eg:-
#include<iostream>
using namespace std;
// Base class (parent)
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in 1st parent class." ;
    }
};

// Derived class (child)
class MyChild: public MyClass {
};

// Derived class (grandchild)
class MyGrandChild: public MyChild {
};

int main() {
  MyGrandChild myObj;
  myObj.myFunction();
  return 0;
} 