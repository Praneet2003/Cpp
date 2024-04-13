// OOP (Object-Oriented Programming.)
// *Procedural programming is about writing procedures or functions that perform operations on the data,
//  while object-oriented programming is about creating objects that contain both data and functions.
// *Object-oriented programming has several advantages over procedural programming:
// *OOP is faster and easier to execute
// *OOP provides a clear structure for the programs
// *OOP helps to keep the C++ code DRY "Don't Repeat Yourself", and makes the code easier to maintain, modify and debug
// *OOP makes it possible to create full reusable applications with less code and shorter development time
// 1:) Classes:- Classes are the template for the objects
// 2:) Objects:- Object is an instance for a class.
// Eg:-  | class | object |
//       |       | Bmw    |
//       |  car  | Audi   |
//       |       | Volvo  |

//Acess Specifiers in Class:-
// 1:) Public: (can be acessed from inside as well as outside of the class).
// 2:) private: (can be acessed only from inside of class).
// 2:) protected: (can be acessed fro only subclass inside the class).
//Ex:-
#include<iostream>
#include<string>
using namespace std;

class Employee {
    public:
        string name;
        int salary;
};
int main(){
    Employee firstEmp;
    firstEmp.name="Praneet Raj";
    firstEmp.salary=650;
    cout<<"The name of my First Employee is :"<<firstEmp.name<<" and his Salary is:"<<firstEmp.salary<<endl;
    return 0;
}
//Output:- The name of my First Employee is :Praneet Raj and his Salary is:650
