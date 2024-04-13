#include<iostream>
using namespace std;
class Employee{
    public:
    string name;
    int salary;
    void printDetails(){
        cout<<"The name of our first Employee is: "<<this->name<<" and his salary is : "<<this->salary<<"$"<<endl;
    }
};
int main(){
    Employee firstEmp;
    firstEmp.name = "Praneet";
    firstEmp.salary = 650;
    firstEmp.printDetails();
    return 0;
}