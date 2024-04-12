#include<iostream>
using namespace std;
int main(){
    int arr2d[2][3]={
        {1,2,3},
        {4,5,6}
    };
    int arr[4][5];
    for(int i=0; i<4;i++){
        for (int j=0; j<2;j++){
            cout<<"Enter the Elemnt at: "<<i<<"and "<<j<<": ";
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<4;i++){
        for (int j=0; j<2;j++){
            cout<<"The Element af array arr[]at "<<i <<"and "<<j<<"is: "<<arr[i][j]<<endl;
        }
    }
        for(int i=0; i<2;i++){
        for (int j=0; j<3;j++){
            cout<<"The Element af array arr2d[] at "<<i <<"and "<<j<<"is: "<<arr[i][j]<<endl;
        }
    } 
    return 0;  
}

