//Funtions:-
//declaration:- <datatype><function_name>(Parameters);
//Defining:- <datatype><function_name>(Parameters){
    // block of statements;
// }
//Calling:- <function_name>(Parameters);
//Eg:- 
#include<iostream>
using namespace std;
int add(int a, int b){
    int c;
    c = a+b;
    return c;
}
int main(){
    int x,y;
    cout<<"Enter the value of X :" ;
    cin>>x;
    cout<<"Enter the value of Y :" ;
    cin>>y;
    cout<<"Function returned Value is Sum of "<<x<<"and "<< y <<"is " << add(x,y);
}