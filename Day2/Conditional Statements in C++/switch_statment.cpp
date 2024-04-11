#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter child age:";
    cin>>age;
    switch (age)
    {
    case 1:
        cout<<"you are 1 year old";
        break;
    case 2:
        cout<<"You are year old";
        break;
    case 3:
        cout<<"You are year old";
        break;
    case 4:
        cout<<"You are year old";
        break;
    case 5:
        cout<<"you are year old";
        break;
    default:
        cout<< "invalid age!";
    return 0;
    }
}