// Operators in C++:-
//1:) Unary Operator :) '+','-','*','/','%'......
//    increment & Decrement operator'++','--'.........
//2:) Relational/Comparison Operator :) '>','<','<=','>=','=='.......
//3:) Logical Opertapor :) '&&','||','!'......
//4:) Assignment Operator :) '+=','-=','/=','%=','<<=','>>=','&=','!=','^='......
//5:) Conditional Operator :) '? : :'.
//Eg:-
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    cout<<"a + b is :"<<a+b<<endl;
    cout<<"a - b is :"<<a-b<<endl;
    cout<<"a * b is :"<<a*b<<endl;
    cout<<"a / b is :"<<a/b<<endl;
    cout<<"a / b is :"<<(float)a/b<<endl;
    cout<<"a % b is :"<<a%b<<endl;
}
