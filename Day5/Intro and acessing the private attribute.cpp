//Encapsulation:-
//it maens to hide the snesitive data from the user,you must declare class variable/attributes 
//as private(cannot be accessed from outside of the class).
//Eg:- acessing the private attribute using public "get" and "set" methods:-
#include<iostream>
using namespace std;
class Employee{
    private:
    int salary;
    public:
    void setsalary(int s){
        salary=s;
    }
    int getsalary(){
        return salary;
    }
};
int main(){
    Employee myEmp;
    myEmp.setsalary(1000000);
    cout<<myEmp.getsalary();
    return 0;
}
//Output:- 1000000
//Need of ENcapsulation:-
//1:) Encapsulation ensure the better control of your data, because yo(or others) can change one 
//    part of code without affecting the other parts of code.
//2:) Incresed Security of the code.
