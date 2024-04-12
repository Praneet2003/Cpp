//Pointer:- 
//It is a special type of varibale which stores the address of any other varable.
//Eg:-
#include<iostream>
using namespace std;
int main(){
    int a =34;
    int *ptr;
    ptr = &a;
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of a Using Pointer is: "<<*ptr<<endl;
    cout<<"The address value of a using pointer is: "<<ptr<<endl;
    return 0;
}