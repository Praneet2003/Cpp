#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>150){
        cout<<"invalid age";
    }else if(age<100 && age>60){
        cout<<"You are Old";
    }else if(age<60 && age>25){
        cout<<"You are young";
    }else if(age<25 && age>18){
        cout<<"You are our youth";
    }else if(age>12 && age<18){
        cout<<"you are a teenager";
    }else{
        cout<<"you are a child";
    }
    return 0;
}