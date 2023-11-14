#include <iostream>
using namespace std;

class Parent{
    public : 
    void parentFun(){
        cout << "I am parent fun" << endl;
    }
};

class Child : public Parent{

};

class Grandchild : public Child{

};

int main(){
    Grandchild grandChildObj;
    grandChildObj.parentFun();
    return 0;
}