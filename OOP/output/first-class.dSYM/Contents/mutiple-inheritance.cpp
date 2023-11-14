#include <iostream>
using namespace std;

class Parent{
    public : 
    void parentFun(){
        cout << "I am parent fun" << endl;
    }
};

class Child{

};

class Grandchild : public Child, public Parent{

};

int main(){
    Grandchild grandChildObj;
    grandChildObj.parentFun();
    return 0;
}