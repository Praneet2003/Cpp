//Polymorphism:-
// It maens "many form" and it occurs when many clases are related to each other by inheritance:-
//Eg:-
#include<iostream>
using namespace std;
class animal{
    public: 
    void animalSound(){
        cout<<"The animal makes sound: \n";
    }
};
class cat:public animal{
    public:
    void animalSound(){
        cout<<"The cat says: meo meo! \n";
    }
};
class dog : public animal{
    public:
    void animalSound(){
        cout<<"The dog Says: Bow bow! ";
    }
};
int main(){
    animal myAnimal;
    cat myCat;
    dog myDog;
    myAnimal.animalSound();
    myCat.animalSound();
    myDog.animalSound();
    return 0;
}
//Output:-
// The animal makes sound: 
// The cat says: meo meo! 
// The dog Says: Bow bow! 
