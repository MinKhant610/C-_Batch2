#include <iostream>
using namespace std;

class Parent{
    // public => all
    // private => only 
    // protected => extend
    protected:
    int age;
    public:
    string name;
    void hello(){
        cout << "hello" << endl;
    }
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
};

int main(){
    Child childObj;
    childObj.name = "MinKhant";
    childObj.setData(19);
    childObj.childFun();
    childObj.hello();
    cout << childObj.name << endl;
    childObj.getData();
    return 0;
}