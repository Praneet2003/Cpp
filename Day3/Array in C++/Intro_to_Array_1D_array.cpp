//Array:-
//It is the collection of Simillar type of data......
//1D Array:-
#include<iostream>
using namespace std;
int main(){
    int marks[6];
    for (int i=0; i<6; ++i){
        cout<<"\nEnter of Marks of "<<i<<"Student: ";
        cin>>marks[i];
        cout<<"The marks of "<<i<<"student is: "<< marks[i];
    }
}  