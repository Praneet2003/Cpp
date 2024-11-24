//Inheritance:-
//it means to inherit attributes and methods from one class to another.
//it is classified into two typs:-
//1:) Derived clas(child):- the class that inheritd from the other class.
//2:) Base class(parent):- the class being inherited from.
//eg:- car is a derived class and vehicle is abase class.
#include<iostream>
using namespace std;
// Base class
class Vehicle {
  public:
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public:
    string model = "Mustang";
};

int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}
//need  of Inheritance:-
// it is useful for code reuseability,reuses attributes and methods of an existing class, when you create a new class.. 
