//Constants:-
// *Values cannot be changed during execution of programm.......
// *Constants should be initialized....
// *Best Practice to define Constants is using only uppercase names....

//Ways to define Constants:-
// 1:) using "const" keyword.
// 2:) using "#define" pre-processor.
 

// 1:) Const keyword=>
// Syntax:- 
// const<data_type><variable_name> = <value>;
//              OR
// <data_type> const <variable_name> = <value>;
//
//Eg:-
#include<iostream>
using namespace std;
int main(){
    const float PI=3.14;
    char const Newline = '\n';
    string const Name = "Jon";
    cout<<"Name is : "<<Name << Newline;
    return 0;
}
//
// 2:) Const declaration using "#define" or(Pre-processor dircetives).
// Syntax:-
// #define<identifier><values>(we don't use semicolon in this case)
//
//Eg:-
#include<iostream>
using namespace std;
#define PI 3.14
#define Newline '\n'
#define size 50;
#define Name 'Jon'
int main(){
    cout<< PI<<Newline<<"name is:"<<Name;
    return 0;
}
