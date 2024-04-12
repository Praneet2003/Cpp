//String:-
//To use  string Functions, we use <string> as header file....
//Initialization of string:- string<string_name> = <vale>;
//Eg:-
#include<iostream>
#include<string>
using namespace std;
int main(){
    string name = "Praneet";
    cout<< "My name is : "<<name<<endl;
    cout<< "Thye length of My name is : "<<name.length()<<endl;
    cout<< "The substr b/w (0,4)of My name is : "<<name.substr(0,4)<<endl;
    // cout<< "My name is :"<<name<<endl;
    return 0;
}