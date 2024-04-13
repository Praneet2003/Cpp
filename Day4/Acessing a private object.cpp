//Acessing the values of private object using constructor.........
#include<iostream>
using namespace std;
class Employee{
    public:
    string name;
    int salary;
    Employee(string n,int s,int sp){
        this->name=n;
        this->salary=s;
        this->secretPassword=sp;
    }
    void printDetails(){
        cout<<"The name of our first Employee is: "<<this->name<<" and his salary is : "<<this->salary<<"$"<<endl;
    }
    void getSecretPassword(){
        cout<<"The secret password of employee is : "<<this->secretPassword;
    }
    private:
        int secretPassword;
};
int main(){
    Employee firstEmp("Praneet",650,10092911);
    // firstEmp.name = "Praneet";
    // firstEmp.salary = 650;
    firstEmp.printDetails();
    firstEmp.getSecretPassword();
    return 0;
}
//Output:-
//The name of our first Employee is: Praneet and his salary is : 650$
// The secret password of employee is : 10092911