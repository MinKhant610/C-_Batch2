#include <iostream>
using namespace std;

class Parent{
    // public => all
    // private => only 
    // protected => extend
    protected:
    int age;
    void hello(){
        cout << "hello" << endl;
    }
    public:
    string name;
};

//extend
class Child : public Parent{

    public :
    void childFun(){
        cout << "I am child fun" << endl;
    }

    void setData(int age){
        this->age = age;
    }

    void getData(){
        cout << age << endl;
    }

    void parentFun(){
        hello();
    }
};

int main(){
    Child childObj;
    childObj.name = "MinKhant";
    childObj.setData(19);
    childObj.childFun();
    cout << childObj.name << endl;
    childObj.getData();

    childObj.parentFun();
    return 0;
}